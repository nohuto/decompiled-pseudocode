/*
 * XREFs of AslpMemoryCheckFileBounds @ 0x140719B70
 * Callers:
 *     AslpImageFirstSectionUma @ 0x140895834 (AslpImageFirstSectionUma.c)
 * Callees:
 *     <none>
 */

bool __fastcall AslpMemoryCheckFileBounds(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rax

  v3 = *(_QWORD *)(a3 + 32);
  v4 = a1 + a2;
  v5 = *(_QWORD *)(a3 + 40);
  v6 = v5 + v3;
  return a1 >= v3 && a1 <= v4 && a1 <= v6 && v4 >= v3 && v4 <= v6 && v3 <= v6 && a2 <= v5;
}
