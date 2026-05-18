/*
 * XREFs of sub_18008CB04 @ 0x18008CB04
 * Callers:
 *     sub_18008C7C4 @ 0x18008C7C4 (sub_18008C7C4.c)
 * Callees:
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 */

__int64 __fastcall sub_18008CB04(void *a1, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx

  v5 = a5;
  if ( a4 < a5 )
  {
    v8 = 2 * a4;
    do
    {
      v9 = v5 - a4;
      v10 = v9;
      if ( v9 >= a4 )
        v10 = a4;
      v5 = v9 - v10;
      v11 = (__int64)a1 + 16 * v10 + 8 * v8;
      a3 = (void *)sub_18008D1E4(a1);
      a1 = (void *)v11;
    }
    while ( a4 < v5 );
  }
  return sub_180017A18(a1, a2, a3);
}
