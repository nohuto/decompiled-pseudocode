/*
 * XREFs of sub_140086EA4 @ 0x140086EA4
 * Callers:
 *     sub_140089EE8 @ 0x140089EE8 (sub_140089EE8.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140086EA4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  const wchar_t *v10; // r8
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // edx
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-51h] BYREF
  int *v18; // [rsp+40h] [rbp-41h]
  __int64 v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  const wchar_t *v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+6Ch] [rbp-15h]
  const wchar_t *v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+7Ch] [rbp-5h]
  char *v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  char *v30; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+98h] [rbp+17h]
  int v32; // [rsp+D8h] [rbp+57h] BYREF

  v32 = a4;
  v9 = a6;
  v10 = a7;
  v18 = &v32;
  v20 = a5;
  v11 = -1LL;
  v19 = 4LL;
  v12 = 10;
  v21 = 16LL;
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
  v23 = v14;
  v24 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v22 = v9;
  v15 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v11;
    while ( a7[v11] );
    v12 = 2 * v11 + 2;
    v15 = a7 == 0LL;
  }
  if ( v15 )
    v10 = L"NULL";
  v26 = v12;
  v25 = v10;
  v28 = &a8;
  v27 = 0;
  v30 = &a9;
  v29 = 4LL;
  v31 = 4LL;
  return sub_1400031E4((__int64)v9, &stru_14014A2A8, 0LL, 7u, &v17);
}
