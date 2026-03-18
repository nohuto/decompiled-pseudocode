/*
 * XREFs of ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ @ 0x18019A784
 * Callers:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x18019A748 (--$_Uninitialized_value_construct_n@V-$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<CMilPoint2F>>::_Emplace_back<>(__int64 a1)
{
  *(_QWORD *)(a1 + 8) += 8LL;
}
