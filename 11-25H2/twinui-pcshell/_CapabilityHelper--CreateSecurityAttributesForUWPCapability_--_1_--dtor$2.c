/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$2 @ 0x1806A940C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 80));
}
