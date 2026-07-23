/*
 * XREFs of AslpMemorySpanCheckBounds @ 0x140719BB4
 * Callers:
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 *     AslpFileQueryExportName @ 0x140895368 (AslpFileQueryExportName.c)
 * Callees:
 *     <none>
 */

bool __fastcall AslpMemorySpanCheckBounds(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v2 = *a1;
  v3 = *a2;
  v4 = a1[1];
  v5 = a2[1];
  v6 = v4 + *a1;
  v7 = v5 + *a2;
  return v2 >= *a2 && v2 <= v6 && v2 <= v7 && v6 >= v3 && v6 <= v7 && v3 <= v7 && v4 <= v5;
}
