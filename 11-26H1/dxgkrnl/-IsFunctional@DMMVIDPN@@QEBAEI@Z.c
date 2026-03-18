/*
 * XREFs of ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403EF914
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140259390 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002DB64 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPN::IsFunctional(DMMVIDPN *this)
{
  char *v1; // rdi
  DMMVIDPN *v2; // rbx
  DMMVIDPNPRESENTPATH *v3; // rbx
  char *v5; // rax

  v1 = (char *)this + 120;
  v2 = (DMMVIDPN *)*((_QWORD *)this + 15);
  if ( v2 == (DMMVIDPN *)((char *)this + 120) )
    v3 = 0LL;
  else
    v3 = (DMMVIDPN *)((char *)v2 - 8);
  while ( 1 )
  {
    if ( !v3 )
      return 1;
    if ( !DMMVIDPNPRESENTPATH::IsFunctional(v3) )
      break;
    v5 = (char *)*((_QWORD *)v3 + 1);
    v3 = (DMMVIDPNPRESENTPATH *)(v5 - 8);
    if ( v5 == v1 )
      v3 = 0LL;
  }
  return 0;
}
