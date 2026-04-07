/*
 * XREFs of ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094068
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180093F9C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C43D0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4848 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 * Callees:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008BE84 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::GetDisplayRect(__int64 a1, HMONITOR a2, _DWORD *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12[80]; // [rsp+20h] [rbp-148h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  if ( a2 )
  {
    memset_0(v12, 0, 0x138uLL);
    DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
                             *(CDWMDXGIEnumeration **)(a1 + 136),
                             a2,
                             (struct DXGIOutputInfo *)v12);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDCB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)DxgiOutputDescriptor,
        v12[0]);
      return v7;
    }
    v9 = v12[52];
    v10 = v12[53];
    v11 = v12[54];
    *a3 = v12[51];
    a3[1] = v9;
    a3[2] = v10;
    a3[3] = v11;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 144) + 16LL);
  }
  return 0LL;
}
