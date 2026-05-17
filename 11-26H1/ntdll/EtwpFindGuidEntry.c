/*
 * XREFs of EtwpFindGuidEntry @ 0x180057C30
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180057A60 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x18005863C (EtwpReferenceUmGuidEntry.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1, __int64 a2)
{
  void *UniqueThread; // rbx
  unsigned __int64 v4; // rbx
  _QWORD *j; // rbp
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *i; // rcx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  v4 = EtwpGuidEntryTable;
  if ( (qword_1801CB1F8 & 1) != 0 )
  {
    if ( !EtwpGuidEntryTable )
    {
LABEL_11:
      EtwpProvLockOwner = 0;
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    v4 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
  }
  j = 0LL;
  v6 = qword_1801CB1F8 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = memcmp(Buf1, (const void *)(v4 + 24), 0x10uLL);
      if ( v7 < 0 )
        break;
      if ( v7 > 0 )
      {
        v8 = *(_QWORD *)(v4 + 8);
LABEL_7:
        if ( v6 && v8 )
          goto LABEL_14;
        goto LABEL_8;
      }
      v8 = *(_QWORD *)v4;
      j = (_QWORD *)v4;
      if ( v6 && v8 )
      {
LABEL_14:
        v4 ^= v8;
        goto LABEL_9;
      }
LABEL_8:
      v4 = v8;
LABEL_9:
      if ( !v4 )
        goto LABEL_10;
    }
    v8 = *(_QWORD *)v4;
    goto LABEL_7;
  }
LABEL_10:
  if ( !j )
    goto LABEL_11;
  while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(j) )
  {
    v10 = (_QWORD **)j[1];
    v11 = j;
    if ( v10 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v10; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v11 )
          break;
        v11 = j;
      }
    }
    if ( j )
    {
      v12 = *Buf1 - j[3];
      if ( *Buf1 == j[3] )
        v12 = Buf1[1] - j[4];
      if ( !v12 )
        continue;
    }
    goto LABEL_11;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return j;
}
