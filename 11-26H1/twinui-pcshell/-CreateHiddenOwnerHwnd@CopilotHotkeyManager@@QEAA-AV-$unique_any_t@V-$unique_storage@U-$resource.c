/*
 * XREFs of ?CreateHiddenOwnerHwnd@CopilotHotkeyManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180623BC0
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ??R_lambda_8ed433ac67d250cf6cd241eeae637a1f_@@QEBA@XZ @ 0x1806233EC (--R_lambda_8ed433ac67d250cf6cd241eeae637a1f_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
HWND *__fastcall CopilotHotkeyManager::CreateHiddenOwnerHwnd(__int64 a1, HWND *a2)
{
  HMODULE hInstance; // rax

  if ( __TSS0__1__CreateHiddenOwnerHwnd_CopilotHotkeyManager__QEAA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAUHWND____P6AHPEAU1__Z_1_DestroyWindow__YAH0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__CreateHiddenOwnerHwnd_CopilotHotkeyManager__QEAA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAUHWND____P6AHPEAU1__Z_1_DestroyWindow__YAH0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil__XZ_4HA);
    if ( __TSS0__1__CreateHiddenOwnerHwnd_CopilotHotkeyManager__QEAA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAUHWND____P6AHPEAU1__Z_1_DestroyWindow__YAH0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil__XZ_4HA == -1 )
    {
      _lambda_8ed433ac67d250cf6cd241eeae637a1f_::operator()();
      Init_thread_footer(&__TSS0__1__CreateHiddenOwnerHwnd_CopilotHotkeyManager__QEAA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAUHWND____P6AHPEAU1__Z_1_DestroyWindow__YAH0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil__XZ_4HA);
    }
  }
  hInstance = GetModuleHandleW(0LL);
  *a2 = CreateWindowExW(0, L"CopilotHiddenOwner", &pvData, 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, hInstance, 0LL);
  return a2;
}
