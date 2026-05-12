/*
 * XREFs of sub_1400BB0A4 @ 0x1400BB0A4
 * Callers:
 *     sub_1400FA6EC @ 0x1400FA6EC (sub_1400FA6EC.c)
 *     sub_1400FAAB4 @ 0x1400FAAB4 (sub_1400FAAB4.c)
 *     sub_1400FB69C @ 0x1400FB69C (sub_1400FB69C.c)
 *     sub_1400FBA48 @ 0x1400FBA48 (sub_1400FBA48.c)
 *     sub_1401A6E7C @ 0x1401A6E7C (sub_1401A6E7C.c)
 * Callees:
 *     sub_1400BB140 @ 0x1400BB140 (sub_1400BB140.c)
 */

__int64 __fastcall sub_1400BB0A4(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 608);
  if ( (*(_DWORD *)(result + 4) & 1) != 0 )
    return sub_1400BB140(a1);
  return result;
}
