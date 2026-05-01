/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180679C00
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180679C9C (--1-$test_data_control@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180679CD4 (--1-$test_watcher@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@t.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x180679D7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18067B7B0 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18067D964 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@ti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18067B768 (-Release@-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>::Release(v1);
  return result;
}
