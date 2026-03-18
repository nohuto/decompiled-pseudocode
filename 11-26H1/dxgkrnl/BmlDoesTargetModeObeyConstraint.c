/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1402DD530
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1400503A8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     BmlAreRawModesEnabled @ 0x1402DD6C0 (BmlAreRawModesEnabled.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x140379F18 (BmlDoesTargetModeSupportWireFormat.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x140393438 (BmlIsSupportedByMonitorTargetMode.c)
 */

bool __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // r9
  struct _D3DDDI_RATIONAL v9; // r10
  struct _D3DDDI_RATIONAL v10; // r10
  const struct _D3DDDI_RATIONAL *v12; // rcx
  struct _D3DDDI_RATIONAL v13; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL PresentationVSync; // [rsp+40h] [rbp+8h] BYREF

  v4 = 120LL * a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( !(unsigned __int8)BmlAreRawModesEnabled(a1, a2) )
  {
    LOBYTE(v7) = v8;
    if ( !(unsigned __int8)BmlIsSupportedByMonitorTargetMode(a3, v7) )
      return 0;
  }
  v9 = (struct _D3DDDI_RATIONAL)*v6;
  if ( (*v6 & 0x4000000000LL) != 0 )
  {
    if ( (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 84) )
      return 0;
  }
  if ( (v9.Numerator & 0x1000000) != 0
    && (v6[1] & 0x1000000) != 0
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)v6 + 28)
    && !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3, v12, *((_DWORD *)v6 + 60)) )
  {
    return 0;
  }
  v10 = (struct _D3DDDI_RATIONAL)*v6;
  if ( (*v6 & 0x8F) == 0 )
    return 1;
  if ( ((v10.Numerator & 4) == 0 || ((*((_BYTE *)v6 + 80) ^ *(_BYTE *)(a3 + 120)) & 7) == 0)
    && ((v10.Numerator & 1) == 0 || (v6[1] & 1) == 0 || !(unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v6 + 44)) )
  {
    if ( (v10.Numerator & 2) == 0
      || (v6[1] & 2) == 0
      || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
      || (PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 4)),
          v13 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72)),
          DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v13, &PresentationVSync, 0)) )
    {
      if ( (*(_BYTE *)v6 & 8) != 0 && (v6[1] & 8) != 0 )
        return (unsigned __int8)BmlDoesTargetModeSupportWireFormat(a3, *((unsigned int *)v6 + 51)) != 0;
      return 1;
    }
  }
  return 0;
}
