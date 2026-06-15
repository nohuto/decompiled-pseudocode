/*
 * XREFs of sub_1400A2D44 @ 0x1400A2D44
 * Callers:
 *     sub_140044230 @ 0x140044230 (sub_140044230.c)
 *     sub_14009E630 @ 0x14009E630 (sub_14009E630.c)
 *     sub_1400A3650 @ 0x1400A3650 (sub_1400A3650.c)
 *     sub_1400A3730 @ 0x1400A3730 (sub_1400A3730.c)
 *     sub_1400A3D50 @ 0x1400A3D50 (sub_1400A3D50.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1400A2D44(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-39h]
  __int64 v11; // [rsp+48h] [rbp-31h]
  int *v12; // [rsp+50h] [rbp-29h]
  __int64 v13; // [rsp+58h] [rbp-21h]
  char *v14; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  char *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  char *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  char *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  __int64 v22; // [rsp+D0h] [rbp+57h] BYREF
  int v23; // [rsp+D8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 8LL;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 8LL;
  v14 = &a5;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  return sub_14000FEC8(a1, &stru_1400C8240, a3, 7u, &v9);
}
