/*
 * XREFs of sub_18009888C @ 0x18009888C
 * Callers:
 *     sub_18002BA20 @ 0x18002BA20 (sub_18002BA20.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180098148 @ 0x180098148 (sub_180098148.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_18009A468 @ 0x18009A468 (sub_18009A468.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009888C(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a1;
  sub_180029674(a1);
  sub_180098A18(a1, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    sub_180098148((__int64 *)(a1 + 48), (__int64)v5, &v7);
    sub_18009A468(*(_QWORD *)(a1 + 16 * (v7 + 4)));
    sub_1800297F4(a1);
    return 1;
  }
  else
  {
    sub_1800297F4(a1);
    return 0;
  }
}
