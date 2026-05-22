/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180053DC0
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801AB7E8 (--1-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@_KU-$has.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801AB878 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_com.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      result = (_QWORD *)std::_Deallocate<16>(v3, 32LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
