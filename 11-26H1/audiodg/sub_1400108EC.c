/*
 * XREFs of sub_1400108EC @ 0x1400108EC
 * Callers:
 *     sub_14006CF50 @ 0x14006CF50 (sub_14006CF50.c)
 * Callees:
 *     sub_140010920 @ 0x140010920 (sub_140010920.c)
 */

__int64 __fastcall sub_1400108EC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140010920(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
