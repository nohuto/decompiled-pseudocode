/*
 * XREFs of sub_18009A398 @ 0x18009A398
 * Callers:
 *     sub_18009A430 @ 0x18009A430 (sub_18009A430.c)
 * Callees:
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099624 @ 0x180099624 (sub_180099624.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009A398(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8[24]; // [rsp+38h] [rbp-C0h] BYREF

  result = sub_1800994C4(a2);
  if ( result )
  {
    result = sub_180099624(a2, (__int64)&v6);
    if ( v6 == 2 )
    {
      *a3 = v7;
      sub_180099290((__int64)v8);
      sub_180099374(a2, v8);
    }
    else
    {
      if ( v6 != 5 )
        return result;
      sub_180099290((__int64)v8);
      sub_180099374(a2, v8);
    }
    return sub_180099318(v8);
  }
  return result;
}
