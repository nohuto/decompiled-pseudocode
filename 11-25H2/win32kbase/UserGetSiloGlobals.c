/*
 * XREFs of UserGetSiloGlobals @ 0x14012BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserGetSiloGlobals()
{
  return *(_QWORD *)(W32GetSiloSessionState() + 16);
}
