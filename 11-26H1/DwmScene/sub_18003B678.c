/*
 * XREFs of sub_18003B678 @ 0x18003B678
 * Callers:
 *     sub_18003B78C @ 0x18003B78C (sub_18003B78C.c)
 *     sub_18003D480 @ 0x18003D480 (sub_18003D480.c)
 *     sub_18003D52C @ 0x18003D52C (sub_18003D52C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003B5C4 @ 0x18003B5C4 (sub_18003B5C4.c)
 *     sub_18003B63C @ 0x18003B63C (sub_18003B63C.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003B678(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  bool v7; // si
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  sub_18003D758();
  sub_18003B5C4(a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( v9 )
      sub_180010EC8(v9);
    return v5;
  }
  else
  {
    do
    {
      v7 = 0;
      if ( a2 != a1 )
      {
        v4 |= 1u;
        if ( !*sub_18003B63C(a2, &v10) )
          v7 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v11 )
          sub_180010EC8(v11);
      }
      if ( !v7 )
        break;
      a2 = *sub_180013644(a2, &v12);
      if ( v13 )
        sub_180010EC8(v13);
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      a2 = *sub_18003B63C(a2, &v10);
    }
    if ( (v4 & 2) != 0 && v11 )
      sub_180010EC8(v11);
    if ( v9 )
      sub_180010EC8(v9);
    return a2;
  }
}
