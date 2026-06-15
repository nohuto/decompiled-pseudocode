/*
 * XREFs of ?GetFixedBTAudio_StreamContextFromFlowAndProcessingMode@CBtAudioResourceManager@@EEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800DF5A0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall CBtAudioResourceManager::GetFixedBTAudio_StreamContextFromFlowAndProcessingMode(
        __int64 a1,
        int a2,
        const void *a3)
{
  __int64 result; // rax
  bool v5; // zf

  if ( a2 == 1 )
    return 2LL;
  if ( !memcmp_0(a3, &xmmword_180190D40, 0x10uLL) )
    return 4LL;
  v5 = memcmp_0(a3, &xmmword_180190D50, 0x10uLL) == 0;
  result = 1LL;
  if ( v5 )
    return 2LL;
  return result;
}
