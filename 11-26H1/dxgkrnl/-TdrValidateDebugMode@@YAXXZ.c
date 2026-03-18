/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x14007ABEC
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x14007AC2C (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401D8B50 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1401DA36C (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
