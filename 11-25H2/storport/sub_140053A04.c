/*
 * XREFs of sub_140053A04 @ 0x140053A04
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_140029E90 @ 0x140029E90 (sub_140029E90.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140053A04(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 8LL;
  v9 = a4;
  v12 = &a5;
  return sub_1400031E4((__int64)L"NULL", &stru_140149558, 0LL, 3u, &v8);
}
