/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$0 @ 0x1806B3FAF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::wstring::_Tidy_deallocate((void **)(a2 + 512));
}
