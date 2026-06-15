/*
 * XREFs of sub_14003D070 @ 0x14003D070
 * Callers:
 *     sub_1400253A8 @ 0x1400253A8 (sub_1400253A8.c)
 *     sub_14003CFA0 @ 0x14003CFA0 (sub_14003CFA0.c)
 *     sub_1400549B0 @ 0x1400549B0 (sub_1400549B0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048424 @ 0x140048424 (sub_140048424.c)
 *     sub_140048448 @ 0x140048448 (sub_140048448.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 */

__int64 __fastcall sub_14003D070(unsigned int a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1;
  v4 = 0;
  v10 = sub_1400499B8(4LL * a1 + 40, &unk_1400C75FC);
  v5 = (_QWORD *)v10;
  if ( v10 )
  {
    v7 = sub_1400499B8(4 * v2 + 32, &unk_1400C75FC);
    v9 = v7;
    if ( v7 )
    {
      *v5 = v7;
      *a2 = v5;
      v9 = 0LL;
      v10 = 0LL;
    }
    else
    {
      v4 = -2147024882;
      sub_14000C2A8(
        (int)retaddr,
        162,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        -2147024882);
    }
    sub_140048424(&v9);
    sub_140048448(&v10);
  }
  else
  {
    v4 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      158,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      -2147024882);
  }
  return v4;
}
