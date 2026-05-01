/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18047B1F8
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18047B248 (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18047B280 (--1-$test_watcher@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18047B2A8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18047D808 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18047E228 (-ensure_data@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18047CAF4 (-Release@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::Release(v1);
  return result;
}
