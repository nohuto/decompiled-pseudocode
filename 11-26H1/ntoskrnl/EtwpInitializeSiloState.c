/*
 * XREFs of EtwpInitializeSiloState @ 0x140826150
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1406C3DB8 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1406C4078 (EtwpQuerySiloRegistrySettings.c)
 *     EtwpInitializeAutoLoggers @ 0x14082DCE0 (EtwpInitializeAutoLoggers.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeSiloState(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool IsHostSilo; // si
  __int64 MaximumProcessorCount; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *v16; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rsi
  __int64 v22; // rdx
  _WORD *v23; // r9
  unsigned int i; // r8d
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 104);
  v6 = 0;
  IsHostSilo = PsIsHostSilo(v5);
  if ( IsHostSilo )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v4 + 4440) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    Pool2[3] = 0LL;
    Pool2[2] = EtwpUnsubscribeContainerStateWnf;
    *Pool2 = 0LL;
    *(_DWORD *)(v4 + 4432) = 0;
    ExSubscribeWnfStateChange(
      v4 + 4424,
      (unsigned int)&WNF_CONT_CONTAINER_STATE,
      1,
      0,
      (__int64)EtwpContainerStateWnfCallback,
      0LL);
  }
  else
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v9 = ExAllocatePool2(0x48uLL);
    *(_QWORD *)(v4 + 4416) = v9;
    if ( !v9 )
      return (unsigned int)-1073741801;
    v10 = MaximumProcessorCount;
    v11 = v9 + (MaximumProcessorCount << 6);
    if ( (_DWORD)MaximumProcessorCount )
    {
      v12 = 0LL;
      do
      {
        *(_QWORD *)(v12 + *(_QWORD *)(v4 + 4416)) = v11;
        v12 += 64LL;
        v13 = v11 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(*(_QWORD *)(v4 + 4416) + v12 - 56) = v13;
        v14 = v13 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(*(_QWORD *)(v4 + 4416) + v12 - 48) = v14;
        v11 = v14 + 8LL * *(unsigned int *)(v4 + 16);
        --v10;
      }
      while ( v10 );
    }
  }
  v16 = PsAttachSiloToCurrentThread(a1);
  EtwpQuerySiloRegistrySettings(v4);
  EtwpQueryPartitionRegistryInformation(
    (_OWORD *)(v4 + 4448),
    (PVOID *)(v4 + 4488),
    (_WORD *)(v4 + 4496),
    (_DWORD *)(v4 + 4500),
    (_QWORD *)(v4 + 4480),
    (_OWORD *)(v4 + 4464));
  if ( IsHostSilo )
    qword_140FFB918 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers(a2);
  if ( IsHostSilo )
    qword_140FFB920 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (AutoBoost *)KeAbPreAcquire(v4 + 688, 0LL, 0LL, v18);
  v21 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 688), v19, v4 + 688);
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v21, v20);
    else
      *((_BYTE *)v21 + 10) = 1;
  }
  v22 = v4 + 152;
  *(_QWORD *)(v4 + 696) = KeGetCurrentThread();
  v23 = (_WORD *)(v4 + 4304);
  for ( i = 0; i < 0x10; ++i )
  {
    if ( *v23 )
    {
      *(_WORD *)(v22 + 6) = *v23;
      *(_DWORD *)v22 = 1;
      *(_BYTE *)(v22 + 4) = -1;
      *(_QWORD *)(v22 + 16) = -1LL;
      *(_QWORD *)(v22 + 24) = 0LL;
      *(_DWORD *)(v22 + 8) = 64;
      *(_WORD *)(v4 + 4336) |= 1 << i;
    }
    ++v23;
    v22 += 32LL;
  }
  *(_QWORD *)(v4 + 696) = 0LL;
  _m_prefetchw((const void *)(v4 + 688));
  v25 = *(_QWORD *)(v4 + 688);
  v26 = v25 - 16;
  if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v26 = 0LL;
  if ( (v25 & 2) != 0
    || (v27 = *(_QWORD *)(v4 + 688),
        v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 688), v26, v25)) )
  {
    ExfReleasePushLock((_QWORD *)(v4 + 688));
  }
  KeAbPostRelease(v4 + 688);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v4 + 4368) = 0LL;
  *(_QWORD *)(v4 + 4352) = 0LL;
  *(_QWORD *)(v4 + 4360) = 0LL;
  return v6;
}
