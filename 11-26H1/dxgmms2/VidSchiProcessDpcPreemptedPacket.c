/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1400271BC
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1400279C0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiCompleteRewindPacket @ 0x14000BE70 (VidSchiCompleteRewindPacket.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140026AD0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140026CDC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x14003761C (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x140038690 (VidSchiFinishMeasuringPreemptionTime.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER v5; // r12
  LARGE_INTEGER PerformanceCounter; // r15
  _QWORD *v7; // r13
  __int64 v8; // r15
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r15d
  __int64 v18; // rcx
  signed __int64 v19; // rcx
  struct _KEVENT *v20; // rcx
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  __int128 v23; // [rsp+68h] [rbp-50h]
  __int64 v24; // [rsp+78h] [rbp-40h]
  _QWORD *v25; // [rsp+C8h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  PerformanceCounter = v5;
  v7 = (_QWORD *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v25 = v7;
  memset(v7, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !v5.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7[1] = PerformanceCounter.QuadPart;
  *(_DWORD *)v7 = 5;
  v8 = *(unsigned int *)(v3 + 1576);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v8 + 1584), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v4, v1);
    WdLogGlobalForLineNumber = 12692;
    DxgkLogInternalTriageEvent(
      v9,
      0x40000,
      v10,
      (unsigned int)L"Context running queue is inconsistant",
      v4,
      v1,
      0LL,
      0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1576) = ((_BYTE)v8 + 1) & 0xF;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    *(_QWORD *)(*(_QWORD *)(v11 + 88) + 176LL) = *(_QWORD *)(v11 + 112);
    v7[3] = *(_QWORD *)(v11 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 128), 1u);
    v12 = *(_QWORD *)(v11 + 88);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 96) + 24LL);
    v24 = 0LL;
    v23 = 0LL;
    if ( (*(_DWORD *)(v12 + 192) & 4) == 0 )
    {
      WdLogSingleEntry3(4LL, v13, v12, *(unsigned int *)(v11 + 112));
      WdLogGlobalForLineNumber = 16168;
      v14 = *(_DWORD *)(v12 + 192) | 4;
      *(_QWORD *)(v12 + 664) = v11;
      *(_DWORD *)(v12 + 192) = v14;
    }
    v7 = v25;
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 876), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 792), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 3016), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(v3, *(_DWORD *)(v1 + 412), v5.QuadPart, PerformanceFrequency.QuadPart);
  v16 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1576) + 1584);
  if ( v16 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v16 + 412), v5.QuadPart);
  if ( *(int *)(v3 + 3000) > 0 )
    RtlSetBitEx(v4 + 552, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 796), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 192) &= ~8u;
    if ( (*(_DWORD *)(v1 + 192) & 0x20) != 0 )
      *(_DWORD *)(v1 + 192) &= ~0x20u;
    if ( (*(_DWORD *)(v1 + 192) & 0x10) != 0 )
      *(_DWORD *)(v1 + 192) &= ~0x10u;
    if ( (*(_DWORD *)(v1 + 192) & 0x40) != 0 )
      *(_DWORD *)(v1 + 192) &= ~0x40u;
    *(_DWORD *)(v1 + 192) &= ~2u;
    v17 = VidSchiCompleteRewindPacket(v1, 1);
    VidSchiSetTransferContextRunningTime(v1, 0LL, 1);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 412) + 1896);
    v18 = *(unsigned int *)(v1 + 412);
    if ( !*(_DWORD *)(v3 + 4 * v18 + 1896) )
      *(_DWORD *)(v3 + 1892) &= ~(1 << v18);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  else
  {
    v17 = 0;
  }
  v7[2] = *(_QWORD *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  do
    v19 = *(_QWORD *)(a1 + 104);
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 96), v19, *(_QWORD *)(v3 + 96)) != v19 );
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0, v15);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, 0LL, 0LL, 0LL, a1, 0LL);
  v20 = *(struct _KEVENT **)(a1 + 200);
  if ( v20 )
    KeSetEvent(v20, 0, 0);
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v1 + 384));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v3 + 408));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v4 + 1912));
  *(_QWORD *)(v1 + 360) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 328), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1720) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1688), 0, 0);
  if ( v17 )
  {
    *(_QWORD *)(v4 + 1496) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1464), 0, 0);
  }
  return result;
}
