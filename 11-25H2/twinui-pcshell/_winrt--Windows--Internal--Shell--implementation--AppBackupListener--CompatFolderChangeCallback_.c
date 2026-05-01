/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::dtor$2 @ 0x1806D917E
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::wstring::_Tidy_deallocate((void **)(a2 + 64));
  }
}
