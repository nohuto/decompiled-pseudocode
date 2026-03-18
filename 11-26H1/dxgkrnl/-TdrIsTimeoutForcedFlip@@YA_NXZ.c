/*
 * XREFs of ?TdrIsTimeoutForcedFlip@@YA_NXZ @ 0x1401D9B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool TdrIsTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceTimeout, 0) != 0;
}
