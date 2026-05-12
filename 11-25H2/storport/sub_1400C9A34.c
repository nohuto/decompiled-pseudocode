/*
 * XREFs of sub_1400C9A34 @ 0x1400C9A34
 * Callers:
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 *     sub_14018D030 @ 0x14018D030 (sub_14018D030.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C9A34(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  const char *v9; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  int *v17; // [rsp+40h] [rbp-29h]
  __int64 v18; // [rsp+48h] [rbp-21h]
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  const char *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  char *v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+C8h] [rbp+5Fh] BYREF

  v29 = a4;
  v8 = a6;
  v9 = a7;
  v17 = &v29;
  v19 = a5;
  v11 = -1LL;
  v18 = 4LL;
  v20 = 16LL;
  if ( a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a6 )
    v8 = L"NULL";
  v21 = v8;
  if ( a7 )
  {
    do
      ++v11;
    while ( a7[v11] );
    v14 = v11 + 1;
  }
  else
  {
    v14 = 5;
  }
  v25 = v14;
  v26 = 0;
  if ( !a7 )
    v9 = "NULL";
  v28 = 2LL;
  v24 = v9;
  v27 = &a8;
  return sub_1400031E4((__int64)"NULL", a2, 0LL, 6u, &v16);
}
