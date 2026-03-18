/*
 * XREFs of ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x14040B060
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x140444654 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2)
{
  struct DMMVIDPNTARGETMODESET *v3; // rdi
  char v4; // si
  const struct _D3DDDI_RATIONAL *v5; // r14
  struct DMMVIDPNTARGETMODESET *v6; // rbx
  const struct _D3DDDI_RATIONAL *v7; // rbp

  v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v4 = 1;
  v5 = (const struct _D3DDDI_RATIONAL *)*((_QWORD *)v3 + 18);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 781;
  }
  v6 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v7 = (const struct _D3DDDI_RATIONAL *)*((_QWORD *)v6 + 18);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 784;
  }
  if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v5 + 19, v7 + 19, 0) || v5[20].Numerator != v7[20].Numerator )
    v4 = 0;
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v6 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v3 + 88));
  return v4;
}
