/*
 * XREFs of sub_1400720B0 @ 0x1400720B0
 * Callers:
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400720B0(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        __int64 a12,
        __int64 a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        const char *a17,
        const wchar_t *a18,
        const char *a19,
        char a20,
        const wchar_t *a21,
        unsigned __int16 a22,
        __int64 a23,
        unsigned __int16 a24,
        __int64 a25,
        char a26)
{
  const wchar_t *v26; // rdi
  const char *v27; // rbx
  const wchar_t *v28; // r11
  const wchar_t *v30; // rdx
  __int64 v31; // rcx
  const char *v32; // r10
  const char *v33; // r9
  int v34; // esi
  const char *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  bool v48; // zf
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+38h] [rbp-D0h] BYREF
  int *v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  char *v53; // [rsp+58h] [rbp-B0h]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  char *v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  char *v57; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-88h]
  char *v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  char *v61; // [rsp+98h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-68h]
  char *v63; // [rsp+A8h] [rbp-60h]
  __int64 v64; // [rsp+B0h] [rbp-58h]
  char *v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+C8h] [rbp-40h]
  __int64 v68; // [rsp+D0h] [rbp-38h]
  __int64 v69; // [rsp+D8h] [rbp-30h]
  __int64 v70; // [rsp+E0h] [rbp-28h]
  const wchar_t *v71; // [rsp+E8h] [rbp-20h]
  int v72; // [rsp+F0h] [rbp-18h]
  int v73; // [rsp+F4h] [rbp-14h]
  const char *v74; // [rsp+F8h] [rbp-10h]
  int v75; // [rsp+100h] [rbp-8h]
  int v76; // [rsp+104h] [rbp-4h]
  const char *v77; // [rsp+108h] [rbp+0h]
  int v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+114h] [rbp+Ch]
  const char *v80; // [rsp+118h] [rbp+10h]
  int v81; // [rsp+120h] [rbp+18h]
  int v82; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v83; // [rsp+128h] [rbp+20h]
  int v84; // [rsp+130h] [rbp+28h]
  int v85; // [rsp+134h] [rbp+2Ch]
  const char *v86; // [rsp+138h] [rbp+30h]
  int v87; // [rsp+140h] [rbp+38h]
  int v88; // [rsp+144h] [rbp+3Ch]
  char *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  const wchar_t *v91; // [rsp+158h] [rbp+50h]
  int v92; // [rsp+160h] [rbp+58h]
  int v93; // [rsp+164h] [rbp+5Ch]
  unsigned __int16 *v94; // [rsp+168h] [rbp+60h]
  __int64 v95; // [rsp+170h] [rbp+68h]
  __int64 v96; // [rsp+178h] [rbp+70h]
  int v97; // [rsp+180h] [rbp+78h]
  int v98; // [rsp+184h] [rbp+7Ch]
  unsigned __int16 *v99; // [rsp+188h] [rbp+80h]
  __int64 v100; // [rsp+190h] [rbp+88h]
  __int64 v101; // [rsp+198h] [rbp+90h]
  int v102; // [rsp+1A0h] [rbp+98h]
  int v103; // [rsp+1A4h] [rbp+9Ch]
  char *v104; // [rsp+1A8h] [rbp+A0h]
  __int64 v105; // [rsp+1B0h] [rbp+A8h]
  int v106; // [rsp+210h] [rbp+108h] BYREF

  v106 = a4;
  v26 = a21;
  v27 = a19;
  v28 = a18;
  v30 = a14;
  v31 = -1LL;
  v32 = a17;
  v33 = a16;
  v34 = 10;
  v35 = a15;
  v51 = &v106;
  v53 = &a5;
  v55 = &a6;
  v57 = &a7;
  v59 = &a8;
  v61 = &a9;
  v63 = &a10;
  v65 = &a11;
  v67 = a12;
  v69 = a13;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 1LL;
  v64 = 1LL;
  v66 = 1LL;
  v68 = 16LL;
  v70 = 16LL;
  if ( a14 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a14[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v72 = v37;
  v73 = 0;
  if ( !a14 )
    v30 = L"NULL";
  v71 = v30;
  if ( a15 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a15[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v75 = v39;
  v76 = 0;
  if ( !a15 )
    v35 = "NULL";
  v74 = v35;
  if ( a16 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a16[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v78 = v41;
  v79 = 0;
  if ( !a16 )
    v33 = "NULL";
  v77 = v33;
  if ( a17 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a17[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v43 = 5;
  }
  v81 = v43;
  v82 = 0;
  if ( !a17 )
    v32 = "NULL";
  v80 = v32;
  if ( a18 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a18[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v45 = 10;
  }
  v84 = v45;
  v85 = 0;
  if ( !a18 )
    v28 = L"NULL";
  v83 = v28;
  if ( a19 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a19[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v47 = 5;
  }
  v87 = v47;
  v88 = 0;
  if ( !a19 )
    v27 = "NULL";
  v89 = &a20;
  v86 = v27;
  v90 = 2LL;
  v48 = a21 == 0LL;
  if ( a21 )
  {
    do
      ++v31;
    while ( a21[v31] );
    v34 = 2 * v31 + 2;
    v48 = a21 == 0LL;
  }
  if ( v48 )
    v26 = L"NULL";
  v92 = v34;
  v91 = v26;
  v94 = &a22;
  v96 = a23;
  v97 = a22;
  v99 = &a24;
  v101 = a25;
  v102 = a24;
  v104 = &a26;
  v93 = 0;
  v95 = 2LL;
  v98 = 0;
  v100 = 2LL;
  v103 = 0;
  v105 = 4LL;
  return sub_1400031E4(v31, a2, 0LL, 0x18u, &v50);
}
