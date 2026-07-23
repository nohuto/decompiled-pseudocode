/*
 * XREFs of PspDeleteSilo @ 0x140B49AF8
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
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
