/*
 * XREFs of sub_140002CB8 @ 0x140002CB8
 * Callers:
 *     sub_140003248 @ 0x140003248 (sub_140003248.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002CB8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        char a16,
        int a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28)
{
  const wchar_t *v28; // rdx
  const wchar_t *v29; // r11
  const char *v30; // r9
  const char *v31; // r10
  __int64 v32; // rcx
  const char *v33; // r8
  int v34; // ebx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  int v42; // eax
  bool v43; // zf
  char v45; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v46[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  char *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  char *v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  char *v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  const wchar_t *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  const char *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  const char *v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F4h] [rbp-14h]
  const char *v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+100h] [rbp-8h]
  int v72; // [rsp+104h] [rbp-4h]
  const wchar_t *v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+110h] [rbp+8h]
  int v75; // [rsp+114h] [rbp+Ch]
  char *v76; // [rsp+118h] [rbp+10h]
  __int64 v77; // [rsp+120h] [rbp+18h]
  char *v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h]
  char *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  char *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  char *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  char *v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  char *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  char *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  char *v92; // [rsp+198h] [rbp+90h]
  __int64 v93; // [rsp+1A0h] [rbp+98h]
  char *v94; // [rsp+1A8h] [rbp+A0h]
  __int64 v95; // [rsp+1B0h] [rbp+A8h]
  char *v96; // [rsp+1B8h] [rbp+B0h]
  __int64 v97; // [rsp+1C0h] [rbp+B8h]
  char *v98; // [rsp+1C8h] [rbp+C0h]
  __int64 v99; // [rsp+1D0h] [rbp+C8h]
  char *v100; // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  int v102; // [rsp+240h] [rbp+138h] BYREF

  v102 = a4;
  v28 = a11;
  v29 = a15;
  v30 = a14;
  v31 = a13;
  v32 = -1LL;
  v33 = a12;
  v47 = &v102;
  v49 = &a5;
  v51 = &a6;
  v53 = &a7;
  v34 = 10;
  v55 = a8;
  v57 = a9;
  v59 = &a10;
  v45 = 1;
  v48 = 4LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 16LL;
  v58 = 16LL;
  v60 = 4LL;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v62 = v36;
  v63 = 0;
  if ( !a11 )
    v28 = L"NULL";
  v61 = v28;
  if ( a12 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a12[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v65 = v38;
  v66 = 0;
  if ( !a12 )
    v33 = "NULL";
  v64 = v33;
  if ( a13 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a13[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v68 = v40;
  v69 = 0;
  if ( !a13 )
    v31 = "NULL";
  v67 = v31;
  if ( a14 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a14[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v42 = 5;
  }
  v71 = v42;
  v72 = 0;
  if ( !a14 )
    v30 = "NULL";
  v70 = v30;
  v43 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v32;
    while ( a15[v32] );
    v34 = 2 * v32 + 2;
    v43 = a15 == 0LL;
  }
  v74 = v34;
  v76 = &a16;
  v75 = 0;
  v78 = &v45;
  if ( v43 )
    v29 = L"NULL";
  v73 = v29;
  v80 = &a18;
  v77 = 4LL;
  v82 = &a19;
  v79 = 1LL;
  v84 = &a20;
  v86 = &a21;
  v88 = &a22;
  v90 = &a23;
  v92 = &a24;
  v94 = &a25;
  v96 = &a26;
  v98 = &a27;
  v100 = &a28;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 1LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 1LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 8LL;
  return sub_1400031E4(v32, &unk_140148920, 0LL, 26LL, v46);
}
