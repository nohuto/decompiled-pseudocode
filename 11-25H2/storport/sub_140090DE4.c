/*
 * XREFs of sub_140090DE4 @ 0x140090DE4
 * Callers:
 *     sub_14009E468 @ 0x14009E468 (sub_14009E468.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140090DE4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14)
{
  const char *v14; // r11
  __int64 v15; // rcx
  const char *v16; // rdx
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+38h] [rbp-C9h] BYREF
  const wchar_t *v30; // [rsp+48h] [rbp-B9h]
  __int64 v31; // [rsp+50h] [rbp-B1h]
  char *v32; // [rsp+58h] [rbp-A9h]
  __int64 v33; // [rsp+60h] [rbp-A1h]
  __int64 v34; // [rsp+68h] [rbp-99h]
  __int64 v35; // [rsp+70h] [rbp-91h]
  char *v36; // [rsp+78h] [rbp-89h]
  __int64 v37; // [rsp+80h] [rbp-81h]
  char *v38; // [rsp+88h] [rbp-79h]
  __int64 v39; // [rsp+90h] [rbp-71h]
  char *v40; // [rsp+98h] [rbp-69h]
  __int64 v41; // [rsp+A0h] [rbp-61h]
  const char *v42; // [rsp+A8h] [rbp-59h]
  int v43; // [rsp+B0h] [rbp-51h]
  int v44; // [rsp+B4h] [rbp-4Dh]
  const char *v45; // [rsp+B8h] [rbp-49h]
  int v46; // [rsp+C0h] [rbp-41h]
  int v47; // [rsp+C4h] [rbp-3Dh]
  const char *v48; // [rsp+C8h] [rbp-39h]
  int v49; // [rsp+D0h] [rbp-31h]
  int v50; // [rsp+D4h] [rbp-2Dh]
  const char *v51; // [rsp+D8h] [rbp-29h]
  int v52; // [rsp+E0h] [rbp-21h]
  int v53; // [rsp+E4h] [rbp-1Dh]
  char *v54; // [rsp+E8h] [rbp-19h]
  __int64 v55; // [rsp+F0h] [rbp-11h]

  v14 = a13;
  v15 = -1LL;
  v16 = a12;
  v17 = a11;
  v18 = a10;
  if ( a4 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a4[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v31 = v20;
  v33 = 4LL;
  v32 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v34 = a6;
  v36 = &a7;
  v38 = &a8;
  v30 = a4;
  v40 = &a9;
  v35 = 16LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v43 = v22;
  v44 = 0;
  if ( !a10 )
    v18 = "NULL";
  v42 = v18;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v46 = v24;
  v47 = 0;
  if ( !a11 )
    v17 = "NULL";
  v45 = v17;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v49 = v26;
  v50 = 0;
  if ( !a12 )
    v16 = "NULL";
  v48 = v16;
  if ( a13 )
  {
    do
      ++v15;
    while ( a13[v15] );
    v27 = (unsigned int)(v15 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v52 = v27;
  v53 = 0;
  if ( !a13 )
    v14 = "NULL";
  v54 = &a14;
  v51 = v14;
  v55 = 4LL;
  return sub_1400031E4(v27, &stru_14014A650, 0LL, 0xCu, &v29);
}
