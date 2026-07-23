/*
 * XREFs of RtlQueryInternalFeatureConfiguration @ 0x14061A9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A52258 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x140B2F118 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryInternalFeatureConfiguration(unsigned int a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 *BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( KeGetEffectiveIrql() > 1u
    && (((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 || PoPowerDownActionInProgress) )
  {
    return 2147483682LL;
  }
  BufferManager = (unsigned __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)&v13, &v14);
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v14, a1, a2, a4);
  v12 = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    v12 = 0;
    *a3 = v13;
  }
  else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
  {
    *a3 = v13;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v14, v11);
  return v12;
}
