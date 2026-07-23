/*
 * XREFs of KiSetMicrocodeUpdateOptions @ 0x140530140
 * Callers:
 *     KiRestoreFeatureBits @ 0x140510000 (KiRestoreFeatureBits.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KiSetMicrocodeUpdateOptions()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rdx

  result = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x40000) != 0 )
  {
    result = KiSpeculationFeatures;
    if ( (KiSpeculationFeatures & 0x80000) != 0 )
    {
      result = KiSpeculationFeatures;
      if ( (KiSpeculationFeatures & 0x100000) == 0 )
      {
        result = __readmsr(0x123u);
        v1 = result | 0x10;
        if ( (KiSpeculationFeatures & 0x400000000000LL) == 0 )
          v1 = result & 0xFFFFFFFFFFFFFFEFuLL;
        if ( v1 != result )
        {
          result = v1;
          __writemsr(0x123u, v1);
        }
      }
    }
  }
  return result;
}
