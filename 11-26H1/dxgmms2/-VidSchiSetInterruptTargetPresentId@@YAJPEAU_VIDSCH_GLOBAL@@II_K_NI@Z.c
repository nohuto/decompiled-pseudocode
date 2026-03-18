/*
 * XREFs of ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC
 * Callers:
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x140040D94 (-VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAU.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004B17C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14005A124 (-VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEA.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x140115FCC (VidSchiEnsureHwFlipQueueLog.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14012747C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x14001D7BC (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x14001D994 (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     McTemplateK0pqqqxq_EtwWriteTransfer @ 0x14003F308 (McTemplateK0pqqqxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiSetInterruptTargetPresentId(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool a5,
        unsigned int a6)
{
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 v10; // r11
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  enum _DXGK_CRTC_VSYNC_STATE v18; // edx
  enum _DXGK_CRTC_VSYNC_STATE v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r15d
  bool v26; // [rsp+50h] [rbp-59h]
  _BYTE v27[7]; // [rsp+51h] [rbp-58h] BYREF
  KSPIN_LOCK *v28; // [rsp+58h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  __int16 v30; // [rsp+78h] [rbp-31h]
  __int64 v31; // [rsp+80h] [rbp-29h]
  struct _VIDSCH_GLOBAL *v32; // [rsp+88h] [rbp-21h] BYREF
  int v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+94h] [rbp-15h]
  unsigned __int64 v35; // [rsp+98h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-9h]

  v6 = a3;
  v8 = a2;
  v26 = 0;
  v30 = 0;
  v10 = *((_QWORD *)a1 + a2 + 431);
  v11 = (KSPIN_LOCK *)((char *)a1 + 2016);
  v12 = v10 + 304LL * a3;
  v31 = v10;
  v28 = v11;
  if ( a5 )
  {
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
    v10 = v31;
    LOBYTE(v30) = 1;
  }
  if ( a4 > *(_QWORD *)(v12 + 392) )
  {
    v15 = *((_QWORD *)a1 + 2);
    v16 = (*(_DWORD *)(v15 + 3016) & 0x10) != 0 ? (unsigned int)v8 : 0;
    if ( (unsigned int)v16 < 0x10 && *(_DWORD *)(v15 + 4 * v16 + 3192)
      || *((_DWORD *)a1 + 5 * v8 + 547)
      || *((_DWORD *)a1 + 219) )
    {
      a4 = *(_QWORD *)(v12 + 400);
    }
    else
    {
      a4 = *(_QWORD *)(v12 + 392);
      if ( *(_DWORD *)(v12 + 196) <= a6 + *(_DWORD *)(v12 + 200) )
      {
        a4 += a6 + 1LL;
        v26 = VidSchiVSyncDisabledOnAllPlanes(a1, (struct _VIDSCH_PRESENT_INFO *)v10, v6);
      }
    }
  }
  else if ( a4 < *(_QWORD *)(v12 + 400) )
  {
    a4 = *(_QWORD *)(v12 + 400);
  }
  v13 = *(_QWORD *)(v12 + 424);
  if ( v13 == a4 )
  {
    if ( (_BYTE)v30 )
    {
      if ( HIBYTE(v30) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    return 0LL;
  }
  else
  {
    v17 = *(_QWORD *)(v10 + 8 * v6 + 3256);
    v18 = v17 < v13 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    v19 = v17 >= a4 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    if ( v19 != v18 )
      VSYNC_TIME_STATS::VSyncStateChange((VSYNC_TIME_STATS *)(v10 + 78656), v18, v19);
    v20 = *((unsigned int *)a1 + 10);
    v21 = *((_QWORD *)a1 + 4);
    v36 = 0LL;
    v32 = a1;
    v33 = v8;
    v34 = v6;
    v35 = a4;
    v27[0] = 0;
    DpSynchronizeExecution(v21, VidSchiSetInterruptTargetPresentIdAtISR, &v32, v20, v27);
    v25 = v36;
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqqxq_EtwWriteTransfer(v23, v22, v24, *((_QWORD *)a1 + 2), v8, v6, *(_DWORD *)(v12 + 196), a4, v36);
    if ( v25 < 0 )
    {
      if ( g_BreakOnSetInterruptTargetPresentIdErrors && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected driver failing to set interrupt target PresentId.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "VidPnSourceId = %d.\n"
          "Plane = %d.\n"
          "InterruptTargetPresentId = 0x%I64x.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnSetInterruptTargetPresentIdErrors=0\" com"
          "mand,\n"
          "or \"ed 0x%p 0\"\n"
          "\n",
          v8,
          v6,
          a4,
          (const void *)&g_BreakOnSetInterruptTargetPresentIdErrors);
        __debugbreak();
      }
      v25 = 0;
    }
    *(_QWORD *)(v12 + 424) = a4;
    if ( v26 )
    {
      if ( *((_BYTE *)a1 + 2500) )
      {
        *((_DWORD *)a1 + 639) |= 1 << v8;
        if ( *((_DWORD *)a1 + 638) != 1 )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2520), CriticalWorkQueue);
          *((_DWORD *)a1 + 638) = 1;
        }
      }
      else if ( !_InterlockedExchange((volatile __int32 *)a1 + 638, 1) )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2520), CriticalWorkQueue);
      }
    }
    if ( (_BYTE)v30 )
    {
      if ( HIBYTE(v30) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    return (unsigned int)v25;
  }
}
