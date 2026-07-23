/*
 * XREFs of SmCreatePartition @ 0x140AAEDD0
 * Callers:
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SmPartitionCleanup @ 0x14081F1A0 (SmPartitionCleanup.c)
 *     SmPartitionInitialize @ 0x14081F244 (SmPartitionInitialize.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 */

__int64 __fastcall SmCreatePartition(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbp
  int v5; // esi
  unsigned int i; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rbp
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _BYTE v18[4]; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-114h]
  int v20; // [rsp+28h] [rbp-110h]
  unsigned __int64 v21; // [rsp+50h] [rbp-E8h]

  memset_0(v18, 0, 0xF8uLL);
  v2 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v4 = 0LL;
    v5 = -1;
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      memset_0(v18, 0, 0xF8uLL);
      v19 = i;
      v20 = -1;
      MmManagePartitionMemoryInformation(a1, v18, 248LL, 0LL);
      if ( v21 > v4 )
      {
        v4 = v21;
        v5 = i;
      }
    }
    v7 = v5 | 0x80000000;
    if ( v5 == -1 )
      v7 = -1;
    v8 = SmAllocEx(2944LL, 0x61506D53u, v7);
    v9 = v8;
    if ( v8 )
    {
      SmPartitionInitialize(v8);
      *(_QWORD *)(v9 + 2208) = a1;
      *(_QWORD *)(v9 + 2336) = PspTlsContext.WaitBlock[2].Thread;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E27C48, 0LL, 0LL, v11);
      v14 = _interlockedbittestandset64(&stru_140E27C48.Header.Lock, 0LL);
      v15 = v12;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E27C48, v12, (__int64)&stru_140E27C48);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v13);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v16 = (_QWORD *)qword_140E27C40;
        v17 = (_QWORD *)(v9 + 2232);
        if ( *(__int64 **)qword_140E27C40 != &qword_140E27C38 )
          __fastfail(3u);
        *v17 = &qword_140E27C38;
        *(_QWORD *)(v9 + 2240) = v16;
        *v16 = v17;
        qword_140E27C40 = v9 + 2232;
        *(_QWORD *)(a1 + 24) = v9;
        v9 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E27C48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E27C48.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E27C48);
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        SmPartitionCleanup(v9);
        CmSiFreeMemory((PPRIVILEGE_SET)v9);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
