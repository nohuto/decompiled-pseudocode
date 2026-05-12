/*
 * XREFs of sub_1400DB85C @ 0x1400DB85C
 * Callers:
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400DB85C(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  const char *v13; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // eax
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-99h] BYREF
  int *v21; // [rsp+40h] [rbp-89h]
  __int64 v22; // [rsp+48h] [rbp-81h]
  __int64 v23; // [rsp+50h] [rbp-79h]
  __int64 v24; // [rsp+58h] [rbp-71h]
  const wchar_t *v25; // [rsp+60h] [rbp-69h]
  int v26; // [rsp+68h] [rbp-61h]
  int v27; // [rsp+6Ch] [rbp-5Dh]
  const char *v28; // [rsp+70h] [rbp-59h]
  int v29; // [rsp+78h] [rbp-51h]
  int v30; // [rsp+7Ch] [rbp-4Dh]
  char *v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+88h] [rbp-41h]
  char *v33; // [rsp+90h] [rbp-39h]
  __int64 v34; // [rsp+98h] [rbp-31h]
  char *v35; // [rsp+A0h] [rbp-29h]
  __int64 v36; // [rsp+A8h] [rbp-21h]
  char *v37; // [rsp+B0h] [rbp-19h]
  __int64 v38; // [rsp+B8h] [rbp-11h]
  char *v39; // [rsp+C0h] [rbp-9h]
  __int64 v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+108h] [rbp+3Fh] BYREF

  v41 = a4;
  v12 = a6;
  v13 = a7;
  v21 = &v41;
  v23 = a5;
  v15 = -1LL;
  v22 = 4LL;
  v24 = 16LL;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v26 = v17;
  v27 = 0;
  if ( !a6 )
    v12 = L"NULL";
  v25 = v12;
  if ( a7 )
  {
    do
      ++v15;
    while ( a7[v15] );
    v18 = v15 + 1;
  }
  else
  {
    v18 = 5;
  }
  v29 = v18;
  v30 = 0;
  v32 = 2LL;
  v31 = &a8;
  if ( !a7 )
    v13 = "NULL";
  v28 = v13;
  v33 = &a9;
  v34 = 2LL;
  v35 = &a10;
  v36 = 4LL;
  v37 = &a11;
  v38 = 4LL;
  v39 = &a12;
  v40 = 4LL;
  return sub_1400031E4((__int64)"NULL", a2, 0LL, 0xAu, &v20);
}
