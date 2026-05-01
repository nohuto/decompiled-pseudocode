/*
 * XREFs of ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x180282770
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A890 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802825E4 (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returnco.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180282604 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_retu.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028307C (-ensure_data@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip.c)
 * Callees:
 *     ??1?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18069E680 (--1-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::~merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
