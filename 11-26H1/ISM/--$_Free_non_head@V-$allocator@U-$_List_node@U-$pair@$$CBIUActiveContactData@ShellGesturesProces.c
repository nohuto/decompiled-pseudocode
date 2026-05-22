/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015C33C
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1801A2844 (--1-$_Hash@V-$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V-$_Uhash_compare@IU-$has.c)
 *     ??1?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1801A2988 (--1-$list@U-$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
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
      std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x80);
      v2 = v3;
    }
    while ( v3 );
  }
}
