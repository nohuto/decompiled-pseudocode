/*
 * XREFs of ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180021020
 * Callers:
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18000C094 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18000C298 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18000C4AC (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18001DE00 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4D20 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180069580 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180071F0C (-RoundToNearestInt@@YAHN@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CFA40 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1800D07B8 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall CTopLevelWindow::GetFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  struct _MARGINS *v2; // rax
  __int64 v5; // rax
  struct _MARGINS v6; // xmm0
  double v7; // xmm6_8
  volatile int v8; // eax
  struct _MARGINS v9; // [rsp+68h] [rbp-A0h] BYREF
  struct _MARGINS v10; // [rsp+78h] [rbp-90h] BYREF
  CHAR OutputString[112]; // [rsp+88h] [rbp-80h] BYREF

  v2 = (struct _MARGINS *)*((_QWORD *)this + 84);
  if ( v2 )
  {
    *a2 = *v2;
  }
  else
  {
    v5 = *((_QWORD *)this + 89);
    v6 = *(struct _MARGINS *)(v5 + 80);
    v7 = *(double *)(v5 + 336);
    v9 = v6;
    if ( v7 != 1.0 )
    {
      v9.cxLeftWidth = RoundToNearestInt((double)v9.cxLeftWidth * v7);
      v9.cxRightWidth = RoundToNearestInt((double)v9.cxRightWidth * v7);
      v9.cyTopHeight = RoundToNearestInt((double)v9.cyTopHeight * v7);
      v9.cyBottomHeight = RoundToNearestInt((double)v9.cyBottomHeight * v7);
      v6 = v9;
    }
    v8 = g_fTestFrameMargins;
    *a2 = v6;
    if ( v8 )
    {
      v10 = 0LL;
      CTopLevelWindow::ComputeWindowFrameMargins(this, &v10);
      if ( (unsigned __int8)operator!=(&v9, &v10) )
      {
        CTopLevelWindow::ComputeWindowFrameMargins(this, &v10);
        StringCchPrintfA(
          OutputString,
          0x6EuLL,
          "Mismatch: %08x New:{ %6d, %6d, %6d, %6d } Old:{ %6d, %6d, %6d, %6d }\r\n",
          *((_DWORD *)this + 180),
          v9.cxLeftWidth,
          v9.cyTopHeight,
          v9.cxRightWidth,
          v9.cyBottomHeight,
          v10.cxLeftWidth,
          v10.cyTopHeight,
          v10.cxRightWidth,
          v10.cyBottomHeight);
        OutputDebugStringA(OutputString);
      }
    }
  }
}
