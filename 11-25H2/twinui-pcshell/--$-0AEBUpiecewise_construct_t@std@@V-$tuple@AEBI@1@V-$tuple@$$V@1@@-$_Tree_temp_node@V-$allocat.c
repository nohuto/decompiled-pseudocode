/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801499CC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800354E4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x180149478 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801498B8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  char *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  a1[1] = v7;
  *((_DWORD *)v7 + 7) = **a5;
  *(_QWORD *)(v7 + 36) = 0LL;
  *((_DWORD *)v7 + 8) = 0;
  *((_DWORD *)v7 + 9) = 0;
  v7[40] = 0;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
