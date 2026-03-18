/*
 * XREFs of ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14003B7E0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x140019D80 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x140019ED0 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14001A020 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14003B9E0 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004B08C (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xxdtxi_EtwWriteTransfer @ 0x140054BB0 (McTemplateK0xxdtxi_EtwWriteTransfer.c)
 */

__int64 __fastcall UpdateFlipManagerStatsOnFlipCompletion(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned __int64 QuadPart; // rdi
  unsigned __int64 CurrentVSyncPeriodQpc; // rbx
  unsigned __int64 *v13; // r14
  _QWORD *v14; // r15
  int v15; // r8d
  unsigned __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+10h] BYREF

  result = (__int64)GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(a2 + 1344));
  v10 = result;
  if ( result )
  {
    QuadPart = 0LL;
    CurrentVSyncPeriodQpc = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    if ( !a5 )
    {
      CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a4, 0LL);
      if ( *(_DWORD *)(a3 + 3192) == -1
        || !*((_BYTE *)a1 + 7074)
        || (v14 = (_QWORD *)(a2 + 1320), *(_QWORD *)(a2 + 1320)) )
      {
        v13 = (unsigned __int64 *)(a2 + 1112);
        QuadPart = *(_QWORD *)(a2 + 1112);
        v14 = (_QWORD *)(a2 + 1320);
      }
      else
      {
        v13 = (unsigned __int64 *)(a2 + 1112);
        if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
                    *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408),
                    *(_QWORD *)(a2 + 1128),
                    *(_QWORD *)(a2 + 1112),
                    &v17,
                    CurrentVSyncPeriodQpc) >= 0 )
          QuadPart = v17;
        else
          QuadPart = *v13;
        if ( (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
                    *(VIDSCH_VSYNC_SMOOTHER **)(a3 + 44408),
                    CurrentVSyncPeriodQpc,
                    &v16) >= 0 )
          CurrentVSyncPeriodQpc = v16;
      }
      result = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
      if ( (_DWORD)result )
      {
        if ( (*(_DWORD *)(a2 + 1152) & 0x100) != 0 )
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        result = *(unsigned int *)(a3 + 3192);
        if ( (_DWORD)result == -1 )
          CurrentVSyncPeriodQpc = -1LL;
        if ( (byte_14008A201 & 1) != 0 )
          result = McTemplateK0xxdtxi_EtwWriteTransfer(
                     (*(_DWORD *)(a2 + 1152) >> 8) & 1,
                     -1,
                     v15,
                     *v13,
                     *v14,
                     result,
                     BYTE1(*(_DWORD *)(a2 + 1152)) & 1,
                     QuadPart,
                     CurrentVSyncPeriodQpc);
      }
    }
    *(_QWORD *)(v10 + 40) = QuadPart;
    *(_DWORD *)(v10 + 36) = 1;
    if ( CurrentVSyncPeriodQpc > 0xFFFFFFFF )
    {
      result = WdLogSingleEntry1(3LL, CurrentVSyncPeriodQpc);
      WdLogGlobalForLineNumber = 7091;
    }
    *(_DWORD *)(v10 + 48) = CurrentVSyncPeriodQpc;
  }
  return result;
}
