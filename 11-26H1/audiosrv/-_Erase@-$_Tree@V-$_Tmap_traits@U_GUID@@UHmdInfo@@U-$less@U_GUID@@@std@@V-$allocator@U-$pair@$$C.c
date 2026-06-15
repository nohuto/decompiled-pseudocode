/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180152510
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151240 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180056074 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800560C8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAA.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014054C (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801526BC (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Erase(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r10
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v15 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
      &v15,
      (__int64)a2);
    v5 = v15;
  }
  v7 = *a1;
  v15 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
        &v15,
        (__int64)a2);
      v16 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
        &v16,
        v10);
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Extract(a1, v12, v11);
      std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(
        v14,
        v13);
      v2 = v15;
    }
  }
  return v6;
}
