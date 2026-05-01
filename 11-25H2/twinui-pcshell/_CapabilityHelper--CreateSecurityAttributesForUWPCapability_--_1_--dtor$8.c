/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8 @ 0x1806A9454
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a2 + 88));
}
