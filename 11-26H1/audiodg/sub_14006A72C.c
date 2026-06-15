/*
 * XREFs of sub_14006A72C @ 0x14006A72C
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14003529C @ 0x14003529C (sub_14003529C.c)
 *     sub_140035CA4 @ 0x140035CA4 (sub_140035CA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_14006A72C(__int64 a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  sub_140035CA4(&v5, a1);
  sub_14003529C(&v4, a1);
  v2 = 0;
  if ( v4 )
  {
    v2 = 1;
  }
  else if ( v5 )
  {
    sub_1400B6010(v5);
  }
  sub_140003238(&v4);
  sub_140003238(&v5);
  return v2;
}
