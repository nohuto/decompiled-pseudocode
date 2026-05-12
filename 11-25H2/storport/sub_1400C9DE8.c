/*
 * XREFs of sub_1400C9DE8 @ 0x1400C9DE8
 * Callers:
 *     sub_1400CA6FC @ 0x1400CA6FC (sub_1400CA6FC.c)
 *     sub_1400CBACC @ 0x1400CBACC (sub_1400CBACC.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C9DE8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10,
        const char *a11,
        const char *a12,
        char a13)
{
  const wchar_t *v13; // rdx
  const char *v14; // rbx
  const char *v15; // r10
  __int64 v16; // rcx
  const char *v17; // r11
  const char *v18; // r9
  const char *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+38h] [rbp-B1h] BYREF
  int *v33; // [rsp+48h] [rbp-A1h]
  __int64 v34; // [rsp+50h] [rbp-99h]
  __int64 v35; // [rsp+58h] [rbp-91h]
  __int64 v36; // [rsp+60h] [rbp-89h]
  const wchar_t *v37; // [rsp+68h] [rbp-81h]
  int v38; // [rsp+70h] [rbp-79h]
  int v39; // [rsp+74h] [rbp-75h]
  const char *v40; // [rsp+78h] [rbp-71h]
  int v41; // [rsp+80h] [rbp-69h]
  int v42; // [rsp+84h] [rbp-65h]
  char *v43; // [rsp+88h] [rbp-61h]
  __int64 v44; // [rsp+90h] [rbp-59h]
  const char *v45; // [rsp+98h] [rbp-51h]
  int v46; // [rsp+A0h] [rbp-49h]
  int v47; // [rsp+A4h] [rbp-45h]
  const char *v48; // [rsp+A8h] [rbp-41h]
  int v49; // [rsp+B0h] [rbp-39h]
  int v50; // [rsp+B4h] [rbp-35h]
  const char *v51; // [rsp+B8h] [rbp-31h]
  int v52; // [rsp+C0h] [rbp-29h]
  int v53; // [rsp+C4h] [rbp-25h]
  const char *v54; // [rsp+C8h] [rbp-21h]
  int v55; // [rsp+D0h] [rbp-19h]
  int v56; // [rsp+D4h] [rbp-15h]
  char *v57; // [rsp+D8h] [rbp-11h]
  __int64 v58; // [rsp+E0h] [rbp-9h]
  int v59; // [rsp+120h] [rbp+37h] BYREF

  v59 = a4;
  v13 = a6;
  v14 = a12;
  v15 = a11;
  v16 = -1LL;
  v17 = a10;
  v18 = a9;
  v19 = a7;
  v33 = &v59;
  v35 = a5;
  v34 = 4LL;
  v36 = 16LL;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v38 = v21;
  v39 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v37 = v13;
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v41 = v23;
  v42 = 0;
  if ( !a7 )
    v19 = "NULL";
  v44 = 2LL;
  v40 = v19;
  v43 = &a8;
  if ( a9 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a9[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v46 = v25;
  v47 = 0;
  if ( !a9 )
    v18 = "NULL";
  v45 = v18;
  if ( a10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a10[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v49 = v27;
  v50 = 0;
  if ( !a10 )
    v17 = "NULL";
  v48 = v17;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v52 = v29;
  v53 = 0;
  if ( !a11 )
    v15 = "NULL";
  v51 = v15;
  if ( a12 )
  {
    do
      ++v16;
    while ( a12[v16] );
    v30 = (unsigned int)(v16 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v55 = v30;
  v56 = 0;
  if ( !a12 )
    v14 = "NULL";
  v57 = &a13;
  v54 = v14;
  v58 = 4LL;
  return sub_1400031E4(v30, &stru_14014ACB0, 0LL, 0xBu, &v32);
}
