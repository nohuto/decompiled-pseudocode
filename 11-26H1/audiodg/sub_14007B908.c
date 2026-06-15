/*
 * XREFs of sub_14007B908 @ 0x14007B908
 * Callers:
 *     sub_140079E90 @ 0x140079E90 (sub_140079E90.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14007766C @ 0x14007766C (sub_14007766C.c)
 *     sub_14007B3B0 @ 0x14007B3B0 (sub_14007B3B0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007B908(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rbx
  int v7; // edi
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v4 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v6 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v6 = sub_14007766C(v4, a1, v5);
    v9 = v6;
    v10 = 0LL;
  }
  sub_1400454AC(&v10);
  if ( v6 )
  {
    v7 = sub_1400B6010(*(_QWORD *)(v6 + 32));
    if ( v7 >= 0 )
    {
      v9 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  sub_14007B3B0(&v9);
  return (unsigned int)v7;
}
