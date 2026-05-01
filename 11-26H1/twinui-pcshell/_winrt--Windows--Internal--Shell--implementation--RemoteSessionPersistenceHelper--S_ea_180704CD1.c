/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage_::_1_::catch$7 @ 0x180704CD1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x180662F60 (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x88,
    (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
    a4);
  *(_BYTE *)(a2 + 184) = 1;
  *(_QWORD *)(a2 + 80) = ***(unsigned int ***)(a2 + 168);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
    *(winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)(a2 + 160),
    (unsigned __int64 *)(a2 + 80),
    (const struct winrt::hstring *)(a2 + 48),
    (bool *)(a2 + 184));
  return 0LL;
}
