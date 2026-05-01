/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDDB4
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDFBC (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@ti.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE0B0 (--1-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x18060FD80 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180610DDC (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x18060E710 (-Release@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::Release(v1);
  return result;
}
