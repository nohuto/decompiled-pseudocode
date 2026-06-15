/*
 * XREFs of sub_14007A990 @ 0x14007A990
 * Callers:
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007A990(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a3 = 0LL;
  if ( a1 )
  {
    v8 = 0LL;
    sub_1400125D4(&v8);
    v5 = sub_1400B6010(a1);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      v5 = sub_1400B6010(v8);
      if ( v5 >= 0 )
      {
        if ( v9 == 1 )
        {
          v5 = 0;
          v6 = v8;
          v8 = 0LL;
          *a3 = v6;
        }
        else
        {
          v5 = -2147467262;
        }
      }
    }
    sub_1400125D4(&v8);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return (unsigned int)v5;
}
