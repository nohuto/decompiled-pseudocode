/*
 * XREFs of sub_14005B250 @ 0x14005B250
 * Callers:
 *     sub_14005A234 @ 0x14005A234 (sub_14005A234.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14005B250(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = sub_1400453E4(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
