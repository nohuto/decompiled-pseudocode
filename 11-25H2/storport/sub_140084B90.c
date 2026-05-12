/*
 * XREFs of sub_140084B90 @ 0x140084B90
 * Callers:
 *     sub_140085BC8 @ 0x140085BC8 (sub_140085BC8.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140084B90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        char a15)
{
  const wchar_t *v15; // rdx
  const wchar_t *v16; // r10
  const char *v17; // r8
  __int64 v18; // rcx
  const char *v19; // r11
  const char *v20; // r9
  int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+38h] [rbp-D0h] BYREF
  int *v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  char *v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  char *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  char *v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  __int64 v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  const wchar_t *v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  const char *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  const char *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  const char *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  const wchar_t *v57; // [rsp+E8h] [rbp-20h]
  int v58; // [rsp+F0h] [rbp-18h]
  int v59; // [rsp+F4h] [rbp-14h]
  char *v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+150h] [rbp+48h] BYREF

  v62 = a4;
  v15 = a10;
  v16 = a14;
  v17 = a13;
  v18 = -1LL;
  v19 = a12;
  v20 = a11;
  v33 = &v62;
  v35 = &a5;
  v37 = &a6;
  v39 = &a7;
  v21 = 10;
  v41 = a8;
  v43 = a9;
  v34 = 4LL;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 16LL;
  v44 = 16LL;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a10[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v46 = v23;
  v47 = 0;
  if ( !a10 )
    v15 = L"NULL";
  v45 = v15;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v49 = v25;
  v50 = 0;
  if ( !a11 )
    v20 = "NULL";
  v48 = v20;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v52 = v27;
  v53 = 0;
  if ( !a12 )
    v19 = "NULL";
  v51 = v19;
  if ( a13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v55 = v29;
  v56 = 0;
  if ( !a13 )
    v17 = "NULL";
  v54 = v17;
  v30 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v18;
    while ( a14[v18] );
    v21 = 2 * v18 + 2;
    v30 = a14 == 0LL;
  }
  if ( v30 )
    v16 = L"NULL";
  v58 = v21;
  v57 = v16;
  v60 = &a15;
  v59 = 0;
  v61 = 4LL;
  return sub_1400031E4(v18, &stru_14014B118, 0LL, 0xDu, &v32);
}
