/*
 * XREFs of ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013A820
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18013A870 (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x180317AF0 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 */

void __fastcall JsonGameMruManager::TrimItemsToMaxSize(unsigned __int8 *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx

  v2 = *a1;
  v3 = *((_QWORD *)a1 + 7);
  if ( (*((_QWORD *)a1 + 8) - v3) >> 4 > v2 )
  {
    v4 = v3 + 16 * v2;
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v4, *((_QWORD *)a1 + 8));
    *((_QWORD *)a1 + 8) = v4;
  }
}
