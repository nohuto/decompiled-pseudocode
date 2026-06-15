/*
 * XREFs of sub_140051F3C @ 0x140051F3C
 * Callers:
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140050E20 @ 0x140050E20 (sub_140050E20.c)
 *     sub_140052780 @ 0x140052780 (sub_140052780.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140051F3C(__int64 *a1, _WORD **a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = sub_140049338(120LL, (__int64)&unk_1400C75FC);
  v8 = v4;
  if ( v4 )
  {
    v6 = sub_140052780(v4);
    v8 = 0LL;
    v5 = sub_140050E20(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        sub_1400B6010(v6);
      *a1 = v6;
      if ( v6 )
        sub_1400B6010(v6);
      v5 = 0;
    }
    else if ( v6 )
    {
      sub_1400B6010(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_1400454AC(&v8);
  return (unsigned int)v5;
}
