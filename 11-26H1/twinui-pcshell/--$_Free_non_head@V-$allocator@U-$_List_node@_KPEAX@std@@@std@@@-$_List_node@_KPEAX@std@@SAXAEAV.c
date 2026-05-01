/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_List_node@_KPEAX@std@@SAXAEAV?$allocator@U?$_List_node@_KPEAX@std@@@1@PEAU01@@Z @ 0x18020260C
 * Callers:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800244E4 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1802025AC (--1-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV-$_Uhash_compare@W4Clo.c)
 *     ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x180285914 (--1-$list@IV-$allocator@I@std@@@std@@QEAA@XZ.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@HIV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180469328 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@HIV-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x18057D8E8 (--1_Clear_guard@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@std@@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x18069E0CC (-clear@-$_Hash@V-$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellVi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node<unsigned __int64,void *>::_Free_non_head<std::allocator<std::_List_node<unsigned __int64,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_Deallocate<16>(v3, 24LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
