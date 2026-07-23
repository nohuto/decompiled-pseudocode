/*
 * XREFs of PsIsSystemProcess @ 0x1404688E0
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1532) & 0x1000) != 0;
}
