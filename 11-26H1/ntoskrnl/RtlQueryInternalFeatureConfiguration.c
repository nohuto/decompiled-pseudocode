/*
 * XREFs of RtlQueryInternalFeatureConfiguration @ 0x1406179A0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A48F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x140B2D098 (RtlpFcGetBufferManager.c)
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
    && (((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) != 0 || BYTE1(stru_140F10828.WriteOperationCount)) )
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
