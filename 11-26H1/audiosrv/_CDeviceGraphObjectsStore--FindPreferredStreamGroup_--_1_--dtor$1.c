/*
 * XREFs of _CDeviceGraphObjectsStore::FindPreferredStreamGroup_::_1_::dtor$1 @ 0x180166518
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphObjectsStore::FindPreferredStreamGroup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 32);
}
