/*
 * XREFs of EtwpFindRegistration @ 0x180050B20
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 *     EtwpRegistrationCompare @ 0x1800CD020 (EtwpRegistrationCompare.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindRegistration(void *Buf1, __int64 a2)
{
  void *UniqueThread; // rbx
  unsigned __int16 v3; // bp
  unsigned __int64 v5; // rbx
  _QWORD *j; // r14
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *i; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v3 = a2;
  v14[0] = Buf1;
  v14[1] = (unsigned __int16)a2;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  v5 = EtwpRegistrationTable;
  if ( (qword_1801CB210 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable )
    {
LABEL_21:
      EtwpProvLockOwner = 0;
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    v5 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  }
  j = 0LL;
  v7 = qword_1801CB210 & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = memcmp(Buf1, (const void *)(v5 + 32), 0x10uLL);
      if ( v8 )
        break;
      if ( v3 < *(_WORD *)(v5 + 84) )
        goto LABEL_6;
      if ( v3 > *(_WORD *)(v5 + 84) )
        goto LABEL_13;
      v9 = *(_QWORD *)v5;
      j = (_QWORD *)v5;
      if ( v7 && v9 )
      {
LABEL_15:
        v5 ^= v9;
        goto LABEL_9;
      }
LABEL_8:
      v5 = v9;
LABEL_9:
      if ( !v5 )
        goto LABEL_10;
    }
    if ( v8 < 0 )
LABEL_13:
      v9 = *(_QWORD *)v5;
    else
LABEL_6:
      v9 = *(_QWORD *)(v5 + 8);
    if ( v7 && v9 )
      goto LABEL_15;
    goto LABEL_8;
  }
LABEL_10:
  if ( !j )
    goto LABEL_21;
  while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(j + 9) )
  {
    v11 = (_QWORD **)j[1];
    v12 = j;
    if ( v11 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v11; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v12 )
          break;
        v12 = j;
      }
    }
    if ( !j || (unsigned int)EtwpRegistrationCompare(v14, j) )
      goto LABEL_21;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return j;
}
