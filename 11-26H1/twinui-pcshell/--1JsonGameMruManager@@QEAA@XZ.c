/*
 * XREFs of ??1JsonGameMruManager@@QEAA@XZ @ 0x18013A7F0
 * Callers:
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803109D8 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXXZ @ 0x18013A79C (-_Tidy@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@.c)
 */

void __fastcall JsonGameMruManager::~JsonGameMruManager(JsonGameMruManager *this)
{
  std::vector<std::shared_ptr<GameMruItem>>::_Tidy((__int64 *)this + 7);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((JsonGameMruManager *)((char *)this + 8));
}
