/*
 * XREFs of ?GetFormFactor@AudioEndpointInfo@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180141FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioEndpointInfo::GetFormFactor(AudioEndpointInfo *this)
{
  return CEndpointCharacteristics::FormFactor(*(CEndpointCharacteristics **)(*((_QWORD *)this + 1) + 1584LL));
}
