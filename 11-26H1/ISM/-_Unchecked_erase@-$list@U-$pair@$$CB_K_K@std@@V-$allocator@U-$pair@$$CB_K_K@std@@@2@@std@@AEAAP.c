/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x180048248
 * Callers:
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x180048110 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800FBFD0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  --*(_QWORD *)(a1 + 8);
  *(_QWORD *)a2[1] = v2;
  *(_QWORD *)(v2 + 8) = a2[1];
  std::_Deallocate<16>(a2, 32LL);
  return v2;
}
