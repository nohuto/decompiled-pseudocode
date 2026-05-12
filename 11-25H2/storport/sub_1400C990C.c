/*
 * XREFs of sub_1400C990C @ 0x1400C990C
 * Callers:
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C990C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        int a9,
        char a10)
{
  const wchar_t *v10; // rcx
  const char *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  int v15; // eax
  int v17; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-69h] BYREF
  int *v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h]
  __int64 v22; // [rsp+68h] [rbp-41h]
  const wchar_t *v23; // [rsp+70h] [rbp-39h]
  int v24; // [rsp+78h] [rbp-31h]
  int v25; // [rsp+7Ch] [rbp-2Dh]
  const char *v26; // [rsp+80h] [rbp-29h]
  int v27; // [rsp+88h] [rbp-21h]
  int v28; // [rsp+8Ch] [rbp-1Dh]
  char *v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  int *v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  char *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+F8h] [rbp+4Fh] BYREF

  v35 = a4;
  v10 = a6;
  v11 = a7;
  v19 = &v35;
  v21 = a5;
  v12 = -1LL;
  v17 = 0;
  v20 = 4LL;
  v22 = 16LL;
  if ( a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a6[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v24 = v14;
  v25 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v23 = v10;
  if ( a7 )
  {
    do
      ++v12;
    while ( a7[v12] );
    v15 = v12 + 1;
  }
  else
  {
    v15 = 5;
  }
  v27 = v15;
  v28 = 0;
  v30 = 4LL;
  v29 = &a8;
  if ( !a7 )
    v11 = "NULL";
  v32 = 4LL;
  v26 = v11;
  v31 = &v17;
  v34 = 4LL;
  v33 = &a10;
  return sub_1400031E4((__int64)"NULL", &stru_14014A610, 0LL, 8u, &v18);
}
