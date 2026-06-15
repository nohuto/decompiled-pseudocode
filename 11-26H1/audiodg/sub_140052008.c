/*
 * XREFs of sub_140052008 @ 0x140052008
 * Callers:
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140051808 @ 0x140051808 (sub_140051808.c)
 *     sub_1400528E0 @ 0x1400528E0 (sub_1400528E0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140052008(__int64 **a1, __int64 *a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = sub_140049338(136LL, (__int64)&unk_1400C75FC);
  v8 = v4;
  if ( v4 )
  {
    v6 = (__int64 *)sub_1400528E0(v4);
    v9 = v6;
    v8 = 0LL;
    v5 = sub_140051808(v6, *a2);
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
