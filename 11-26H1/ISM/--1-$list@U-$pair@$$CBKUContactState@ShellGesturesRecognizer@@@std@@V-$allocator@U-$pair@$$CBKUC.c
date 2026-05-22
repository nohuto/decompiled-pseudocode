/*
 * XREFs of ??1?$list@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@2@@std@@QEAA@XZ @ 0x18008A1DC
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$19 @ 0x1801DBC60 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$19.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180073E30 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 */

__int64 __fastcall std::list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>::~list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16>(*a1, 56LL);
}
