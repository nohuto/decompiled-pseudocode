/*
 * XREFs of sub_140132714 @ 0x140132714
 * Callers:
 *     sub_140133108 @ 0x140133108 (sub_140133108.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140132714(
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
        const char *a11,
        const char *a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  const char *v18; // r10
  const char *v19; // r8
  const wchar_t *v21; // rdx
  const char *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+38h] [rbp-D0h] BYREF
  int *v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  const wchar_t *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  const char *v39; // [rsp+78h] [rbp-90h]
  int v40; // [rsp+80h] [rbp-88h]
  int v41; // [rsp+84h] [rbp-84h]
  char *v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  char *v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  char *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  const char *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  const char *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  char *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  char *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  char *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  char *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  int v66; // [rsp+180h] [rbp+78h] BYREF

  v66 = a4;
  v18 = a12;
  v19 = a11;
  v21 = a6;
  v22 = a7;
  v33 = &v66;
  v35 = a5;
  v23 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v38 = v25;
  if ( !a6 )
    v21 = L"NULL";
  v37 = v21;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v40 = v27;
  v41 = 0;
  v42 = &a8;
  v43 = 4LL;
  if ( !a7 )
    v22 = "NULL";
  v44 = &a9;
  v39 = v22;
  v46 = &a10;
  v45 = 2LL;
  v47 = 2LL;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = (unsigned int)(v28 + 1);
  }
  else
  {
    v29 = 5LL;
  }
  v49 = v29;
  v50 = 0;
  if ( !a11 )
    v19 = "NULL";
  v48 = v19;
  if ( a12 )
  {
    do
      ++v23;
    while ( a12[v23] );
    v30 = v23 + 1;
  }
  else
  {
    v30 = 5;
  }
  v52 = v30;
  v53 = 0;
  v54 = &a13;
  if ( !a12 )
    v18 = "NULL";
  v51 = v18;
  v56 = &a14;
  v55 = 4LL;
  v58 = &a15;
  v57 = 4LL;
  v60 = &a16;
  v59 = 4LL;
  v62 = &a17;
  v64 = &a18;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  return sub_1400031E4(v29, a2, 0LL, 0x10u, &v32);
}
