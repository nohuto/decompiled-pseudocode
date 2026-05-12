/*
 * XREFs of sub_1401360E4 @ 0x1401360E4
 * Callers:
 *     sub_14007E0B8 @ 0x14007E0B8 (sub_14007E0B8.c)
 *     sub_1400829EC @ 0x1400829EC (sub_1400829EC.c)
 * Callees:
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 */

__int64 __fastcall sub_1401360E4(_DWORD **a1)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v8 = 0LL;
  v6 = 0;
  v2 = sub_140137D80((_DWORD)v1, 2, 4, 512, (__int64)&v7, (__int64)&v8);
  if ( v2 >= 0 )
  {
    sub_1400859B4(v1, v7, &v9, &v6);
    if ( v6 )
      v2 = sub_140138090(v1, v3, v4, 0LL);
    else
      v2 = -1073741789;
  }
  sub_14013839C(v1, &v7, &v8);
  return (unsigned int)v2;
}
