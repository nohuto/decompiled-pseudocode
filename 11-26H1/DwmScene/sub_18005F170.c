/*
 * XREFs of sub_18005F170 @ 0x18005F170
 * Callers:
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800170C8 @ 0x1800170C8 (sub_1800170C8.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180063580 @ 0x180063580 (sub_180063580.c)
 */

_QWORD *__fastcall sub_18005F170(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  sub_180029E54(a1 + 16);
  sub_180012A94(*a4 + 56LL, &v19);
  sub_180012C40(&v15, &v19);
  v8 = sub_180012C40(&v21, a3);
  sub_180063580(a1, &v17, v8);
  if ( v17 )
  {
    v9 = sub_1800170C8(v17, &v22);
    v10 = *v9;
    v11 = 5;
  }
  else
  {
    v16 = 0LL;
    v9 = &v15;
    v10 = 0LL;
    v11 = 6;
  }
  *a2 = v10;
  a2[1] = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v16 )
      sub_180010EC8(v16);
  }
  if ( (v11 & 1) != 0 && v23 )
    sub_180010EC8(v23);
  if ( v18 )
    sub_180010EC8(v18);
  if ( v20 )
    sub_180010EC8(v20);
  v12 = a3[1];
  if ( v12 )
    sub_180010EC8(v12);
  v13 = a4[1];
  if ( v13 )
    sub_180010EC8(v13);
  return a2;
}
