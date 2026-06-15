/*
 * XREFs of sub_140050F40 @ 0x140050F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140050F40(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_1400BB7E0;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
