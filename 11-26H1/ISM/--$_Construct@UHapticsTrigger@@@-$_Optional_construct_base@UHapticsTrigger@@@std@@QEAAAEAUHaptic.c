/*
 * XREFs of ??$_Construct@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAAEAUHapticsTrigger@@$$QEAU2@@Z @ 0x18019D4F8
 * Callers:
 *     ??$_Assign@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAX$$QEAUHapticsTrigger@@@Z @ 0x18019D44C (--$_Assign@UHapticsTrigger@@@-$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAX$$QEAUHaptic.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019F164 (-_Alloc_sentinel_and_proxy@-$_Tree@V-$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocat.c)
 */

__int64 __fastcall std::_Optional_construct_base<HapticsTrigger>::_Construct<HapticsTrigger>(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 72);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(unsigned __int64 *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::_Alloc_sentinel_and_proxy(a1 + 72);
  v5 = *v2;
  *v2 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v5;
  v7 = v2[1];
  v2[1] = v6;
  result = a1;
  *(_QWORD *)(a2 + 80) = v7;
  *(_BYTE *)(a1 + 88) = 1;
  return result;
}
