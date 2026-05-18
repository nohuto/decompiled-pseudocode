/*
 * XREFs of sub_180098A64 @ 0x180098A64
 * Callers:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_18009AFF0 @ 0x18009AFF0 (sub_18009AFF0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180098A64(__int64 a1)
{
  char result; // al
  char v3; // si
  __int64 v4; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  result = sub_180041DBC(a1 + 184);
  v3 = 0;
  if ( result )
  {
    v4 = *(_QWORD *)(a1 + 192);
    sub_180029674(a1);
    sub_180098A18(a1, (__int64)v5, v4);
    if ( v5[0] )
    {
      sub_18009AFF0(*(_QWORD *)(a1 + 16 * (v6 + 4)));
      sub_1800297F4(a1);
      return 1;
    }
    else
    {
      sub_1800297F4(a1);
    }
    return v3;
  }
  return result;
}
