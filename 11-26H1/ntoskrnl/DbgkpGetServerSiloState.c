/*
 * XREFs of DbgkpGetServerSiloState @ 0x140B1CE9C
 * Callers:
 *     DbgkInitialize @ 0x140CB5B80 (DbgkInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140CB5C08 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 936;
}
