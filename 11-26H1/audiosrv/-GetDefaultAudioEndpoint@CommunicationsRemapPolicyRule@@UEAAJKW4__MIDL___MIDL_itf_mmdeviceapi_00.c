/*
 * XREFs of ?GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x18012C7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CommunicationsRemapPolicyRule::GetDefaultAudioEndpoint(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 344) )
    return 2147943568LL;
  else
    return RemapPolicyRule::GetDefaultAudioEndpoint();
}
