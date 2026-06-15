/*
 * XREFs of _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$1_0 @ 0x18016C3F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>((void **)(a2 + 48));
}
