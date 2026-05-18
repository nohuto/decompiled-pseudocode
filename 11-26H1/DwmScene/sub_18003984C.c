/*
 * XREFs of sub_18003984C @ 0x18003984C
 * Callers:
 *     sub_180039294 @ 0x180039294 (sub_180039294.c)
 * Callees:
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     sub_18003A014 @ 0x18003A014 (sub_18003A014.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 *     sub_18003A2F4 @ 0x18003A2F4 (sub_18003A2F4.c)
 *     sub_18003A334 @ 0x18003A334 (sub_18003A334.c)
 */

unsigned __int64 __fastcall sub_18003984C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r10
  __int64 v22; // r11

  v7 = a3;
  v8 = a1;
  if ( a4 )
  {
    if ( !a5 )
      return v8;
    if ( a4 <= a5 && a4 <= a7 )
    {
      v10 = a6;
      v11 = sub_18003A2F4(a1, a2, a6);
      v8 = unknown_libname_7(v13, v12, v8);
      unknown_libname_7(a6, v11, v8);
      while ( v10 != v11 )
      {
        sub_180032460(v10);
        v10 += 16LL;
      }
      return v8;
    }
    if ( a5 <= a7 )
    {
      v14 = a6;
      v15 = sub_18003A2F4(a2, a3, a6);
      sub_18003A014(v8, v17, v16);
      v8 = unknown_libname_7(a6, v15, v8);
      while ( v14 != v15 )
      {
        sub_180032460(v14);
        v14 += 16LL;
      }
      return v8;
    }
    if ( a1 != a2 )
    {
      if ( a2 == a3 )
      {
        return a1;
      }
      else
      {
        ((void (*)(void))sub_18003A334)();
        sub_18003A334(v19, v18);
        sub_18003A334(v8, v20);
        return v8 + ((v21 - v22) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v7;
}
