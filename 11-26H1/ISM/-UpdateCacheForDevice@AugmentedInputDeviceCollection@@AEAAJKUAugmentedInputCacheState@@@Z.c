/*
 * XREFs of ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x1800D3010
 * Callers:
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D2C50 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::UpdateCacheForDevice(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (_QWORD *)(a1 + 2760);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    a1 + 2760,
    &v8,
    &v9);
  v5 = v8;
  if ( v8 == *v3 )
    return 2147500037LL;
  v7 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)a3;
  *(_DWORD *)(v5 + 40) = v7;
  return 0LL;
}
