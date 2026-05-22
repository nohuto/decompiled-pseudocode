/*
 * XREFs of ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C34
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180085630 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801367A0 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800CB2D0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

void __fastcall GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(GamepadInterceptionHelper *this, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  void *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (_QWORD *)((char *)this + 72);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (__int64 *)this + 9,
    (__int64)&v6,
    &v7);
  v3 = v6;
  if ( v6 != *v2 && (*(_DWORD *)(v6 + 32))-- == 1 )
  {
    v5 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned int>>>::_Extract(v2, v3);
    std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x28);
  }
}
