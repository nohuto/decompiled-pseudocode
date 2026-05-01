/*
 * XREFs of ?open_helper@?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x180493ACC
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180490DE8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switch.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180281DD4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x18049130C (--$tip_make_shared_nothrow@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experie.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049151C (--1-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180491594 (--4-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 */

char __fastcall tip2::tip_test<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::open_helper(
        void **a1,
        void *a2)
{
  void *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *a1;
  v8[0] = 0LL;
  if ( !v2 || tip2::details::shared_data<1,0,0>::has_ever_started((__int64)v2 + 8) )
  {
    v6 = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,_GUID * &>(
                    &v9,
                    v8);
    wil::com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>::operator=(
      a1,
      v6);
    wil::com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>(&v9);
  }
  else
  {
    tip2::details::shared_data<1,0,0>::open_without_lock(v4, 0LL, v5);
  }
  return tip2::details::shared_data<1,0,0>::has_ever_started((__int64)*a1 + 8);
}
