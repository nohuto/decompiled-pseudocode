/*
 * XREFs of ??$?0VCCachedBorderBrush@CWindowBorder@@$0A@@?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@AEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18000D1B4
 * Callers:
 *     ??$emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18000D120 (--$emplace@AEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@-$list@V-$weak_ptr@VCCache.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<CWindowBorder::CCachedBorderBrush>::weak_ptr<CWindowBorder::CCachedBorderBrush>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
