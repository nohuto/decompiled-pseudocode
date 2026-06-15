/*
 * XREFs of _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$3 @ 0x180162AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProposedConnectorFormatForProcessingMode_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
