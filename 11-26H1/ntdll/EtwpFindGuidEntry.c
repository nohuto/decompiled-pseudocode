/*
 * XREFs of EtwpFindGuidEntry @ 0x1800421B0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180041FE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180042BBC (EtwpReferenceUmGuidEntry.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1)
{
  void *UniqueThread; // rbx
  unsigned __int64 Root; // rbx
  _QWORD *j; // rbp
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *i; // rcx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( !EtwpGuidEntryTable.Root )
    {
LABEL_11:
      EtwpProvLockOwner = 0;
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
  }
  j = 0LL;
  v5 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v6 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
      if ( v6 < 0 )
        break;
      if ( v6 > 0 )
      {
        v7 = *(_QWORD *)(Root + 8);
LABEL_7:
        if ( v5 && v7 )
          goto LABEL_14;
        goto LABEL_8;
      }
      v7 = *(_QWORD *)Root;
      j = (_QWORD *)Root;
      if ( v5 && v7 )
      {
LABEL_14:
        Root ^= v7;
        goto LABEL_9;
      }
LABEL_8:
      Root = v7;
LABEL_9:
      if ( !Root )
        goto LABEL_10;
    }
    v7 = *(_QWORD *)Root;
    goto LABEL_7;
  }
LABEL_10:
  if ( !j )
    goto LABEL_11;
  while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(j) )
  {
    v9 = (_QWORD **)j[1];
    v10 = j;
    if ( v9 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v9; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v10 )
          break;
        v10 = j;
      }
    }
    if ( j )
    {
      v11 = *Buf1 - j[3];
      if ( *Buf1 == j[3] )
        v11 = Buf1[1] - j[4];
      if ( !v11 )
        continue;
    }
    goto LABEL_11;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return j;
}
