/*
 * XREFs of sub_1400C97B8 @ 0x1400C97B8
 * Callers:
 *     sub_1400D49EC @ 0x1400D49EC (sub_1400D49EC.c)
 *     sub_1400D4BF4 @ 0x1400D4BF4 (sub_1400D4BF4.c)
 *     sub_1400E4D80 @ 0x1400E4D80 (sub_1400E4D80.c)
 *     sub_140194D2C @ 0x140194D2C (sub_140194D2C.c)
 *     sub_140194F8C @ 0x140194F8C (sub_140194F8C.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C97B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        const char *a8,
        char a9,
        char a10,
        const char *a11)
{
  const wchar_t *v11; // rdx
  const char *v12; // r8
  const char *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-81h] BYREF
  int *v22; // [rsp+40h] [rbp-71h]
  __int64 v23; // [rsp+48h] [rbp-69h]
  __int64 v24; // [rsp+50h] [rbp-61h]
  __int64 v25; // [rsp+58h] [rbp-59h]
  const wchar_t *v26; // [rsp+60h] [rbp-51h]
  int v27; // [rsp+68h] [rbp-49h]
  int v28; // [rsp+6Ch] [rbp-45h]
  char *v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  const char *v31; // [rsp+80h] [rbp-31h]
  int v32; // [rsp+88h] [rbp-29h]
  int v33; // [rsp+8Ch] [rbp-25h]
  char *v34; // [rsp+90h] [rbp-21h]
  __int64 v35; // [rsp+98h] [rbp-19h]
  char *v36; // [rsp+A0h] [rbp-11h]
  __int64 v37; // [rsp+A8h] [rbp-9h]
  const char *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]
  int v41; // [rsp+F8h] [rbp+47h] BYREF

  v41 = a4;
  v11 = a6;
  v12 = a11;
  v13 = a8;
  v22 = &v41;
  v24 = a5;
  v14 = -1LL;
  v23 = 4LL;
  v25 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v27 = v16;
  v28 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v30 = 4LL;
  v26 = v11;
  v29 = &a7;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v32 = v18;
  v33 = 0;
  v34 = &a9;
  v35 = 4LL;
  if ( !a8 )
    v13 = "NULL";
  v36 = &a10;
  v31 = v13;
  v37 = 4LL;
  if ( a11 )
  {
    do
      ++v14;
    while ( a11[v14] );
    v19 = v14 + 1;
  }
  else
  {
    v19 = 5;
  }
  v39 = v19;
  v40 = 0;
  if ( !a11 )
    v12 = "NULL";
  v38 = v12;
  return sub_1400031E4((__int64)&a10, &stru_14014A0D8, 0LL, 9u, &v21);
}
