/*
 * XREFs of EtwpIsWow64Logger @ 0x140A13330
 * Callers:
 *     EtwpAddLogHeader @ 0x140A12D58 (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
