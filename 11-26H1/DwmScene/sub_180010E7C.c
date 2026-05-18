/*
 * XREFs of sub_180010E7C @ 0x180010E7C
 * Callers:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180010E7C(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  *a2 += 39LL;
  v2 = *(_QWORD *)(*a1 - 8LL);
  result = *a1 - v2 - 8;
  if ( result > 0x1F )
    invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  *a1 = v2;
  return result;
}
