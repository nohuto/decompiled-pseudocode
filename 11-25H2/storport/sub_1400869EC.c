/*
 * XREFs of sub_1400869EC @ 0x1400869EC
 * Callers:
 *     sub_14008F890 @ 0x14008F890 (sub_14008F890.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400869EC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        int a21,
        __int64 a22)
{
  const wchar_t *v22; // rcx
  const char *v23; // rbx
  const char *v24; // r9
  const wchar_t *v25; // r10
  const char *v26; // r8
  int v27; // r11d
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // rcx
  int v32; // ecx
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  int v39; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+48h] [rbp-C0h] BYREF
  int *v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  const wchar_t *v45; // [rsp+78h] [rbp-90h]
  int v46; // [rsp+80h] [rbp-88h]
  int v47; // [rsp+84h] [rbp-84h]
  const char *v48; // [rsp+88h] [rbp-80h]
  int v49; // [rsp+90h] [rbp-78h]
  int v50; // [rsp+94h] [rbp-74h]
  const wchar_t *v51; // [rsp+98h] [rbp-70h]
  int v52; // [rsp+A0h] [rbp-68h]
  int v53; // [rsp+A4h] [rbp-64h]
  char *v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  char *v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]
  const char *v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  const char *v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E4h] [rbp-24h]
  char *v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  char *v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  char *v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h]
  char *v70; // [rsp+118h] [rbp+10h]
  __int64 v71; // [rsp+120h] [rbp+18h]
  char *v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  char *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  char *v76; // [rsp+148h] [rbp+40h]
  __int64 v77; // [rsp+150h] [rbp+48h]
  char *v78; // [rsp+158h] [rbp+50h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  int *v80; // [rsp+168h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+68h]
  __int64 v82; // [rsp+178h] [rbp+70h]
  __int64 v83; // [rsp+180h] [rbp+78h]
  int v84; // [rsp+1D0h] [rbp+C8h] BYREF

  v84 = a4;
  v22 = a6;
  v23 = a12;
  v24 = a11;
  v25 = a8;
  v26 = a7;
  v41 = &v84;
  v27 = 10;
  v43 = a5;
  v28 = -1LL;
  v39 = 4096;
  v42 = 4LL;
  v44 = 16LL;
  if ( a6 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a6[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v46 = v30;
  v47 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v45 = v22;
  if ( a7 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a7[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v49 = v32;
  v50 = 0;
  if ( !a7 )
    v26 = "NULL";
  v48 = v26;
  v33 = a8 == 0LL;
  if ( a8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a8[v34] );
    v27 = 2 * v34 + 2;
    v33 = a8 == 0LL;
  }
  v52 = v27;
  if ( v33 )
    v25 = L"NULL";
  v54 = &a9;
  v51 = v25;
  v56 = &a10;
  v53 = 0;
  v55 = 2LL;
  v57 = 2LL;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = (unsigned int)(v35 + 1);
  }
  else
  {
    v36 = 5LL;
  }
  v59 = v36;
  v60 = 0;
  if ( !a11 )
    v24 = "NULL";
  v58 = v24;
  if ( a12 )
  {
    do
      ++v28;
    while ( a12[v28] );
    v37 = v28 + 1;
  }
  else
  {
    v37 = 5;
  }
  v62 = v37;
  v63 = 0;
  v64 = &a13;
  v65 = 8LL;
  v66 = &a14;
  if ( !a12 )
    v23 = "NULL";
  v61 = v23;
  v68 = &a15;
  v67 = 2LL;
  v70 = &a16;
  v69 = 2LL;
  v72 = &a17;
  v74 = &a18;
  v76 = &a19;
  v78 = &a20;
  v80 = &v39;
  v82 = a22;
  v71 = 2LL;
  v73 = 8LL;
  v75 = 4LL;
  v77 = 1LL;
  v79 = 8LL;
  v81 = 4LL;
  v83 = 4096LL;
  return sub_1400031E4(v36, &stru_140149F88, 0LL, 0x14u, &v40);
}
