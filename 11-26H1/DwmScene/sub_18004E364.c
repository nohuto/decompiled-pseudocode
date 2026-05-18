/*
 * XREFs of sub_18004E364 @ 0x18004E364
 * Callers:
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18004E364(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // esi
  _BYTE v9[16]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  sub_18004CED4(a2);
  v7 = 1;
  do
  {
    if ( _bittest64(&a3, v6) )
    {
      sub_1800181BC(v10, a1 + 32 * ((int)v6 + 1LL));
      v7 |= 2u;
      sub_18004BEA0(a2, (__int64)v9, (__int64)v10);
      sub_1800129D0((__int64)v10);
    }
    ++v6;
  }
  while ( v6 < 0x40 );
  return a2;
}
