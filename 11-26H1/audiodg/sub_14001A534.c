/*
 * XREFs of sub_14001A534 @ 0x14001A534
 * Callers:
 *     sub_14001A4F0 @ 0x14001A4F0 (sub_14001A4F0.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001A5FC @ 0x14001A5FC (sub_14001A5FC.c)
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001A534(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v9 = 0LL;
  sub_1400125D4(&v9);
  v6 = sub_14001A5FC(a2, &v9);
  if ( v6 >= 0 )
  {
    if ( v9 )
      v6 = sub_14001A7C0(a1, v9, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
    else
      v6 = -2147024809;
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    sub_1400B6010(v7);
  }
  return (unsigned int)v6;
}
