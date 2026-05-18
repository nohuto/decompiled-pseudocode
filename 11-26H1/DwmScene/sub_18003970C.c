/*
 * XREFs of sub_18003970C @ 0x18003970C
 * Callers:
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 * Callees:
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     sub_180039974 @ 0x180039974 (sub_180039974.c)
 *     sub_180039E8C @ 0x180039E8C (sub_180039E8C.c)
 *     sub_18003A1B8 @ 0x18003A1B8 (sub_18003A1B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003970C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r15d
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 i; // r14
  __int64 v14; // r14

  v8 = a1;
  v9 = a1;
  if ( a3 > 32 )
  {
    v10 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      v9 = sub_180039E8C(v9, v9 + 512, a5);
      --v10;
    }
    while ( v10 );
  }
  result = sub_180039E8C(v9, a2, a5);
  if ( a3 > 32 )
  {
    sub_18003A1B8(v8, a2, a4, a3, a5);
    v12 = a4 + 16 * a3;
    result = sub_180039974(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v14 )
    {
      sub_180039974(v8, a2, a4, i, a3, a5);
      v14 = 2 * i;
      result = sub_180039974(a4, (int)a4 + 16 * (int)a3, v8, v14, a3, a5);
    }
    while ( a4 != v12 )
    {
      result = sub_180032460(a4);
      a4 += 16LL;
    }
  }
  return result;
}
