/*
 * XREFs of sub_14003F04C @ 0x14003F04C
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_1400A3F60 @ 0x1400A3F60 (sub_1400A3F60.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_14003F04C(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  int *v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  char *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 8LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  return sub_14000FEC8(a1, a2, a3, 6u, &v8);
}
