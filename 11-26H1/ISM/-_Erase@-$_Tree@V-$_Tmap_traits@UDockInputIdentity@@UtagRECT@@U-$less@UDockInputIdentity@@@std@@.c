/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1801865E4
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180057190 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x180182BE4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v13 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v13,
      (__int64)a2);
    v5 = v13;
  }
  v7 = *(__int64 **)a1;
  v13 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
      a1,
      a1,
      v7[1]);
    v7[1] = (__int64)v7;
    *v7 = (__int64)v7;
    v7[2] = (__int64)v7;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    while ( v2 != v4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v13,
        (__int64)a2);
      v14 = v9;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v14,
        v10);
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
              (__int64 **)a1,
              v11);
      std::_Deallocate<16>(v12, (struct std::nothrow_t *)0x48);
      v2 = v13;
    }
  }
  return v6;
}
