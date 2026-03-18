/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x140027C1C
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1400279C0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 *     VidSchiCompleteRewindPacket @ 0x14000BE70 (VidSchiCompleteRewindPacket.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x14000C1AC (VidSchiProcessCompletedQueuePacket.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140012B50 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x140026AD0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140026CDC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x14002E9D4 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x140030924 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x140030A00 (VidSchiStartNodeYield.c)
 *     VidSchiCheckYieldExitCondition @ 0x140031BF4 (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x14003761C (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x140038690 (VidSchiFinishMeasuringPreemptionTime.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x14003DAC0 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140045214 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x14004C90C (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v2; // r14
  int v3; // eax
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // r15d
  LARGE_INTEGER PerformanceCounter; // r15
  LARGE_INTEGER *v10; // rax
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  LONGLONG *v15; // r8
  signed __int64 v16; // rcx
  struct _VIDSCH_QUEUE_PACKET *v17; // rdx
  struct VIDMM_DMA_BUFFER *v18; // r15
  bool v19; // dl
  __int64 v20; // r15
  char v21; // r15
  int v22; // r10d
  unsigned int v23; // r12d
  struct _KEVENT *v24; // rcx
  struct _VIDSCH_QUEUE_PACKET *v25; // rcx
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // r8d
  int v33; // eax
  int v34; // ecx
  unsigned int refreshed; // eax
  char v36; // al
  LARGE_INTEGER *v37; // rax
  int v38; // eax
  _BYTE *v39; // r8
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // rdx
  char v43; // al
  _BYTE *v44; // rax
  _BYTE *v45; // r9
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  __int64 v48; // rdx
  char v49; // al
  _BYTE *v50; // rax
  unsigned __int64 QuadPart; // [rsp+50h] [rbp-49h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-41h] BYREF
  LARGE_INTEGER *v53; // [rsp+60h] [rbp-39h]
  __int64 v54; // [rsp+68h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-29h] BYREF
  struct _KEVENT *v56; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v57[2]; // [rsp+90h] [rbp-9h] BYREF
  char v58; // [rsp+A0h] [rbp+7h]
  int v59; // [rsp+A4h] [rbp+Bh]
  char v60; // [rsp+100h] [rbp+67h] BYREF
  char v61; // [rsp+108h] [rbp+6Fh]
  int v62; // [rsp+110h] [rbp+77h]
  int v63; // [rsp+118h] [rbp+7Fh]

  v61 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *((_QWORD *)a1 + 6);
  v3 = *((_DWORD *)a1 + 18);
  v4 = 15LL;
  LOBYTE(v62) = 0;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v54 = v6;
  v7 = *(_QWORD *)(v5 + 24);
  if ( v3 == 18 )
  {
    v63 = 9;
    v8 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v63 = 0;
    v8 = 13;
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = v8;
  if ( *((_QWORD *)a1 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)a1 + 7) + 52LL) = v8;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 2016), &LockHandle);
  v56 = (struct _KEVENT *)v7;
  v58 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v57[1] = v57;
  v59 = 2;
  v57[0] = v57;
  QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  PerformanceCounter.QuadPart = QuadPart;
  v53 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
  memset(v53, 0, 0x70uLL);
  *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
  if ( !QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = v53;
  v53[1] = PerformanceCounter;
  v11 = bTracingEnabled == 0;
  v10->LowPart = 4;
  if ( !v11
    && (byte_14008A204 & 0x40) != 0
    && *((_BYTE *)DXGGLOBAL::GetGlobal() + 305736)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 3072), 1, 0) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 3040), NormalWorkQueue);
  }
  v12 = *(unsigned int *)(v5 + 1576);
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v12 + 1584), 0LL, v2) )
  {
    WdLogSingleEntry2(1LL, v7, v6);
    WdLogGlobalForLineNumber = 12241;
    DxgkLogInternalTriageEvent(
      v31,
      0x40000,
      v32,
      (unsigned int)L"Context running queue is inconsistant",
      v7,
      v6,
      0LL,
      0LL);
  }
  *(_QWORD *)(v5 + 224) = v2;
  *(_DWORD *)(v5 + 1576) = (v12 + 1) & 0xF;
  if ( (*((_DWORD *)a1 + 23) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v7 + 876), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v7 + 792), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 3016), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(v5, *(_DWORD *)(v2 + 412), QuadPart, PerformanceFrequency.QuadPart);
  v14 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1576) + 1584);
  if ( v14 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v5, *(_DWORD *)(v14 + 412), QuadPart);
  if ( *(int *)(v5 + 3000) > 0 )
    RtlSetBitEx(v7 + 552, *(unsigned __int16 *)(v5 + 4));
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 796)) )
  {
    *(_DWORD *)(v2 + 192) &= ~2u;
    if ( (*(_DWORD *)(v2 + 192) & 8) != 0 )
    {
      *(_DWORD *)(v2 + 192) &= ~8u;
      v33 = VidSchiCompleteRewindPacket(v2, 1);
      v34 = (unsigned __int8)v62;
      if ( v33 )
        v34 = 1;
      v62 = v34;
    }
    if ( v6 == *(_QWORD *)(v7 + 264) )
      VidSchiUpdateContextStatus(v2, 0, 12319LL);
    else
      VidSchiSetTransferContextRunningTime(v2, 0LL, 1);
    --*(_DWORD *)(v5 + 4LL * *(unsigned int *)(v2 + 412) + 1896);
    v29 = *(unsigned int *)(v2 + 412);
    if ( !*(_DWORD *)(v5 + 4 * v29 + 1896) )
      *(_DWORD *)(v5 + 1892) &= ~(1 << v29);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  if ( *(_BYTE *)(v5 + 2144) )
  {
    if ( *(_QWORD *)(v5 + 2120) )
    {
      v60 = 0;
      VidSchiCheckYieldExitCondition(v5, QuadPart, &v60);
      v36 = v62;
      if ( v60 )
        v36 = 1;
      LOBYTE(v62) = v36;
    }
    else if ( ((-1 << (*(_BYTE *)(v7 + 224) + 1)) & *(_DWORD *)(v5 + 1892)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v5, v14, v13);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v5,
        QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      LOBYTE(v62) = 1;
    }
  }
  v15 = (LONGLONG *)v53;
  v53[2] = *(LARGE_INTEGER *)((char *)a1 + 104);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16) + 444LL) & 0x200) != 0
    && *(_DWORD *)(v5 + 496)
    && *((_QWORD *)a1 + 13) != *(_QWORD *)(v5 + 472) )
  {
    *(_DWORD *)(v5 + 496) = 0;
  }
  _m_prefetchw((const void *)(v5 + 96));
  do
    v16 = *((_QWORD *)a1 + 13);
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 96), v16, *(_QWORD *)(v5 + 96)) != v16 );
  v17 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  if ( v17 )
  {
    v15[3] = *((_QWORD *)v17 + 14);
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)&v56, v17);
    *((_DWORD *)a1 + 23) |= 0x80u;
    v61 = 1;
  }
  v18 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)a1 + 8);
  if ( (*((_DWORD *)a1 + 23) & 2) != 0 )
    VidMmUnreferenceDmaBuffer(*((_QWORD *)a1 + 8), 0LL);
  v19 = 1;
  if ( (*((_DWORD *)a1 + 23) & 1) != 0 )
  {
    v30 = *((_QWORD *)a1 + 7);
    if ( !v30 || *(_DWORD *)(v30 + 48) != 8 )
      v19 = 0;
    VidMmReleaseDmaBuffer(v18, v19);
  }
  v20 = *((_QWORD *)a1 + 7);
  if ( v20 && *(_QWORD *)(v20 + 272) )
  {
    v27 = 0;
    if ( *(_DWORD *)(v20 + 632) )
    {
      do
      {
        v28 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v20 + 272) + 16LL * v27);
        if ( *(_QWORD *)v28 )
          VidSchiProcessHistoryBuffer(a1, v28);
        ++v27;
      }
      while ( v27 < *(_DWORD *)(v20 + 632) );
      v4 = 15LL;
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v20);
    v6 = v54;
  }
  VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v56, *(_QWORD *)(v6 + 40));
  VidSchiCheckPendingDeviceCommand((_QWORD *)v6);
  v21 = v62;
  if ( _bittest64(*(const signed __int64 **)(v7 + 512), *(unsigned __int16 *)(v5 + 4)) )
    v21 = 1;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)a1 + 6), 0, 1);
  v22 = v63;
  if ( v63 )
  {
    v37 = v53;
    LOBYTE(v53[4].LowPart) = 1;
    *(_OWORD *)&v37[5].LowPart = *(_OWORD *)(v6 + 216);
    *(_OWORD *)&v37[7].LowPart = *(_OWORD *)(v6 + 232);
    v38 = *(_DWORD *)(v6 + 232);
    if ( (v38 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v5 + 2152) )
      {
        v39 = (_BYTE *)(v7 + 3285);
        v40 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 2648LL);
        if ( !v40 )
          goto LABEL_91;
        v41 = (_BYTE *)(v7 + 3285);
        v42 = v40 - (_QWORD)v39;
        do
        {
          if ( v4 == -2147483631 )
            break;
          v43 = v41[v42];
          if ( !v43 )
            break;
          *v41++ = v43;
          --v4;
        }
        while ( v4 );
        v22 = v63;
        v44 = v41 - 1;
        if ( v4 )
          v44 = v41;
        *v44 = 0;
        if ( !v4 )
LABEL_91:
          *v39 = 0;
        *(_DWORD *)(v7 + 3300) = *(_DWORD *)(v2 + 144);
        *(_DWORD *)(v5 + 2152) = 1;
      }
    }
    else if ( (v38 & 8) != 0 && !*(_DWORD *)(v5 + 2148) )
    {
      v45 = (_BYTE *)(v5 + 2156);
      v46 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 2648LL);
      if ( !v46 )
        goto LABEL_103;
      v47 = (_BYTE *)(v5 + 2156);
      v48 = v46 - (_QWORD)v45;
      do
      {
        if ( v4 == -2147483631 )
          break;
        v49 = v47[v48];
        if ( !v49 )
          break;
        *v47++ = v49;
        --v4;
      }
      while ( v4 );
      v50 = v47 - 1;
      if ( v4 )
        v50 = v47;
      *v50 = 0;
      if ( !v4 )
LABEL_103:
        *v45 = 0;
      *(_DWORD *)(v5 + 2172) = *(_DWORD *)(v2 + 144);
      *(_QWORD *)(v5 + 2176) = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 2656LL);
      *(_DWORD *)(v5 + 2148) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v56, v6, v22, 0LL);
    v23 = 13;
  }
  else
  {
    v23 = 9;
  }
  HwQueueStagingList::ProcessHwQueues(&v56, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v23, v7, v5, 0LL, 0LL, 0LL, (__int64)a1, 0LL);
  VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v2 + 384));
  VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v5 + 408));
  VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1912));
  *(_QWORD *)(v2 + 360) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 328), 0, 0);
  *(_QWORD *)(v5 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 240), 0, 0);
  *(_QWORD *)(v7 + 1720) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 1688), 0, 0);
  if ( v21 )
  {
    *(_QWORD *)(v7 + 1496) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1464), 0, 0);
  }
  v24 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v24 )
    KeSetEvent(v24, 0, 0);
  VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1960));
  v25 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  v26 = -1;
  if ( v25 )
    v26 = *((_DWORD *)v25 + 42);
  if ( v61 )
    VidSchiProcessCompletedQueuePacket(v25);
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v26 != -1 && (*((_DWORD *)a1 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v7 + 8LL * v26 + 3448),
      (struct _VIDSCH_GLOBAL *)v7);
  HwQueueStagingList::~HwQueueStagingList(&v56);
}
