/*
 * XREFs of ?Pdh_Failed@GamingOverlayExperienceManager@@AEAA_NJ@Z @ 0x18034C56C
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034C598 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall GamingOverlayExperienceManager::Pdh_Failed(GamingOverlayExperienceManager *this, int a2)
{
  char result; // al
  unsigned int v3; // ecx

  result = 0;
  if ( a2 > 0 )
    v3 = (unsigned __int16)a2 | 0x80070000;
  else
    v3 = a2;
  if ( v3 )
  {
    if ( a2 != -2147481643 )
      return 1;
  }
  return result;
}
