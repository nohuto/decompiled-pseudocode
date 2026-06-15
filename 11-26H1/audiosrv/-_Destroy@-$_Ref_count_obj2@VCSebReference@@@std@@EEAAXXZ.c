/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCSebReference@@@std@@EEAAXXZ @ 0x1800793B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSebReference@CSebNotifier@@QEAAXXZ @ 0x1800B0870 (-ReleaseSebReference@CSebNotifier@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj2<CSebReference>::_Destroy(__int64 a1)
{
  CSebNotifier::ReleaseSebReference(*(CSebNotifier **)(a1 + 16));
}
