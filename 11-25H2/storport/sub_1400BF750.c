/*
 * XREFs of sub_1400BF750 @ 0x1400BF750
 * Callers:
 *     sub_1400C34D0 @ 0x1400C34D0 (sub_1400C34D0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400BF750(
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
        char a33,
        char a34)
{
  const wchar_t *v34; // rcx
  const char *v35; // rbx
  const char *v36; // r8
  const wchar_t *v37; // r9
  const char *v38; // rdx
  int v39; // r11d
  __int64 v40; // rax
  __int64 v41; // r10
  unsigned int v42; // r10d
  __int64 v43; // rcx
  int v44; // ecx
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+38h] [rbp-D0h] BYREF
  int *v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+50h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-B0h]
  __int64 v55; // [rsp+60h] [rbp-A8h]
  const wchar_t *v56; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-98h]
  const char *v58; // [rsp+78h] [rbp-90h]
  int v59; // [rsp+80h] [rbp-88h]
  int v60; // [rsp+84h] [rbp-84h]
  const wchar_t *v61; // [rsp+88h] [rbp-80h]
  int v62; // [rsp+90h] [rbp-78h]
  int v63; // [rsp+94h] [rbp-74h]
  char *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  char *v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  const char *v68; // [rsp+B8h] [rbp-50h]
  int v69; // [rsp+C0h] [rbp-48h]
  int v70; // [rsp+C4h] [rbp-44h]
  const char *v71; // [rsp+C8h] [rbp-40h]
  int v72; // [rsp+D0h] [rbp-38h]
  int v73; // [rsp+D4h] [rbp-34h]
  char *v74; // [rsp+D8h] [rbp-30h]
  __int64 v75; // [rsp+E0h] [rbp-28h]
  char *v76; // [rsp+E8h] [rbp-20h]
  __int64 v77; // [rsp+F0h] [rbp-18h]
  char *v78; // [rsp+F8h] [rbp-10h]
  __int64 v79; // [rsp+100h] [rbp-8h]
  char *v80; // [rsp+108h] [rbp+0h]
  __int64 v81; // [rsp+110h] [rbp+8h]
  char *v82; // [rsp+118h] [rbp+10h]
  __int64 v83; // [rsp+120h] [rbp+18h]
  char *v84; // [rsp+128h] [rbp+20h]
  __int64 v85; // [rsp+130h] [rbp+28h]
  char *v86; // [rsp+138h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+38h]
  char *v88; // [rsp+148h] [rbp+40h]
  __int64 v89; // [rsp+150h] [rbp+48h]
  char *v90; // [rsp+158h] [rbp+50h]
  __int64 v91; // [rsp+160h] [rbp+58h]
  char *v92; // [rsp+168h] [rbp+60h]
  __int64 v93; // [rsp+170h] [rbp+68h]
  char *v94; // [rsp+178h] [rbp+70h]
  __int64 v95; // [rsp+180h] [rbp+78h]
  char *v96; // [rsp+188h] [rbp+80h]
  __int64 v97; // [rsp+190h] [rbp+88h]
  char *v98; // [rsp+198h] [rbp+90h]
  __int64 v99; // [rsp+1A0h] [rbp+98h]
  char *v100; // [rsp+1A8h] [rbp+A0h]
  __int64 v101; // [rsp+1B0h] [rbp+A8h]
  char *v102; // [rsp+1B8h] [rbp+B0h]
  __int64 v103; // [rsp+1C0h] [rbp+B8h]
  char *v104; // [rsp+1C8h] [rbp+C0h]
  __int64 v105; // [rsp+1D0h] [rbp+C8h]
  char *v106; // [rsp+1D8h] [rbp+D0h]
  __int64 v107; // [rsp+1E0h] [rbp+D8h]
  char *v108; // [rsp+1E8h] [rbp+E0h]
  __int64 v109; // [rsp+1F0h] [rbp+E8h]
  char *v110; // [rsp+1F8h] [rbp+F0h]
  __int64 v111; // [rsp+200h] [rbp+F8h]
  char *v112; // [rsp+208h] [rbp+100h]
  __int64 v113; // [rsp+210h] [rbp+108h]
  char *v114; // [rsp+218h] [rbp+110h]
  __int64 v115; // [rsp+220h] [rbp+118h]
  char *v116; // [rsp+228h] [rbp+120h]
  __int64 v117; // [rsp+230h] [rbp+128h]
  int v118; // [rsp+280h] [rbp+178h] BYREF

  v118 = a4;
  v34 = a6;
  v35 = a12;
  v36 = a11;
  v37 = a8;
  v38 = a7;
  v52 = &v118;
  v39 = 10;
  v54 = a5;
  v40 = -1LL;
  v53 = 4LL;
  v55 = 16LL;
  if ( a6 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a6[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v42 = 10;
  }
  v57 = v42;
  if ( !a6 )
    v34 = L"NULL";
  v56 = v34;
  if ( a7 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a7[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v44 = 5;
  }
  v59 = v44;
  v60 = 0;
  if ( !a7 )
    v38 = "NULL";
  v58 = v38;
  v45 = a8 == 0LL;
  if ( a8 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a8[v46] );
    v39 = 2 * v46 + 2;
    v45 = a8 == 0LL;
  }
  v62 = v39;
  if ( v45 )
    v37 = L"NULL";
  v64 = &a9;
  v61 = v37;
  v66 = &a10;
  v63 = 0;
  v65 = 2LL;
  v67 = 2LL;
  if ( a11 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a11[v47] );
    v48 = (unsigned int)(v47 + 1);
  }
  else
  {
    v48 = 5LL;
  }
  v69 = v48;
  v70 = 0;
  if ( !a11 )
    v36 = "NULL";
  v68 = v36;
  if ( a12 )
  {
    do
      ++v40;
    while ( a12[v40] );
    v49 = v40 + 1;
  }
  else
  {
    v49 = 5;
  }
  v72 = v49;
  v73 = 0;
  v74 = &a13;
  v75 = 2LL;
  v76 = &a14;
  if ( !a12 )
    v35 = "NULL";
  v71 = v35;
  v78 = &a15;
  v77 = 2LL;
  v80 = &a16;
  v79 = 2LL;
  v82 = &a17;
  v84 = &a18;
  v86 = &a19;
  v88 = &a20;
  v90 = &a21;
  v92 = &a22;
  v94 = &a23;
  v96 = &a24;
  v98 = &a25;
  v100 = &a26;
  v102 = &a27;
  v104 = &a28;
  v106 = &a29;
  v108 = &a30;
  v110 = &a31;
  v112 = &a32;
  v114 = &a33;
  v116 = &a34;
  v81 = 2LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 2LL;
  v93 = 2LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 4LL;
  v111 = 4LL;
  v113 = 1LL;
  v115 = 1LL;
  v117 = 4LL;
  return sub_1400031E4(v48, &stru_14014A0C8, 0LL, 0x20u, &v51);
}
