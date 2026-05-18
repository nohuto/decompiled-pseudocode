/*
 * XREFs of sub_1800316E0 @ 0x1800316E0
 * Callers:
 *     sub_1800D9907 @ 0x1800D9907 (sub_1800D9907.c)
 *     sub_1800D9BD8 @ 0x1800D9BD8 (sub_1800D9BD8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800316E0(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_180010EC8(v4);
      sub_18000E26C(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_18000E26C(*a1, 0x20uLL);
}
