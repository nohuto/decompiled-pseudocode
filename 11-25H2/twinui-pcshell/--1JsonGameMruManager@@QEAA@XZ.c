/*
 * XREFs of ??1JsonGameMruManager@@QEAA@XZ @ 0x1801C455C
 * Callers:
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x180314864 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXXZ @ 0x180079A30 (-_Tidy@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@.c)
 */

void __fastcall JsonGameMruManager::~JsonGameMruManager(void **this)
{
  std::vector<std::shared_ptr<GameMruItem>>::_Tidy((__int64)(this + 7));
  std::wstring::_Tidy_deallocate(this + 2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(this + 1));
}
