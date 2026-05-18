/*
 * XREFs of sub_18009891C @ 0x18009891C
 * Callers:
 *     sub_18002BB80 @ 0x18002BB80 (sub_18002BB80.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180098138 @ 0x180098138 (sub_180098138.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009891C(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_180029674(a1);
  sub_180098A18(a1, v10, a2);
  if ( !v10[0] )
  {
    if ( a2 < sub_180098138((__m128i *)(a1 + 144), (__m128i *)(a1 + 184))->m128i_i64[0] )
    {
      sub_1800297F4(a1);
      return 2LL;
    }
    goto LABEL_12;
  }
  v6 = sub_18009A710(*(_QWORD *)(a1 + 16 * (v11 + 4)), a3, 0LL);
  if ( !v6 )
  {
LABEL_12:
    sub_1800297F4(a1);
    return 3LL;
  }
  v7 = v6 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      sub_1800297F4(a1);
      return 0LL;
    }
    else
    {
      sub_1800297F4(a1);
      return 4LL;
    }
  }
  else
  {
    sub_1800297F4(a1);
    return 1LL;
  }
}
