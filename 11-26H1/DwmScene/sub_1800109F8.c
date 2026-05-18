/*
 * XREFs of sub_1800109F8 @ 0x1800109F8
 * Callers:
 *     sub_18000FC90 @ 0x18000FC90 (sub_18000FC90.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 * Callees:
 *     sub_18000CF0C @ 0x18000CF0C (sub_18000CF0C.c)
 */

__int64 __fastcall sub_1800109F8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a2 - 1;
  v4 = 0;
  v5 = sub_18000CF0C();
  if ( v5 < 0 || v5 > v2 )
  {
    *(_WORD *)(a1 + 2 * v2) = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v5 == v2 )
  {
    *(_WORD *)(a1 + 2 * v2) = 0;
  }
  return v4;
}
