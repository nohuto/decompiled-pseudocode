/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x1404E1F08
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x140B29378 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  return *(unsigned int *)(*((_QWORD *)PsGetServerSiloGlobals(a1) + 161) + 4LL);
}
