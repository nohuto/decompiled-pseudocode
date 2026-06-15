/*
 * XREFs of sub_14007ADA0 @ 0x14007ADA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140077754 @ 0x140077754 (sub_140077754.c)
 *     sub_14007B3D8 @ 0x14007B3D8 (sub_14007B3D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007ADA0(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  sub_14007B3D8(&v9);
  v9 = 0LL;
  v4 = 0;
  v10 = 0LL;
  v5 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v11 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = sub_140077754(v5, a1);
    v10 = v6;
    v11 = 0LL;
  }
  sub_1400454AC(&v11);
  if ( v6 )
  {
    v10 = 0LL;
    v9 = v6;
  }
  else
  {
    v4 = -2147024882;
  }
  sub_14007B3D8(&v10);
  if ( v4 >= 0 )
  {
    v7 = v9;
    if ( v9 )
      sub_1400B6010(v9);
    *a2 = v7;
  }
  sub_14007B3D8(&v9);
  return (unsigned int)v4;
}
