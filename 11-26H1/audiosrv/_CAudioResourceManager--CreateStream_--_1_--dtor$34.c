/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$34 @ 0x180167E49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 464);
}
