/*
 * XREFs of HvlGetReferenceTime @ 0x140419B10
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x140252790 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140252E50 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x1405BF100 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x140419B50 (HvlGetReferenceTimeUsingTscPage.c)
 */

__int64 HvlGetReferenceTime()
{
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  else
    return __readmsr(0x40000020u);
}
