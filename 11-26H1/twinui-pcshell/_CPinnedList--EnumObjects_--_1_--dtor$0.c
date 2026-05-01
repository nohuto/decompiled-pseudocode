/*
 * XREFs of _CPinnedList::EnumObjects_::_1_::dtor$0 @ 0x180705E9D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::EnumObjects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CPinnedListEnum>::~ComPtr<CPinnedListEnum>((CPinnedListEnum **)(a2 + 32));
}
