/*
 * XREFs of HalGetMemoryCachingRequirements @ 0x1404915D0
 * Callers:
 *     PopGetHwConfigurationSignature @ 0x140C0EC5C (PopGetHwConfigurationSignature.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CB4538 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetMemoryCachingRequirements(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r11

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0;
    while ( 1 )
    {
      if ( v3 >= LODWORD(HalpPmuArbiter.WaitBlockList) )
        return 3221225473LL;
      v4 = *(_QWORD *)(HalpPmuArbiter.WaitStatus + 24LL * v3) << 12;
      if ( a1 >= v4 )
      {
        v5 = (*(_QWORD *)(HalpPmuArbiter.WaitStatus + 24LL * v3 + 8) << 12) + v4;
        if ( a1 + a2 <= v5 )
        {
          *a3 = *(_DWORD *)(HalpPmuArbiter.WaitStatus + 24LL * v3 + 16);
          return 0LL;
        }
        if ( a1 < v5 )
          return 3221225485LL;
      }
      ++v3;
    }
  }
  return 3221225485LL;
}
