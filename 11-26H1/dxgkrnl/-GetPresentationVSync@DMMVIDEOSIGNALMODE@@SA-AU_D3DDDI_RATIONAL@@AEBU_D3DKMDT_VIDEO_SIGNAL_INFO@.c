/*
 * XREFs of ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC
 * Callers:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140053E18 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140269420 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     BmlDetermineBoostMultiplier @ 0x14026A158 (BmlDetermineBoostMultiplier.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026A494 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1402DB4C0 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140362038 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

D3DDDI_RATIONAL __fastcall DMMVIDEOSIGNALMODE::GetPresentationVSync(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL result; // rax
  __int64 v2; // [rsp+8h] [rbp+8h]

  result = a1->VSyncFreq;
  if ( ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) != 0 )
  {
    LODWORD(v2) = a1->VSyncFreq;
    HIDWORD(v2) = ((*(_DWORD *)&a1->AdditionalSignalInfo >> 3) & 0x3F) * result.Denominator;
    return (D3DDDI_RATIONAL)v2;
  }
  return result;
}
