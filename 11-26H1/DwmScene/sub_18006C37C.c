/*
 * XREFs of sub_18006C37C @ 0x18006C37C
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006C37C(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a3 )
  {
    *a1 |= a2;
    goto LABEL_7;
  }
  v3 = a3 - 1;
  if ( !v3 )
  {
    result = ~a2;
    *a1 &= ~a2;
LABEL_7:
    a1[1] |= a2;
    return result;
  }
  if ( v3 == 1 )
  {
    v4 = ~a2;
    *a1 &= v4;
    a1[1] &= v4;
  }
  return result;
}
