/*
 * XREFs of sub_180028AE4 @ 0x180028AE4
 * Callers:
 *     sub_180027998 @ 0x180027998 (sub_180027998.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18006AA98 @ 0x18006AA98 (sub_18006AA98.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 *     sub_18007C97C @ 0x18007C97C (sub_18007C97C.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_18002793C @ 0x18002793C (sub_18002793C.c)
 */

_QWORD *__fastcall sub_180028AE4(_QWORD *a1, signed int a2)
{
  _BYTE *v3; // rdx
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)sub_18002793C((__int64)v5, a2);
  }
  else
  {
    v3 = (_BYTE *)(sub_18002793C((__int64)v5, -a2) - 1);
    *v3 = 45;
  }
  sub_1800276A8(a1, v3, v5);
  return a1;
}
