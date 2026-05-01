/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18047E228
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18047B4B8 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18047E620 (-start@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@2@XZ @ 0x18047E67C (-watch_errors@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18047AC7C (--$tip_make_shared_nothrow@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18047B1F8 (--1-$com_ptr_t@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncod.c)
 *     ?Release@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18047CAF4 (-Release@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = (volatile signed __int32 **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,>(&v6);
    v3 = *v2;
    *v2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::Release(v4);
    wil::com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>(&v6);
  }
  return a1;
}
