/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802BD394
 * Callers:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180050E80 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180076AC0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802BD360 (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802BD388 (--1-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     _lambda_223dfeebefa722d7a45e6ff6a39f8354_::operator() @ 0x180460C90 (_lambda_223dfeebefa722d7a45e6ff6a39f8354_--operator().c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@AEAAKXZ @ 0x180293DFC (-Release@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>::Release(v1);
  return result;
}
