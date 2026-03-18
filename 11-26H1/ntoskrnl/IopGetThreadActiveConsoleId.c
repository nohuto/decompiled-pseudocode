/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140B272C8
 * Callers:
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402167A0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1404E8B48 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
