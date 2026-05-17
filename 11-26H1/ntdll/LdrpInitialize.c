/*
 * XREFs of LdrpInitialize @ 0x1800CE998
 * Callers:
 *     LdrInitializeThunk @ 0x1800CE970 (LdrInitializeThunk.c)
 * Callees:
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1800CEA20 (RtlInitializeProcessorFeaturesBitMap.c)
 *     InitSecurityCookie @ 0x1800DCC70 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800F9010 (InitSpecialMachineFrames.c)
 *     __cpu_features_init @ 0x18013180C (__cpu_features_init.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( SecurityCookieInitialized || (NtCurrentPeb()->ProcessParameters->Flags & 0x80000000) == 0 )
  {
    v4 = LdrpIsSecureProcess;
  }
  else
  {
    v4 = 1;
    LdrpIsSecureProcess = 1;
  }
  RtlInitializeProcessorFeaturesBitMap(v4);
  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  if ( !SpecialMachineFramesInitialized )
    InitSpecialMachineFrames();
  _cpu_features_init();
  return LdrpInitializeInternal(a1, a2);
}
