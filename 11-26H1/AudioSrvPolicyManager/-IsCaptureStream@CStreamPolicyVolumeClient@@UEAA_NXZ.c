/*
 * XREFs of ?IsCaptureStream@CStreamPolicyVolumeClient@@UEAA_NXZ @ 0x180028230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamPolicyVolumeClient::IsCaptureStream(CStreamPolicyVolumeClient *this)
{
  return *((_DWORD *)this + 4) == 1;
}
