/*
 * XREFs of sub_180040098 @ 0x180040098
 * Callers:
 *     sub_18004016C @ 0x18004016C (sub_18004016C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180041D60 @ 0x180041D60 (sub_180041D60.c)
 */

_QWORD *__fastcall sub_180040098(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int128 *v5; // rax
  char v6; // bl
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  LODWORD(v11) = 0;
  sub_180041D60(a1 + 120, &v11, &v12);
  if ( v11 == *(_QWORD *)(a1 + 128) )
  {
    v5 = &v8;
    v8 = 0LL;
    v6 = 1;
  }
  else
  {
    v5 = (__int128 *)sub_180012A94(v11 + 24, &v9);
    v6 = 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *(_QWORD *)v5;
  a2[1] = *((_QWORD *)v5 + 1);
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 1) = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v10 )
      sub_180010EC8(v10);
  }
  if ( (v6 & 1) != 0 && *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  return a2;
}
