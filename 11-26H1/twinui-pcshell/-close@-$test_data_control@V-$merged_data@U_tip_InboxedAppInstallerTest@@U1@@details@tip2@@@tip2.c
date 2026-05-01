/*
 * XREFs of ?close@?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB020
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC1F0 (--1-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$51 @ 0x1806FBADB (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$51.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC918 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returnco.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update(v2 + 8);
    return wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::reset(a1);
  }
  return result;
}
