/*
 * XREFs of _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$12 @ 0x180166A33
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>((__int64 *)(a2 + 776));
}
