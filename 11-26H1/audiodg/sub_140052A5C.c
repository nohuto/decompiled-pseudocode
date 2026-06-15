/*
 * XREFs of sub_140052A5C @ 0x140052A5C
 * Callers:
 *     sub_1400AFAB2 @ 0x1400AFAB2 (sub_1400AFAB2.c)
 *     sub_1400AFADE @ 0x1400AFADE (sub_1400AFADE.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_140052A5C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_1400453E4(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
