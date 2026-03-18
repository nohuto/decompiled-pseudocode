/*
 * XREFs of ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14001D1F0
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14003B9E0 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@QEAK@Z @ 0x14003D54C (-VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLI.c)
 */

void __fastcall VidSchiCompleteFlipsFromLatestPresentId(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        int a4,
        struct _KEVENT **a5,
        unsigned __int64 *a6,
        unsigned int *a7,
        bool *a8,
        unsigned int *const a9,
        struct _VIDSCH_DEVICE **a10)
{
  int v10; // r10d
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // rcx
  __int64 *v15; // r15
  __int64 v16; // r15
  unsigned int v17; // edi
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // r12
  struct _VIDSCH_PRESENT_INFO *v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // eax
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // r8
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v29; // ecx
  int v30; // [rsp+38h] [rbp-71h] BYREF
  int v31; // [rsp+3Ch] [rbp-6Dh]
  struct _VIDSCH_PRESENT_INFO *v32; // [rsp+40h] [rbp-69h]
  __int64 v33; // [rsp+48h] [rbp-61h]
  struct _VIDSCH_GLOBAL *v34; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-49h]
  unsigned int v36; // [rsp+68h] [rbp-41h]
  int v37; // [rsp+6Ch] [rbp-3Dh]
  __int64 v38; // [rsp+70h] [rbp-39h]
  unsigned int v39; // [rsp+78h] [rbp-31h]
  int v40; // [rsp+7Ch] [rbp-2Dh]
  __int64 v41; // [rsp+80h] [rbp-29h]
  __int64 v42; // [rsp+88h] [rbp-21h]
  __int64 v43; // [rsp+90h] [rbp-19h]
  __int64 v44; // [rsp+98h] [rbp-11h]
  __int64 v45; // [rsp+A0h] [rbp-9h]
  unsigned int v47; // [rsp+100h] [rbp+57h]

  v10 = a4;
  v33 = a3;
  v12 = a3;
  v13 = -1;
  v32 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a3 + 431);
  while ( 1 )
  {
    v31 = v13;
    if ( v13 == *((_DWORD *)a2 + 40) )
      break;
    v14 = *((_QWORD *)a2 + v12 + 431);
    if ( v13 == -1 )
      v15 = (__int64 *)(v14 + 32);
    else
      v15 = (__int64 *)(v14 + 8 * (v13 + 5LL));
    v16 = *v15;
    if ( v16 )
    {
      v17 = 0;
      v18 = *(_DWORD *)(v16 + 68);
      v19 = ((unsigned __int8)*(_DWORD *)(v16 + 72) + 1) & 0x3F;
      v30 = 0;
      v20 = 0LL;
      v47 = 0;
      v21 = 0LL;
      if ( v18 != v19 )
      {
        v22 = v32;
        while ( 1 )
        {
          v23 = v16 + 1400LL * v18;
          v24 = *(_DWORD *)(v23 + 1172);
          if ( v24 )
          {
            if ( v24 > 0xC || (v29 = 4672, !_bittest(&v29, v24)) )
            {
              if ( v24 != 15 && v24 != 5
                || v10 && v10 != *(_DWORD *)(v23 + 1200)
                || !(unsigned int)VidSchiIsExpectedVSyncCookie3(
                                    a2,
                                    v22,
                                    (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v23 + 120),
                                    a9) )
              {
LABEL_10:
                v13 = v31;
                v17 = v47;
                v12 = v33;
                break;
              }
              v21 = v23 + 120;
              v20 = *(_QWORD *)(v23 + 1160);
              v10 = a4;
              v47 = v18;
              *a10 = (struct _VIDSCH_DEVICE *)v20;
            }
          }
          v18 = ((_BYTE)v18 + 1) & 0x3F;
          if ( v18 == (((unsigned __int8)*(_DWORD *)(v16 + 72) + 1) & 0x3F) )
            goto LABEL_10;
        }
      }
      if ( v20 )
      {
        if ( *((_BYTE *)a2 + 7084) && a5 && v21 )
        {
          FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v21 + 1344));
          if ( FlipManagerAuxiliaryPresentInfo )
          {
            *((_QWORD *)FlipManagerAuxiliaryPresentInfo + 2) = *a5;
            *a5 = 0LL;
          }
        }
        v36 = a3;
        v41 = *((_QWORD *)v32 + 5544);
        v42 = *((_QWORD *)v32 + 5546);
        v43 = *((_QWORD *)v32 + 5545);
        v44 = *((_QWORD *)v32 + 5547);
        v45 = *((_QWORD *)v32 + 5548);
        v37 = 0;
        v40 = 0;
        v34 = a2;
        v35 = v20;
        v38 = v16;
        v39 = v17;
        VidSchiProcessVsyncCompletedFlipEntry(a1, (__int64)&v30, (__int64)a8);
        VidSchiCheckPendingDeviceCommand((_QWORD *)v20);
        v12 = v33;
        v25 = v30;
        v26 = -v30;
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48) + 32LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v20 + 40) + 4LL))
                        + 8 * v33
                        + 88);
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + v33 + 841) + 8LL), -v30);
        **((_DWORD **)a2 + v12 + 841) += v25;
        _InterlockedAdd((volatile signed __int32 *)(v27 + 8), v26);
        *(_DWORD *)v27 += v25;
      }
    }
    v10 = a4;
    ++v13;
  }
}
