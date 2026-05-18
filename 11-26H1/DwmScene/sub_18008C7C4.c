/*
 * XREFs of sub_18008C7C4 @ 0x18008C7C4
 * Callers:
 *     sub_18008D334 @ 0x18008D334 (sub_18008D334.c)
 * Callees:
 *     sub_18008CB04 @ 0x18008CB04 (sub_18008CB04.c)
 *     sub_18008D0A4 @ 0x18008D0A4 (sub_18008D0A4.c)
 *     sub_18008D524 @ 0x18008D524 (sub_18008D524.c)
 */

__int64 __fastcall sub_18008C7C4(void *Src, int a2, __int64 a3, int a4)
{
  void *v8; // rax
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v12; // rsi

  v8 = Src;
  if ( a3 > 32 )
  {
    v9 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      v8 = (void *)sub_18008D0A4(v8);
      --v9;
    }
    while ( v9 );
  }
  result = sub_18008D0A4(v8);
  if ( a3 > 32 )
  {
    sub_18008D524(Src);
    result = sub_18008CB04(a4, a4 + 16 * (int)a3, (_DWORD)Src, 64, a3);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_18008CB04((_DWORD)Src, a2, a4, i, a3);
      v12 = 2 * i;
      result = sub_18008CB04(a4, a4 + 16 * (int)a3, (_DWORD)Src, v12, a3);
    }
  }
  return result;
}
