/*
 * XREFs of _lambda_fe0a1c8bb5d899668299a10802864297_::operator() @ 0x1402688DC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140059B50 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268F3C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

void __fastcall lambda_fe0a1c8bb5d899668299a10802864297_::operator()(__int64 a1)
{
  __int64 v1; // r10

  if ( **(int **)a1 < 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 84LL) = **(_DWORD **)(a1 + 8) | *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
    FillFailedStatus(*(struct D3DKMT_VIDPN_SOURCE_MASKS **)(a1 + 8), **(_DWORD **)a1);
    *(_DWORD *)(*(_QWORD *)(v1 + 8) + 12LL) = **(_DWORD **)(v1 + 8);
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      *(CCD_TOPOLOGY **)(v1 + 16),
      (const struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 64LL) + 48LL)
                           + 340LL * **(unsigned int **)(v1 + 24)),
      0xFFFFFFFF,
      **(_DWORD **)v1);
  }
}
