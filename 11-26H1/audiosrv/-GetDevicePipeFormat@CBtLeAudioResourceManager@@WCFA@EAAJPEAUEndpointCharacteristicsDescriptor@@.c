/*
 * XREFs of ?GetDevicePipeFormat@CBtLeAudioResourceManager@@WCFA@EAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800F7A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtLeAudioResourceManager::GetDevicePipeFormat(__int64 a1)
{
  return CPolicyConfig::SetMixedRealitySpatialAudioFormatPolicy((CPolicyConfig *)(a1 - 592));
}
