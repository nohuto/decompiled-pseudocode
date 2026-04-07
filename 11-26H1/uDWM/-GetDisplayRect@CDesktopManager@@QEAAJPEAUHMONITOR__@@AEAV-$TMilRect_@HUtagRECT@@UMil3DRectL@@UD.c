/*
 * XREFs of ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007D428
 * Callers:
 *     ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180084FD8 (-_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCon.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6490 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 * Callees:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007A0E4 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::GetDisplayRect(__int64 a1, HMONITOR a2, _QWORD *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // edi
  int v9[51]; // [rsp+20h] [rbp-148h] BYREF
  __int128 v10; // [rsp+ECh] [rbp-7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  a3[1] = 0LL;
  *a3 = 0LL;
  if ( a2 )
  {
    memset_0(v9, 0, 0x138uLL);
    DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
                             *(CDWMDXGIEnumeration **)(a1 + 136),
                             a2,
                             (struct DXGIOutputInfo *)v9);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDAC,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)DxgiOutputDescriptor,
        v9[0]);
      return v7;
    }
    *(_OWORD *)a3 = v10;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 144) + 16LL);
  }
  return 0LL;
}
