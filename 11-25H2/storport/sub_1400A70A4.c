/*
 * XREFs of sub_1400A70A4 @ 0x1400A70A4
 * Callers:
 *     sub_1400313E4 @ 0x1400313E4 (sub_1400313E4.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400A70A4(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        int a16,
        __int64 a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        int a26,
        __int64 a27)
{
  const char *v27; // r10
  __int64 v28; // rcx
  const char *v29; // rdx
  const char *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v41; // [rsp+40h] [rbp-C0h]
  int v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+4Ch] [rbp-B4h]
  char *v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  char *v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  char *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  const char *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  char *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  char *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  int *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+118h] [rbp+18h]
  int v73; // [rsp+11Ch] [rbp+1Ch]
  char *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  char *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  char *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  char *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  char *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  char *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  char *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  char *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  int *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 v92; // [rsp+1B0h] [rbp+B0h]
  int v93; // [rsp+1B8h] [rbp+B8h]
  int v94; // [rsp+1BCh] [rbp+BCh]

  v27 = a13;
  v28 = -1LL;
  v29 = a12;
  v31 = a11;
  if ( a4 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a4[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v42 = v33;
  v43 = 0;
  v45 = 4LL;
  v44 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v46 = a6;
  v48 = &a7;
  v50 = &a8;
  v52 = &a9;
  v41 = a4;
  v54 = a10;
  v47 = 16LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 1LL;
  v55 = 16LL;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v57 = v35;
  v58 = 0;
  if ( !a11 )
    v31 = "NULL";
  v56 = v31;
  if ( a12 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a12[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v60 = v37;
  v61 = 0;
  if ( !a12 )
    v29 = "NULL";
  v59 = v29;
  if ( a13 )
  {
    do
      ++v28;
    while ( a13[v28] );
    v38 = (unsigned int)(v28 + 1);
  }
  else
  {
    v38 = 5LL;
  }
  v63 = v38;
  v65 = &a14;
  v64 = 0;
  v67 = &a15;
  v66 = 4LL;
  v69 = &a16;
  if ( !a13 )
    v27 = "NULL";
  v71 = a17;
  v72 = a16;
  v74 = &a18;
  v76 = &a19;
  v78 = &a20;
  v80 = &a21;
  v82 = &a22;
  v84 = &a23;
  v86 = &a24;
  v88 = &a25;
  v90 = &a26;
  v92 = a27;
  v93 = a26;
  v62 = v27;
  v68 = 4LL;
  v70 = 4LL;
  v73 = 0;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 8LL;
  v81 = 4LL;
  v83 = 8LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v94 = 0;
  return sub_1400031E4(v38, &stru_14014B1D8, a3, 0x19u, &v40);
}
