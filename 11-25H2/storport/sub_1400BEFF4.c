/*
 * XREFs of sub_1400BEFF4 @ 0x1400BEFF4
 * Callers:
 *     sub_1400C2C00 @ 0x1400C2C00 (sub_1400C2C00.c)
 *     sub_1400C3F18 @ 0x1400C3F18 (sub_1400C3F18.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400BEFF4(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        int a28,
        __int64 a29,
        char a30,
        char a31,
        char a32)
{
  const wchar_t *v32; // rcx
  const char *v33; // rbx
  const char *v34; // r8
  const wchar_t *v36; // r10
  const char *v37; // rdx
  int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // r9d
  __int64 v42; // rcx
  int v43; // ecx
  bool v44; // zf
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+30h] [rbp-D0h] BYREF
  int *v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  const wchar_t *v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+6Ch] [rbp-94h]
  const char *v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  char *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  char *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  const char *v68; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+B8h] [rbp-48h]
  int v70; // [rsp+BCh] [rbp-44h]
  const char *v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+CCh] [rbp-34h]
  char *v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  char *v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  char *v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  char *v80; // [rsp+100h] [rbp+0h]
  __int64 v81; // [rsp+108h] [rbp+8h]
  char *v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  char *v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  char *v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h]
  char *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  char *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  char *v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  char *v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  char *v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  char *v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  char *v100; // [rsp+1A0h] [rbp+A0h]
  __int64 v101; // [rsp+1A8h] [rbp+A8h]
  char *v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  int *v104; // [rsp+1C0h] [rbp+C0h]
  __int64 v105; // [rsp+1C8h] [rbp+C8h]
  __int64 v106; // [rsp+1D0h] [rbp+D0h]
  int v107; // [rsp+1D8h] [rbp+D8h]
  int v108; // [rsp+1DCh] [rbp+DCh]
  char *v109; // [rsp+1E0h] [rbp+E0h]
  __int64 v110; // [rsp+1E8h] [rbp+E8h]
  char *v111; // [rsp+1F0h] [rbp+F0h]
  __int64 v112; // [rsp+1F8h] [rbp+F8h]
  char *v113; // [rsp+200h] [rbp+100h]
  __int64 v114; // [rsp+208h] [rbp+108h]
  int v115; // [rsp+268h] [rbp+168h] BYREF

  v115 = a4;
  v32 = a6;
  v33 = a12;
  v34 = a11;
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
  v57 = 0;
  if ( !a6 )
    v32 = L"NULL";
  v55 = v32;
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
  v59 = v43;
  v60 = 0;
  if ( !a7 )
    v37 = "NULL";
  v58 = v37;
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
  v62 = v38;
  if ( v44 )
    v36 = L"NULL";
  v64 = &a9;
  v61 = v36;
  v66 = &a10;
  v63 = 0;
  v65 = 2LL;
  v67 = 2LL;
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
  v69 = v47;
  v70 = 0;
  if ( !a11 )
    v34 = "NULL";
  v68 = v34;
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
  v72 = v48;
  v93 = 1LL;
  v74 = &a13;
  if ( !a12 )
    v33 = "NULL";
  v103 = 1LL;
  v76 = &a14;
  v110 = 1LL;
  v78 = &a15;
  v112 = 1LL;
  v80 = &a16;
  v71 = v33;
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
  v106 = a29;
  v107 = a28;
  v109 = &a30;
  v111 = &a31;
  v113 = &a32;
  v73 = 0;
  v75 = 2LL;
  v77 = 2LL;
  v79 = 2LL;
  v81 = 2LL;
  v83 = 2LL;
  v85 = 2LL;
  v87 = 2LL;
  v89 = 2LL;
  v91 = 2LL;
  v95 = 2LL;
  v97 = 2LL;
  v99 = 2LL;
  v101 = 2LL;
  v105 = 4LL;
  v108 = 0;
  v114 = 4LL;
  return sub_1400031E4(v47, a2, 0LL, 0x1Eu, &v50);
}
