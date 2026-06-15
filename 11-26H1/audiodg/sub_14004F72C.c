/*
 * XREFs of sub_14004F72C @ 0x14004F72C
 * Callers:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14004F72C(_QWORD *a1, _QWORD *a2)
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
