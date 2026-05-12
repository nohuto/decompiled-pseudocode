/*
 * XREFs of sub_1400BF390 @ 0x1400BF390
 * Callers:
 *     sub_1400C485C @ 0x1400C485C (sub_1400C485C.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400BF390(
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
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33)
{
  const wchar_t *v33; // rcx
  const char *v34; // rbx
  const char *v35; // r8
  const wchar_t *v36; // r9
  const char *v37; // rdx
  int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // r10
  unsigned int v41; // r10d
  __int64 v42; // rcx
  int v43; // ecx
  bool v44; // zf
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+38h] [rbp-D0h] BYREF
  int *v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 v53; // [rsp+58h] [rbp-B0h]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  const wchar_t *v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  const char *v57; // [rsp+78h] [rbp-90h]
  int v58; // [rsp+80h] [rbp-88h]
  int v59; // [rsp+84h] [rbp-84h]
  const wchar_t *v60; // [rsp+88h] [rbp-80h]
  int v61; // [rsp+90h] [rbp-78h]
  int v62; // [rsp+94h] [rbp-74h]
  char *v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  char *v65; // [rsp+A8h] [rbp-60h]
  __int64 v66; // [rsp+B0h] [rbp-58h]
  const char *v67; // [rsp+B8h] [rbp-50h]
  int v68; // [rsp+C0h] [rbp-48h]
  int v69; // [rsp+C4h] [rbp-44h]
  const char *v70; // [rsp+C8h] [rbp-40h]
  int v71; // [rsp+D0h] [rbp-38h]
  int v72; // [rsp+D4h] [rbp-34h]
  char *v73; // [rsp+D8h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-28h]
  char *v75; // [rsp+E8h] [rbp-20h]
  __int64 v76; // [rsp+F0h] [rbp-18h]
  char *v77; // [rsp+F8h] [rbp-10h]
  __int64 v78; // [rsp+100h] [rbp-8h]
  char *v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+110h] [rbp+8h]
  char *v81; // [rsp+118h] [rbp+10h]
  __int64 v82; // [rsp+120h] [rbp+18h]
  char *v83; // [rsp+128h] [rbp+20h]
  __int64 v84; // [rsp+130h] [rbp+28h]
  char *v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+140h] [rbp+38h]
  char *v87; // [rsp+148h] [rbp+40h]
  __int64 v88; // [rsp+150h] [rbp+48h]
  char *v89; // [rsp+158h] [rbp+50h]
  __int64 v90; // [rsp+160h] [rbp+58h]
  char *v91; // [rsp+168h] [rbp+60h]
  __int64 v92; // [rsp+170h] [rbp+68h]
  char *v93; // [rsp+178h] [rbp+70h]
  __int64 v94; // [rsp+180h] [rbp+78h]
  char *v95; // [rsp+188h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+88h]
  char *v97; // [rsp+198h] [rbp+90h]
  __int64 v98; // [rsp+1A0h] [rbp+98h]
  char *v99; // [rsp+1A8h] [rbp+A0h]
  __int64 v100; // [rsp+1B0h] [rbp+A8h]
  char *v101; // [rsp+1B8h] [rbp+B0h]
  __int64 v102; // [rsp+1C0h] [rbp+B8h]
  char *v103; // [rsp+1C8h] [rbp+C0h]
  __int64 v104; // [rsp+1D0h] [rbp+C8h]
  char *v105; // [rsp+1D8h] [rbp+D0h]
  __int64 v106; // [rsp+1E0h] [rbp+D8h]
  char *v107; // [rsp+1E8h] [rbp+E0h]
  __int64 v108; // [rsp+1F0h] [rbp+E8h]
  char *v109; // [rsp+1F8h] [rbp+F0h]
  __int64 v110; // [rsp+200h] [rbp+F8h]
  char *v111; // [rsp+208h] [rbp+100h]
  __int64 v112; // [rsp+210h] [rbp+108h]
  char *v113; // [rsp+218h] [rbp+110h]
  __int64 v114; // [rsp+220h] [rbp+118h]
  int v115; // [rsp+270h] [rbp+168h] BYREF

  v115 = a4;
  v33 = a6;
  v34 = a12;
  v35 = a11;
  v36 = a8;
  v37 = a7;
  v51 = &v115;
  v38 = 10;
  v53 = a5;
  v39 = -1LL;
  v52 = 4LL;
  v54 = 16LL;
  if ( a6 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a6[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = 10;
  }
  v56 = v41;
  if ( !a6 )
    v33 = L"NULL";
  v55 = v33;
  if ( a7 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a7[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v43 = 5;
  }
  v58 = v43;
  v59 = 0;
  if ( !a7 )
    v37 = "NULL";
  v57 = v37;
  v44 = a8 == 0LL;
  if ( a8 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a8[v45] );
    v38 = 2 * v45 + 2;
    v44 = a8 == 0LL;
  }
  v61 = v38;
  if ( v44 )
    v36 = L"NULL";
  v63 = &a9;
  v60 = v36;
  v65 = &a10;
  v62 = 0;
  v64 = 2LL;
  v66 = 2LL;
  if ( a11 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a11[v46] );
    v47 = (unsigned int)(v46 + 1);
  }
  else
  {
    v47 = 5LL;
  }
  v68 = v47;
  v69 = 0;
  if ( !a11 )
    v35 = "NULL";
  v67 = v35;
  if ( a12 )
  {
    do
      ++v39;
    while ( a12[v39] );
    v48 = v39 + 1;
  }
  else
  {
    v48 = 5;
  }
  v71 = v48;
  v72 = 0;
  v73 = &a13;
  v74 = 2LL;
  v75 = &a14;
  if ( !a12 )
    v34 = "NULL";
  v70 = v34;
  v77 = &a15;
  v76 = 2LL;
  v79 = &a16;
  v78 = 2LL;
  v81 = &a17;
  v83 = &a18;
  v85 = &a19;
  v87 = &a20;
  v89 = &a21;
  v91 = &a22;
  v93 = &a23;
  v95 = &a24;
  v97 = &a25;
  v99 = &a26;
  v101 = &a27;
  v103 = &a28;
  v105 = &a29;
  v107 = &a30;
  v109 = &a31;
  v111 = &a32;
  v113 = &a33;
  v80 = 2LL;
  v82 = 2LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 4LL;
  v110 = 1LL;
  v112 = 1LL;
  v114 = 4LL;
  return sub_1400031E4(v47, &stru_14014A810, 0LL, 0x1Fu, &v50);
}
