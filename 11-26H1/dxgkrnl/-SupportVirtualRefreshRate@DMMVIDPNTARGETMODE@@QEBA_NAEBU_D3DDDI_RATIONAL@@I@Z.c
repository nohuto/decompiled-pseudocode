/*
 * XREFs of ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DDDC0 (BmlCompareTargetModesWithConstraint.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 *     ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1403BE950 (-VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTAR.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

bool __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
        DMMVIDPNTARGETMODE *this,
        const struct _D3DDDI_RATIONAL *a2)
{
  D3DDDI_RATIONAL PresentationVSync; // rax
  int v5; // r8d
  int v6; // edi
  UINT Numerator; // ebx
  __int64 Denominator; // rdx
  __int64 v9; // r8
  struct _D3DDDI_RATIONAL v11; // [rsp+30h] [rbp+8h] BYREF

  PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)this + 72));
  v11 = PresentationVSync;
  v6 = 2;
  if ( v5 != -1 )
    v6 = v5;
  Numerator = PresentationVSync.Numerator;
  if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(this) )
  {
    Denominator = a2->Denominator;
    v9 = a2->Numerator;
    return v9 * (unsigned __int64)(v11.Denominator * v6) <= Denominator * (unsigned __int64)Numerator
        && v9 * (unsigned __int64)*((unsigned int *)this + 37) >= Denominator
                                                                * (unsigned __int64)*((unsigned int *)this + 36);
  }
  if ( v6 != 1 )
    return 0;
  return DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, &v11, 0);
}
