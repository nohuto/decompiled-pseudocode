/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x14085B75C
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeGuardedMutex @ 0x140492250 (KeInitializeGuardedMutex.c)
 */

unsigned __int64 *CmpInitializeDelayedCloseTable()
{
  unsigned __int64 *result; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int128 *v3; // r10
  __int64 v4; // r11
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // r10
  const char *v10; // rcx
  unsigned int v11; // r9d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _KWAIT_BLOCK *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  __int64 Flink_low; // rax

  CmpKeyLockTracker.StackBase = 0LL;
  CmpKeyLockTracker.StackLimit = CmpDelayCloseWorker;
  CmpKeyLockTracker.QuantumTarget = 0LL;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
  result = &CmpKeyLockTracker.ThreadLock;
  CmpKeyLockTracker.CycleTime = (volatile unsigned __int64)&CmpKeyLockTracker.ThreadLock;
  CmpKeyLockTracker.ThreadLock = (unsigned __int64)&CmpKeyLockTracker.ThreadLock;
  _mm_lfence();
  if ( !qword_140E624B0 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0x584LL;
    qword_140E624B0 = v2;
    if ( !v2 )
    {
      v2 = 1LL;
      qword_140E624B0 = 1LL;
    }
    v3 = &KeServiceDescriptorTable;
    v4 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x584LL;
    qword_140E624B8 = v4;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v5 = 64;
    v6 = v2;
    v7 = 8LL;
    do
    {
      v6 = __ROR8__(v6 - *(_QWORD *)v3, v4);
      v3 = (__int128 *)((char *)v3 + 8);
      v5 -= 8;
      --v7;
    }
    while ( v7 );
    for ( ; v5; --v5 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (__int128 *)((char *)v3 + 1);
      v6 = __ROR8__(v6 - v8, v4);
    }
    v9 = (_QWORD *)KeServiceDescriptorTable;
    v10 = (const char *)KeServiceDescriptorTable;
    qword_140E624C8 = v6;
    v11 = 4 * xmmword_1412018D0;
    v12 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1412018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v12 )
    {
      do
      {
        _mm_prefetch(v10, 0);
        v10 += 64;
      }
      while ( (unsigned __int64)v10 < v12 );
    }
    v13 = v2;
    if ( v11 >= 8 )
    {
      v14 = (unsigned __int64)v11 >> 3;
      do
      {
        v13 = __ROR8__(v13 - *v9++, v4);
        v11 -= 8;
        --v14;
      }
      while ( v14 );
    }
    for ( ; v11; --v11 )
    {
      v15 = *(unsigned __int8 *)v9;
      v9 = (_QWORD *)((char *)v9 + 1);
      v13 = __ROR8__(v13 - v15, v4);
    }
    qword_140E624D0 = v13;
    v16 = &stru_140FC01F0.WaitBlock[3];
    _mm_prefetch((const char *)&stru_140FC01F0.WaitBlockFill7[144], 0);
    v17 = 4LL;
    v18 = 32;
    do
    {
      v2 = __ROR8__(v2 - (unsigned __int64)v16->WaitListEntry.Flink, v4);
      v16 = (_KWAIT_BLOCK *)((char *)v16 + 8);
      v18 -= 8;
      --v17;
    }
    while ( v17 );
    for ( ; v18; --v18 )
    {
      Flink_low = LOBYTE(v16->WaitListEntry.Flink);
      v16 = (_KWAIT_BLOCK *)((char *)v16 + 1);
      v2 = __ROR8__(v2 - Flink_low, v4);
    }
    qword_140E624D8 = v2;
    result = (unsigned __int64 *)(KiQueryUnbiasedInterruptTime()
                                + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                                + 288000000000LL);
    qword_140E624C0 = (__int64)result;
  }
  return result;
}
