/*
 * XREFs of sub_18001CBF8 @ 0x18001CBF8
 * Callers:
 *     sub_18001CBF8 @ 0x18001CBF8 (sub_18001CBF8.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001CBF8 @ 0x18001CBF8 (sub_18001CBF8.c)
 */

__int64 __fastcall sub_18001CBF8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18001CBF8(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_1800129D0((__int64)v6 + 32);
      result = sub_18000E26C(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
