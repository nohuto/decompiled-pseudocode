/*
 * XREFs of ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1C5C
 * Callers:
 *     ?_Reserve@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1E38 (-_Reserve@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800AD810 (--$_Uninit_move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEA.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@0@Z @ 0x1800B1A10 (-_Destroy@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$.c)
 */

__int64 *__fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *result; // rax

  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v4 = 2 * a2, (v3 = (__int64 *)operator new(16 * a2)) == 0LL) )
      std::_Xbad_alloc();
  }
  else
  {
    v4 = 0LL;
  }
  std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
    *(__int64 **)a1,
    *(__int64 **)(a1 + 8),
    v3);
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Destroy(
      v5,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 8));
    operator delete(*(void **)a1);
  }
  result = &v3[v4];
  *(_QWORD *)(a1 + 16) = &v3[v4];
  *(_QWORD *)(a1 + 8) = (char *)v3 + (v6 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v3;
  return result;
}
