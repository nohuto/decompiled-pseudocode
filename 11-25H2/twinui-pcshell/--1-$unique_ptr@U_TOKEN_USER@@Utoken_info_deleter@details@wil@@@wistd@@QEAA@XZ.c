/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@QEAA@XZ @ 0x1802195F8
 * Callers:
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4 @ 0x1806A9430 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x1806B4A10 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_1806B4A10.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::dtor$1 @ 0x1806B71D6 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--TriggerCompatB_ea_1806B71D6.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1806B724D (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$1 @ 0x1806D91E5 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_1806D91E5.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$7 @ 0x1806D9209 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_1806D9209.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$7 @ 0x1806D9337 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_1806D9337.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>::~unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
