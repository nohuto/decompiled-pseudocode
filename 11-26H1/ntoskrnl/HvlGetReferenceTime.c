/*
 * XREFs of HvlGetReferenceTime @ 0x140411360
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x1402540F0 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402547B0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x1405C1970 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1404113A0 (HvlGetReferenceTimeUsingTscPage.c)
 */

__int64 HvlGetReferenceTime()
{
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  else
    return __readmsr(0x40000020u);
}
