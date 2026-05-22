/*
 * XREFs of _Win32kInterop::ProcessDeviceArrival_::_1_::dtor$0 @ 0x1801D3E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessDeviceArrival_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)(a2 + 104));
}
