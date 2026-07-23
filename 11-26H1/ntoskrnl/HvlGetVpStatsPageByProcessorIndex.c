/*
 * XREFs of HvlGetVpStatsPageByProcessorIndex @ 0x1405BBD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetVpStatsPageByProcessorIndex(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rdx

  if ( (HvlpFlags & 2) != 0 && HvlpVpStatsPages && a1 < 0x800 )
  {
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      _mm_lfence();
      a1 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * a1 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * a1] << 6);
    }
    if ( a1 < HvlpVpStatsPagesCount )
    {
      v3 = *(_QWORD *)(HvlpVpStatsPages + 8LL * a1);
      if ( v3 )
        *a2 = v3;
    }
  }
  return 0LL;
}
