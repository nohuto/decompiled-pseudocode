/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF308
 * Callers:
 *     ??1XamlLauncher@@UEAA@XZ @ 0x1801805AC (--1XamlLauncher@@UEAA@XZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1801807C0 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D1894 (--1-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18044CF4C (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180450F68 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@detail.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@AEAAKXZ @ 0x180450350 (-Release@-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>::Release(v1);
  return result;
}
