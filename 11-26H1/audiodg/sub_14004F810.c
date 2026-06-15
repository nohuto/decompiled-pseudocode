/*
 * XREFs of sub_14004F810 @ 0x14004F810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004F810(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = off_1400BB350;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
