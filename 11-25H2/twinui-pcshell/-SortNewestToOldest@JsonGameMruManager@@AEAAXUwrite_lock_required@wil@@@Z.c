/*
 * XREFs of ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D260
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18005D17C (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031B510 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18005D298 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 */

__int64 JsonGameMruManager::SortNewestToOldest()
{
  __int64 result; // rax
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    result = std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xDB,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
             v1);
  }
  return result;
}
