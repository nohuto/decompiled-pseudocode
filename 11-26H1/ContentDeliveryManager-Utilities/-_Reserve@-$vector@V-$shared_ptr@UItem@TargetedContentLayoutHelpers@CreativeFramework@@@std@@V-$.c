/*
 * XREFs of ?_Reserve@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1E38
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800B1FFC (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1C5C (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reserve(
        _QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v2 = a1[1];
  result = (a1[2] - v2) >> 4;
  if ( !result )
  {
    v4 = (v2 - *a1) >> 4;
    if ( v4 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v5 = v4 + 1;
    v6 = (__int64)(a1[2] - *a1) >> 4;
    v7 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return (__int64)std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
                      (__int64)a1,
                      v5);
  }
  return result;
}
