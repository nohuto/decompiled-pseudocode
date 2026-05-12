/*
 * XREFs of sub_14007B5A0 @ 0x14007B5A0
 * Callers:
 *     sub_14007B8DC @ 0x14007B8DC (sub_14007B8DC.c)
 *     sub_14007BE40 @ 0x14007BE40 (sub_14007BE40.c)
 *     sub_14007C48C @ 0x14007C48C (sub_14007C48C.c)
 *     sub_14007CA18 @ 0x14007CA18 (sub_14007CA18.c)
 *     sub_14007D030 @ 0x14007D030 (sub_14007D030.c)
 *     sub_14007D5A8 @ 0x14007D5A8 (sub_14007D5A8.c)
 *     sub_14007DB98 @ 0x14007DB98 (sub_14007DB98.c)
 *     sub_14007E0B8 @ 0x14007E0B8 (sub_14007E0B8.c)
 *     sub_14007E56C @ 0x14007E56C (sub_14007E56C.c)
 *     sub_14007EAC0 @ 0x14007EAC0 (sub_14007EAC0.c)
 *     sub_14007F0A4 @ 0x14007F0A4 (sub_14007F0A4.c)
 *     sub_14007F650 @ 0x14007F650 (sub_14007F650.c)
 *     sub_14007FBF0 @ 0x14007FBF0 (sub_14007FBF0.c)
 *     sub_14008017C @ 0x14008017C (sub_14008017C.c)
 *     sub_1400806F4 @ 0x1400806F4 (sub_1400806F4.c)
 *     sub_140080D4C @ 0x140080D4C (sub_140080D4C.c)
 *     sub_1400812FC @ 0x1400812FC (sub_1400812FC.c)
 *     sub_14008191C @ 0x14008191C (sub_14008191C.c)
 *     sub_140081EB8 @ 0x140081EB8 (sub_140081EB8.c)
 *     sub_1400824AC @ 0x1400824AC (sub_1400824AC.c)
 *     sub_1400829EC @ 0x1400829EC (sub_1400829EC.c)
 *     sub_140082EB4 @ 0x140082EB4 (sub_140082EB4.c)
 *     sub_140083424 @ 0x140083424 (sub_140083424.c)
 *     sub_140083A3C @ 0x140083A3C (sub_140083A3C.c)
 *     sub_140084010 @ 0x140084010 (sub_140084010.c)
 *     sub_1400845D8 @ 0x1400845D8 (sub_1400845D8.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14007B5A0(
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
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rdx
  const char *v23; // rdi
  const char *v24; // r9
  const wchar_t *v25; // r11
  const char *v26; // rbx
  const char *v27; // r10
  int v28; // esi
  const char *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // ecx
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+58h] [rbp-B0h] BYREF
  int *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  char *v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  char *v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
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
  const char *v76; // [rsp+118h] [rbp+10h]
  int v77; // [rsp+120h] [rbp+18h]
  int v78; // [rsp+124h] [rbp+1Ch]
  const char *v79; // [rsp+128h] [rbp+20h]
  int v80; // [rsp+130h] [rbp+28h]
  int v81; // [rsp+134h] [rbp+2Ch]
  char *v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  char *v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  char *v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  char *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  char *v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  char *v92; // [rsp+188h] [rbp+80h]
  __int64 v93; // [rsp+190h] [rbp+88h]
  __int64 *v94; // [rsp+198h] [rbp+90h]
  __int64 v95; // [rsp+1A0h] [rbp+98h]
  __int64 *v96; // [rsp+1A8h] [rbp+A0h]
  __int64 v97; // [rsp+1B0h] [rbp+A8h]
  __int64 *v98; // [rsp+1B8h] [rbp+B0h]
  __int64 v99; // [rsp+1C0h] [rbp+B8h]
  int v100; // [rsp+220h] [rbp+118h] BYREF

  v100 = a4;
  v22 = a10;
  v23 = a16;
  v24 = a15;
  v25 = a14;
  v26 = a13;
  v27 = a12;
  v28 = 10;
  v29 = a11;
  v49 = &v100;
  v51 = &a5;
  v53 = &a6;
  v55 = &a7;
  v57 = a8;
  v59 = a9;
  v30 = -1LL;
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v50 = 4LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 1LL;
  v58 = 16LL;
  v60 = 16LL;
  if ( a10 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a10[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v62 = v32;
  v63 = 0;
  if ( !a10 )
    v22 = L"NULL";
  v61 = v22;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v65 = v34;
  v66 = 0;
  if ( !a11 )
    v29 = "NULL";
  v64 = v29;
  if ( a12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a12[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v68 = v36;
  v69 = 0;
  if ( !a12 )
    v27 = "NULL";
  v67 = v27;
  if ( a13 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a13[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v71 = v38;
  v72 = 0;
  if ( !a13 )
    v26 = "NULL";
  v70 = v26;
  v39 = a14 == 0LL;
  if ( a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a14[v40] );
    v28 = 2 * v40 + 2;
    v39 = a14 == 0LL;
  }
  if ( v39 )
    v25 = L"NULL";
  v74 = v28;
  v73 = v25;
  v75 = 0;
  if ( a15 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a15[v41] );
    v42 = (unsigned int)(v41 + 1);
  }
  else
  {
    v42 = 5LL;
  }
  v77 = v42;
  v78 = 0;
  if ( !a15 )
    v24 = "NULL";
  v76 = v24;
  if ( a16 )
  {
    do
      ++v30;
    while ( a16[v30] );
    v43 = v30 + 1;
  }
  else
  {
    v43 = 5;
  }
  v80 = v43;
  v81 = 0;
  v82 = &a17;
  v83 = 4LL;
  v84 = &a18;
  if ( !a16 )
    v23 = "NULL";
  v79 = v23;
  v86 = &a19;
  v85 = 8LL;
  v88 = &a20;
  v87 = 8LL;
  v90 = &a21;
  v92 = &a22;
  v94 = &v45;
  v96 = &v46;
  v98 = &v47;
  v89 = 8LL;
  v91 = 8LL;
  v93 = 8LL;
  v95 = 8LL;
  v97 = 8LL;
  v99 = 8LL;
  return sub_1400031E4(v42, &stru_14014A1A8, 0LL, 0x17u, &v48);
}
