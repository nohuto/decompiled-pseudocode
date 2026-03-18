/*
 * XREFs of PspJobIsAppSilo @ 0x140614A8C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
