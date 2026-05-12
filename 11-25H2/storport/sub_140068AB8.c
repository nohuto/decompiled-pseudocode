/*
 * XREFs of sub_140068AB8 @ 0x140068AB8
 * Callers:
 *     sub_140056120 @ 0x140056120 (sub_140056120.c)
 *     sub_1400BED78 @ 0x1400BED78 (sub_1400BED78.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140068AB8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  char *v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  char *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  char *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v13 = v9;
  v14 = 0;
  v16 = 4LL;
  v15 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v17 = a6;
  v12 = a4;
  v19 = &a7;
  v18 = 16LL;
  v21 = &a8;
  v20 = 4LL;
  v22 = 4LL;
  return sub_1400031E4((__int64)L"NULL", &stru_140149E98, 0LL, 6u, &v11);
}
