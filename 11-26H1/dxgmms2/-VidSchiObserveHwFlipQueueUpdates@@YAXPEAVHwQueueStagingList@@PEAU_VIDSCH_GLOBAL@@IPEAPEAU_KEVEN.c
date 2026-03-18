/*
 * XREFs of ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4
 * Callers:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14000EE00 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005A010 (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14001D1F0 (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x14003E75C (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003F7F8 (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1400405EC (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     ?VidSchiSetupFlipQueueLogTrackingArray@@YAXPEAU_VIDSCH_GLOBAL@@QEAK@Z @ 0x140041378 (-VidSchiSetupFlipQueueLogTrackingArray@@YAXPEAU_VIDSCH_GLOBAL@@QEAK@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiObserveHwFlipQueueUpdates(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct _KEVENT **a4,
        bool *a5)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 i; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rdx
  struct _KEVENT **v15; // [rsp+20h] [rbp-E0h]
  unsigned int *v16; // [rsp+30h] [rbp-D0h]
  bool *v17; // [rsp+38h] [rbp-C8h]
  unsigned int *v18; // [rsp+40h] [rbp-C0h]
  unsigned int v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_DEVICE *v20; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v21[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  _QWORD v24[10]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v25[10]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v26[10]; // [rsp+140h] [rbp+40h] BYREF

  v9 = *((_QWORD *)a2 + a3 + 431);
  if ( *(_DWORD *)(v9 + 3248) )
  {
    v20 = 0LL;
    v19 = 0;
    memset(v25, 0, sizeof(v25));
    *(_OWORD *)v21 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    VidSchiSetupFlipQueueLogTrackingArray(a2, v21);
    VidSchiSynchronouslyUpdateFlipQueueLogs(a2, a3, v21, -1);
    VidSchiCompleteFlipsFromLatestPresentId(a1, a2, a3, 0, a4, v25, &v19, a5, v21, &v20);
    VidSchiSubmitNextFlipRange(a1, a2, a3);
    VidSchiUpdateInterruptTargetsForAllPlanes(a2, a3);
    if ( bTracingEnabled )
    {
      memset(v26, 0, sizeof(v26));
      memset(v24, 0, sizeof(v24));
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 40); i = (unsigned int)(i + 1) )
      {
        v10 = 304LL * (unsigned int)i;
        v13 = (byte_14008A204 & 0x20) == 0;
        v26[i] = *(_QWORD *)(v10 + v9 + 400);
        v24[i] = *(_QWORD *)(v10 + v9 + 424);
        if ( !v13 && v21[i] != -1 )
          VidSchiTraceHwFlipQueueLogUpdate(a2, *(_QWORD *)(v9 + 44352), a3, i, v21[i]);
      }
      v14 = *(_QWORD *)(v9 + 44352);
      if ( v14 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v14);
        WdLogGlobalForLineNumber = 7091;
      }
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        LODWORD(v18) = v19;
        LODWORD(v17) = *(_DWORD *)(v9 + 44352);
        LODWORD(v16) = a3;
        LODWORD(v15) = *((_DWORD *)a2 + 40);
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v10,
          v14,
          v11,
          *((_QWORD *)a2 + 2),
          v15,
          v26,
          v16,
          v17,
          v18,
          v25,
          v24);
      }
    }
  }
}
