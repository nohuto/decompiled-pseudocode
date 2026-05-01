/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A69C
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1801055B0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180106178 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@2@XZ @ 0x180289D64 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details.c)
 * Callees:
 *     ??0?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18028A180 (--0-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18028C264 (-Release@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x118uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>((__int64)v2);
    v5 = *a1;
    *a1 = (void *)v4;
    if ( v5 )
      tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::Release(v5);
  }
  return a1;
}
