/*
 * XREFs of ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180029218 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18005454C (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18005670C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180059334 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180063DDC (-RoundToNearestInt@@YAHN@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CADB4 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1800CBDCC (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall CTopLevelWindow::GetFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  struct _MARGINS *v2; // rax
  __int64 v5; // rax
  __m128i v6; // xmm2
  double v7; // xmm6_8
  int v8; // r12d
  int v9; // esi
  int v10; // r15d
  int v11; // r14d
  volatile int v12; // ecx
  __m128i v13; // [rsp+68h] [rbp-A0h] BYREF
  struct _MARGINS v14; // [rsp+78h] [rbp-90h] BYREF
  CHAR OutputString[112]; // [rsp+88h] [rbp-80h] BYREF

  v2 = (struct _MARGINS *)*((_QWORD *)this + 82);
  if ( v2 )
  {
    *a2 = *v2;
  }
  else
  {
    v5 = *((_QWORD *)this + 87);
    v6 = *(__m128i *)(v5 + 80);
    v7 = *(double *)(v5 + 336);
    v13 = v6;
    if ( v7 == 1.0 )
    {
      v8 = _mm_cvtsi128_si32(v6);
      v9 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12));
      v10 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
      v11 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    }
    else
    {
      v8 = RoundToNearestInt((double)v13.m128i_i32[0] * v7);
      v13.m128i_i32[0] = v8;
      v10 = RoundToNearestInt((double)v13.m128i_i32[1] * v7);
      v13.m128i_i32[1] = v10;
      v11 = RoundToNearestInt((double)v13.m128i_i32[2] * v7);
      v13.m128i_i32[2] = v11;
      v13.m128i_i32[3] = RoundToNearestInt((double)v13.m128i_i32[3] * v7);
      v9 = v13.m128i_i32[3];
      v6 = v13;
    }
    v12 = g_fTestFrameMargins;
    *a2 = (struct _MARGINS)v6;
    if ( v12 )
    {
      v14 = 0LL;
      CTopLevelWindow::ComputeWindowFrameMargins(this, &v14);
      if ( (unsigned __int8)operator!=(&v13, &v14) )
      {
        CTopLevelWindow::ComputeWindowFrameMargins(this, &v14);
        StringCchPrintfA(
          OutputString,
          0x6EuLL,
          "Mismatch: %08x New:{ %6d, %6d, %6d, %6d } Old:{ %6d, %6d, %6d, %6d }\r\n",
          *((_DWORD *)this + 176),
          v8,
          v11,
          v10,
          v9,
          v14.cxLeftWidth,
          v14.cyTopHeight,
          v14.cxRightWidth,
          v14.cyBottomHeight);
        OutputDebugStringA(OutputString);
      }
    }
  }
}
