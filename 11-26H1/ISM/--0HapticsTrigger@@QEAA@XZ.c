/*
 * XREFs of ??0HapticsTrigger@@QEAA@XZ @ 0x18019DD7C
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019F164 (-_Alloc_sentinel_and_proxy@-$_Tree@V-$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocat.c)
 */

HapticsTrigger *__fastcall HapticsTrigger::HapticsTrigger(HapticsTrigger *this)
{
  _QWORD *v2; // rcx

  *((_QWORD *)this + 10) = 0LL;
  v2 = (_QWORD *)((char *)this + 72);
  *v2 = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::_Alloc_sentinel_and_proxy(v2);
  return this;
}
