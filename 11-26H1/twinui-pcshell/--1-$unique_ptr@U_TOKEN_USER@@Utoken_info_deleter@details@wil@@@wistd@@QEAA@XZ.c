/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@QEAA@XZ @ 0x18020B3A4
 * Callers:
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4 @ 0x1806D2022 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x1806DBA9E (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_1806DBA9E.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::dtor$1 @ 0x1806DE581 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--TriggerCompatBackupIfUserJs.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1806DE60A (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$1 @ 0x1807018ED (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_1807018ED.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$7 @ 0x180701911 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_180701911.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$8 @ 0x180701A09 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_180701A09.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
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
