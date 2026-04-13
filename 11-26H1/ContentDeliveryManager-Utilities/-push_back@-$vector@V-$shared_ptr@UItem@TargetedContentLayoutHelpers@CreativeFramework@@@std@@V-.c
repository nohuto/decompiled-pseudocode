/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800B1FFC
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800B09F8 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reserve@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1E38 (-_Reserve@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rdi
  _QWORD *result; // rax

  v3 = a2;
  v4 = a1[1];
  if ( (unsigned __int64)a2 < v4 && *a1 <= (unsigned __int64)a2 )
  {
    v6 = (unsigned __int64)a2 - *a1;
    if ( v4 == a1[2] )
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reserve(a1);
    v3 = (__int64 *)(*a1 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  }
  else if ( v4 == a1[2] )
  {
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reserve(a1);
  }
  result = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
             (_QWORD *)a1[1],
             v3);
  a1[1] += 16LL;
  return result;
}
