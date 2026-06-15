/*
 * XREFs of ?GetFixedBTAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@EEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800EEEE0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::GetFixedBTAudio_StreamContextFromFlowAndProcessingMode(
        __int64 a1,
        int a2,
        const void *a3)
{
  __int64 result; // rax
  bool v5; // zf

  if ( a2 == 1 )
    return 2LL;
  if ( !memcmp_0(a3, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3, 0x10uLL) )
    return 4LL;
  v5 = memcmp_0(a3, &GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7, 0x10uLL) == 0;
  result = 1LL;
  if ( v5 )
    return 2LL;
  return result;
}
