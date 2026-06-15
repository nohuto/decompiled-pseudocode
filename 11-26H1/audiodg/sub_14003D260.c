/*
 * XREFs of sub_14003D260 @ 0x14003D260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003D260(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 280);
  if ( !v3 || (result = sub_1400B6010(v3), (int)result >= 0) )
  {
    *a3 = a2;
    sub_1400B6010(a2);
    a3[1] = 0LL;
    return 0LL;
  }
  return result;
}
