/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x1806B4A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wistd::unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>::~unique_ptr<_TOKEN_USER,wil::details::token_info_deleter>((void **)(a2 + 64));
}
