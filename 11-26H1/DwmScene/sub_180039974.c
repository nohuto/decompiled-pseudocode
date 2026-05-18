/*
 * XREFs of sub_180039974 @ 0x180039974
 * Callers:
 *     sub_18003970C @ 0x18003970C (sub_18003970C.c)
 * Callees:
 *     sub_180039F74 @ 0x180039F74 (sub_180039F74.c)
 */

__int64 __fastcall sub_180039974(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx

  v6 = a5;
  if ( a4 < a5 )
  {
    v9 = 2 * a4;
    do
    {
      v10 = v6 - a4;
      v11 = a1 + 8 * v9;
      v12 = v10;
      if ( v10 >= a4 )
        v12 = a4;
      v6 = v10 - v12;
      v13 = 2 * v12;
      v14 = v11 + 8 * v13;
      a3 = sub_180039F74(a1, v11, (int)v11 + 8 * (int)v13, a3, a6);
      a1 = v14;
    }
    while ( a4 < v6 );
  }
  return unknown_libname_7(a1, a2, a3);
}
