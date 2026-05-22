/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180152EE4
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180153698 (--1-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ??1?$list@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18015378C (--1-$list@U-$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V-$allocator@U-$pair@$$CBKUIni.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x60);
      v2 = v3;
    }
    while ( v3 );
  }
}
