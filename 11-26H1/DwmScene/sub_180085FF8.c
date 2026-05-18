/*
 * XREFs of sub_180085FF8 @ 0x180085FF8
 * Callers:
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180085FF8(_QWORD *a1, __int16 *a2)
{
  _WORD *v3; // rdx
  unsigned __int64 result; // rax

  v3 = (_WORD *)a1[1];
  if ( v3 == (_WORD *)a1[2] )
    return (unsigned __int64)sub_180085530(a1, (__int64)v3, a2);
  result = (unsigned __int16)*a2;
  *v3 = result;
  a1[1] += 2LL;
  return result;
}
