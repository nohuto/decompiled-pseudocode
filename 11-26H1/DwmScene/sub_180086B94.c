/*
 * XREFs of sub_180086B94 @ 0x180086B94
 * Callers:
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180086B6C @ 0x180086B6C (sub_180086B6C.c)
 */

_QWORD *__fastcall sub_180086B94(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // r9
  char v4; // bl
  __int64 v5; // rax
  char v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  sub_180086B6C(a1, &v9);
  if ( v9 )
  {
    v3 = (__int64 *)sub_180026A6C(v9, &v11);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v8 = 0LL;
    v3 = (__int64 *)&v7;
    v4 = 2;
    v5 = 0LL;
  }
  *a2 = v5;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v8 )
      sub_180010EC8(v8);
  }
  if ( (v4 & 1) != 0 && v12 )
    sub_180010EC8(v12);
  if ( v10 )
    sub_180010EC8(v10);
  return a2;
}
