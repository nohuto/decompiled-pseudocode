/*
 * XREFs of DbgkpGetServerSiloState @ 0x140B1F0AC
 * Callers:
 *     DbgkInitialize @ 0x140CBBBC0 (DbgkInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140CBBC48 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 936;
}
