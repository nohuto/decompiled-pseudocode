/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140B29378
 * Callers:
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1404E1F08 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
