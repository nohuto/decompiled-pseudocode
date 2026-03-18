/*
 * XREFs of PspDeleteSilo @ 0x140B47D68
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1407EEE3C (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v2 + 1504));
    *(_QWORD *)(a1 + 1504) = 0LL;
  }
}
