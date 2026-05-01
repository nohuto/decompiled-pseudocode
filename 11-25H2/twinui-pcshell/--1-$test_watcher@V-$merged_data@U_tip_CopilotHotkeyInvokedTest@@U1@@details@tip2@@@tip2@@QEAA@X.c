/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE07C
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDDD4 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::~test_watcher<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
