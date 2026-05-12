/*
 * XREFs of sub_1400873F0 @ 0x1400873F0
 * Callers:
 *     sub_14008D658 @ 0x14008D658 (sub_14008D658.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400873F0(
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
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rdx
  const wchar_t *v19; // r11
  const char *v20; // r8
  __int64 v21; // rcx
  const char *v22; // r10
  const char *v23; // r9
  int v24; // ebx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  bool v33; // zf
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+38h] [rbp-D0h] BYREF
  int *v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  char *v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  char *v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  char *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  const wchar_t *v48; // [rsp+A8h] [rbp-60h]
  int v49; // [rsp+B0h] [rbp-58h]
  int v50; // [rsp+B4h] [rbp-54h]
  const char *v51; // [rsp+B8h] [rbp-50h]
  int v52; // [rsp+C0h] [rbp-48h]
  int v53; // [rsp+C4h] [rbp-44h]
  const char *v54; // [rsp+C8h] [rbp-40h]
  int v55; // [rsp+D0h] [rbp-38h]
  int v56; // [rsp+D4h] [rbp-34h]
  const char *v57; // [rsp+D8h] [rbp-30h]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  const wchar_t *v60; // [rsp+E8h] [rbp-20h]
  int v61; // [rsp+F0h] [rbp-18h]
  int v62; // [rsp+F4h] [rbp-14h]
  char *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  char *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  char *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  char *v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  int v71; // [rsp+180h] [rbp+78h] BYREF

  v71 = a4;
  v18 = a10;
  v19 = a14;
  v20 = a13;
  v21 = -1LL;
  v22 = a12;
  v23 = a11;
  v36 = &v71;
  v38 = &a5;
  v40 = &a6;
  v42 = &a7;
  v24 = 10;
  v44 = a8;
  v46 = a9;
  v37 = 4LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 16LL;
  v47 = 16LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v49 = v26;
  v50 = 0;
  if ( !a10 )
    v18 = L"NULL";
  v48 = v18;
  if ( a11 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a11[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v52 = v28;
  v53 = 0;
  if ( !a11 )
    v23 = "NULL";
  v51 = v23;
  if ( a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a12[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v55 = v30;
  v56 = 0;
  if ( !a12 )
    v22 = "NULL";
  v54 = v22;
  if ( a13 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a13[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v58 = v32;
  v59 = 0;
  if ( !a13 )
    v20 = "NULL";
  v57 = v20;
  v33 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v21;
    while ( a14[v21] );
    v24 = 2 * v21 + 2;
    v33 = a14 == 0LL;
  }
  if ( v33 )
    v19 = L"NULL";
  v61 = v24;
  v60 = v19;
  v63 = &a15;
  v62 = 0;
  v65 = &a16;
  v64 = 8LL;
  v67 = &a17;
  v66 = 8LL;
  v69 = &a18;
  v68 = 4LL;
  v70 = 4LL;
  return sub_1400031E4(v21, &stru_14014A7F0, 0LL, 0x10u, &v35);
}
