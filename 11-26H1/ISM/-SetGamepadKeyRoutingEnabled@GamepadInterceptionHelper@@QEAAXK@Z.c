/*
 * XREFs of ?SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A048
 * Callers:
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801367A0 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ??$_Emplace@U?$pair@KH@std@@@?$_Tree@V?$_Tmap_traits@KIU?$less@K@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@std@@_N@1@$$QEAU?$pair@KH@1@@Z @ 0x18010897C (--$_Emplace@U-$pair@KH@std@@@-$_Tree@V-$_Tmap_traits@KIU-$less@K@std@@V-$allocator@U-$pair@$$CBK.c)
 */

void __fastcall GamepadInterceptionHelper::SetGamepadKeyRoutingEnabled(
        GamepadInterceptionHelper *this,
        unsigned int a2)
{
  __int64 *v2; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (__int64 *)((char *)this + 72);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (__int64 *)this + 9,
    (__int64)&v5,
    &v6);
  if ( v5 == *v2 )
  {
    v5 = a2 | 0x100000000LL;
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned int,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::_Emplace<std::pair<unsigned long,int>>(
      v2,
      (__int64)v4,
      &v5);
  }
  else
  {
    ++*(_DWORD *)(v5 + 32);
  }
}
