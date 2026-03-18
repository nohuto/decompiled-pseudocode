/*
 * XREFs of ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14001D1F0 (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14001D600 (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14001DA10 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14003BAB8 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14003C3F0 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003F7F8 (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1400405EC (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1400472D8 (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiProcessDpcVSyncHwFlipQueue(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int i; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // r8d
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // r12d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned int j; // ebx
  __int64 v21; // r9
  bool v22; // zf
  unsigned __int64 v23; // rdx
  unsigned int v24; // ebx
  void (__fastcall *v25)(_QWORD, _QWORD); // rax
  int v26; // edx
  __int64 v27; // rcx
  bool v28[8]; // [rsp+78h] [rbp-90h] BYREF
  struct _VIDSCH_DEVICE *v29; // [rsp+80h] [rbp-88h] BYREF
  struct _KEVENT *v30; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-78h] BYREF
  char v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v36; // [rsp+C8h] [rbp-40h]
  unsigned int v37[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v40[10]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v41[10]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v42[10]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  *(_DWORD *)&v28[4] = 0;
  memset(v40, 0, sizeof(v40));
  v39 = 0LL;
  v3 = *(_DWORD *)(v1 + 160);
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  if ( v3 )
    memset(v37, -1, 4LL * v3);
  v4 = *((unsigned int *)a1 + 27);
  if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(v1 + 48) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(v1 + 8 * v4 + 3448);
    v34 = v1 + 2016;
    v28[0] = 0;
    v29 = 0LL;
    v36 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 2016), &LockHandle);
    LOBYTE(v36) = 1;
    v30 = (struct _KEVENT *)v1;
    v31[1] = v31;
    v32 = 0;
    v31[0] = v31;
    v33 = 2;
    VidSchiRecordVSyncTiming(a1, v6, v7, v8);
    v9 = 2560LL;
    if ( *(_BYTE *)(v1 + 2500) )
      v9 = 4 * v4 + 2560;
    _InterlockedExchange((volatile __int32 *)(v9 + v1), 0);
    if ( (*(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 164)) && *((_DWORD *)a1 + 4) == 18 )
    {
      if ( *(_QWORD *)(v5 + 32) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 32); ++i )
        {
          v11 = *((unsigned int *)a1 + i + 33);
          v12 = *((_DWORD *)a1 + i + 43);
          if ( *(_DWORD *)(304 * v11 + v5 + 376) != v12 )
            VidSchiCommitFlipQueueLogUpdate((struct _VIDSCH_PLANE_STATE *)(304 * v11 + v5 + 152), v11, v12, v37, 1);
        }
      }
      VidSchiCompleteFlipsFromLatestPresentId(
        (struct HwQueueStagingList *)&v30,
        (struct _VIDSCH_GLOBAL *)v1,
        v4,
        *((_DWORD *)a1 + 29),
        0LL,
        v40,
        (unsigned int *)&v28[4],
        v28,
        v37,
        &v29);
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)a1 + 11);
        if ( v15 > 0xFFFFFFFF )
        {
          WdLogSingleEntry1(3LL, v15);
          WdLogGlobalForLineNumber = 7091;
        }
        v16 = *((_DWORD *)a1 + 22);
        if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
        {
          if ( v29 )
            v26 = *(_DWORD *)(v1 + 2832);
          else
            v26 = 0;
          if ( v29 )
          {
            v27 = *((_QWORD *)v29 + 1);
            if ( !v27 )
              LODWORD(v27) = (_DWORD)v29;
          }
          else
          {
            LODWORD(v27) = 0;
          }
          McTemplateK0pqxqqipqx_EtwWriteTransfer(
            v27,
            v26,
            v13,
            *(_QWORD *)(v1 + 16),
            *((_DWORD *)a1 + 28),
            *((_QWORD *)a1 + 16),
            *((_DWORD *)a1 + 27),
            v16,
            *((_QWORD *)a1 + 7),
            v27,
            v26,
            v40[0]);
        }
        if ( *((_DWORD *)a1 + 4) == 18 )
        {
          memset(v42, 0, sizeof(v42));
          memset(v41, 0, sizeof(v41));
          for ( j = 0; j < *((_DWORD *)a1 + 32); ++j )
          {
            v21 = *((unsigned int *)a1 + j + 33);
            v18 = 304 * v21;
            v22 = (byte_14008A204 & 0x20) == 0;
            v42[v21] = *(_QWORD *)(304 * v21 + v5 + 400);
            v41[v21] = *(_QWORD *)(304 * v21 + v5 + 424);
            if ( !v22 && v37[v21] != -1 )
              VidSchiTraceHwFlipQueueLogUpdate((struct _VIDSCH_GLOBAL *)v1, *((_QWORD *)a1 + 11), v4, v21, v37[v21]);
          }
          if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
                v18,
                v17,
                v19,
                *(_QWORD *)(v1 + 16),
                *(_DWORD *)(v1 + 160),
                (__int64)v42,
                *((_DWORD *)a1 + 27),
                v16,
                *(_DWORD *)&v28[4],
                (__int64)v40,
                (__int64)v41);
          }
          else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
              (unsigned int)v41,
              v17,
              v19,
              *(_QWORD *)(v1 + 16),
              *(_DWORD *)(v1 + 160),
              (__int64)v42,
              *((_DWORD *)a1 + 27),
              v16,
              *(_DWORD *)&v28[4],
              (__int64)v40,
              0,
              0LL,
              *((_BYTE *)a1 + 104) == 0,
              (__int64)v41);
          }
        }
      }
      v14 = *(struct _VIDSCH_FLIP_QUEUE_ENTRY **)(v5 + 120);
      if ( v14
        && VidSchiStallingFlipEntryUnblocked((struct _VIDSCH_GLOBAL *)v1, (struct _VIDSCH_PRESENT_INFO *)v5, v14, 0LL) )
      {
        *(_QWORD *)(v5 + 120) = 0LL;
      }
      VidSchiSubmitNextFlipRange((struct HwQueueStagingList *)&v30, (struct _VIDSCH_GLOBAL *)v1, v4);
    }
    VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v1, v4);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v30, 0LL);
    if ( (_BYTE)v36 )
    {
      if ( HIBYTE(v36) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v36) = 0;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v1 + 16) + 3160LL),
        *(struct DXGADAPTER **)(v1 + 16),
        v4,
        *(_QWORD *)(v5 + 44352),
        *((_BYTE *)a1 + 104) == 0);
      v23 = *(_QWORD *)(v5 + 44352);
      if ( v23 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v23);
        WdLogGlobalForLineNumber = 7091;
      }
      v24 = *(_DWORD *)(v5 + 44352);
      DXGGLOBAL::GetGlobal();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 412LL),
        *((unsigned int *)a1 + 28),
        v24,
        *(_QWORD *)(v5 + 44368));
      v25 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3352);
      if ( v25 )
        v25(*(_QWORD *)(v1 + 3368), (unsigned int)v4);
    }
    HwQueueStagingList::~HwQueueStagingList(&v30);
    if ( (_BYTE)v36 )
    {
      if ( HIBYTE(v36) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
