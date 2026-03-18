/*
 * XREFs of KiSetMicrocodeUpdateOptions @ 0x14052DC20
 * Callers:
 *     KiRestoreFeatureBits @ 0x140516590 (KiRestoreFeatureBits.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
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
