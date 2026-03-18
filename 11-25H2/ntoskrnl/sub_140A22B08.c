/*
 * XREFs of sub_140A22B08 @ 0x140A22B08
 * Callers:
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     sub_1409E2780 @ 0x1409E2780 (sub_1409E2780.c)
 * Callees:
 *     sub_140402470 @ 0x140402470 (sub_140402470.c)
 *     sub_1404027F0 @ 0x1404027F0 (sub_1404027F0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140A22B08(
        int a1,
        char *a2,
        char *a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8,
        _BYTE *a9)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v18; // [rsp+20h] [rbp-E8h]
  _UNKNOWN **v19; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h]
  __int128 v21; // [rsp+58h] [rbp-B0h]
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __int128 v23; // [rsp+78h] [rbp-90h]
  __int128 v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+98h] [rbp-70h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B8h] [rbp-50h]
  __int128 v28; // [rsp+C8h] [rbp-40h]
  __int128 v29; // [rsp+D8h] [rbp-30h]

  v19 = &off_140002EA0;
  v9 = a7[1];
  v20 = *a7;
  v10 = a7[2];
  v21 = v9;
  v11 = a7[3];
  v22 = v10;
  v12 = a7[4];
  v23 = v11;
  v13 = a7[5];
  v24 = v12;
  v14 = a7[6];
  v25 = v13;
  v15 = a7[8];
  v26 = v14;
  v27 = a7[7];
  v16 = a7[9];
  v28 = v15;
  v29 = v16;
  v18 = *a5;
  if ( a1 )
    sub_140402470((__int64)&v19, a2, a3, a4, v18, a6, a9);
  else
    sub_1404027F0((__int64)&v19, a2, a3, a4, v18, a6, a9);
  return 0LL;
}
