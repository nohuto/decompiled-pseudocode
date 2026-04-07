/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z @ 0x1800D061C
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800D0460 (-Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        __int64 a3)
{
  unsigned int v4; // eax
  float v6; // xmm1_4
  __int64 *v7; // rbx
  __m128i v8; // xmm0
  int v9; // eax
  float v10; // xmm0_4
  int v11; // ebx
  __int64 v12; // rdx
  int v14; // r8d
  struct D2D_SIZE_F v15; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  v6 = *((float *)this + 68);
  v7 = (__int64 *)((char *)this + 232);
  if ( a2->right - a2->left >= 0 )
    v4 = a2->right - a2->left;
  v8 = _mm_cvtsi32_si128(v4);
  v9 = 0;
  LODWORD(v10) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( a2->bottom - a2->top >= 0 )
    v9 = a2->bottom - a2->top;
  v15.width = v10 * v6;
  v15.height = (float)v9 * v6;
  if ( v6 != 1.0 )
    CVisual::SetInterpolationMode(*v7, 1LL, a3);
  v11 = CVisualBrush::Reset((CTransitionWindowSnapshot *)((char *)this + 216), (struct CVisual *)*v7, a2, &v15);
  if ( v11 < 0 )
  {
    v12 = 181LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\transitionwindowsnapshot.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v11 = CVisualBrush::FreezeImpl((__int64)this + 216, 1u);
  if ( v11 < 0 )
  {
    v12 = 184LL;
    goto LABEL_9;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmTransitionCVISnapshot_Info,
      v14,
      1,
      (__int64)&v15);
  v11 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  if ( v11 < 0 )
  {
    v12 = 188LL;
    goto LABEL_9;
  }
  v11 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
          (__int64)this,
          *((_QWORD *)this + 27));
  if ( v11 < 0 )
  {
    v12 = 191LL;
    goto LABEL_9;
  }
  return 0LL;
}
