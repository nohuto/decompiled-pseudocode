/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180266C60
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180266E24 (--1-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180266E80 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>>>(
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
      std::_Deallocate<16>(v2, 0x38uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
