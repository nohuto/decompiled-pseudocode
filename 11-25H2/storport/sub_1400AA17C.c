/*
 * XREFs of sub_1400AA17C @ 0x1400AA17C
 * Callers:
 *     sub_1400B7798 @ 0x1400B7798 (sub_1400B7798.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400AA17C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
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
        char a28)
{
  const wchar_t *v28; // rcx
  const char *v29; // r10
  const char *v30; // rdx
  const char *v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+38h] [rbp-D0h] BYREF
  int *v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  const wchar_t *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  const char *v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-88h]
  int v50; // [rsp+84h] [rbp-84h]
  char *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  char *v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  const char *v55; // [rsp+A8h] [rbp-60h]
  int v56; // [rsp+B0h] [rbp-58h]
  int v57; // [rsp+B4h] [rbp-54h]
  const char *v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C4h] [rbp-44h]
  char *v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D0h] [rbp-38h]
  char *v63; // [rsp+D8h] [rbp-30h]
  __int64 v64; // [rsp+E0h] [rbp-28h]
  char *v65; // [rsp+E8h] [rbp-20h]
  __int64 v66; // [rsp+F0h] [rbp-18h]
  char *v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h]
  char *v69; // [rsp+108h] [rbp+0h]
  __int64 v70; // [rsp+110h] [rbp+8h]
  char *v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+120h] [rbp+18h]
  char *v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  char *v75; // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h]
  char *v77; // [rsp+148h] [rbp+40h]
  __int64 v78; // [rsp+150h] [rbp+48h]
  char *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  char *v81; // [rsp+168h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+68h]
  char *v83; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  char *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  char *v87; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  char *v89; // [rsp+1A8h] [rbp+A0h]
  __int64 v90; // [rsp+1B0h] [rbp+A8h]
  char *v91; // [rsp+1B8h] [rbp+B0h]
  __int64 v92; // [rsp+1C0h] [rbp+B8h]
  char *v93; // [rsp+1C8h] [rbp+C0h]
  __int64 v94; // [rsp+1D0h] [rbp+C8h]
  int v95; // [rsp+210h] [rbp+108h] BYREF

  v95 = a4;
  v28 = a6;
  v29 = a11;
  v30 = a10;
  v31 = a7;
  v42 = &v95;
  v44 = a5;
  v32 = -1LL;
  v43 = 4LL;
  v45 = 16LL;
  if ( a6 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a6[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v47 = v34;
  if ( !a6 )
    v28 = L"NULL";
  v46 = v28;
  if ( a7 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a7[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v49 = v36;
  v50 = 0;
  v51 = &a8;
  v52 = 2LL;
  if ( !a7 )
    v31 = "NULL";
  v53 = &a9;
  v48 = v31;
  v54 = 2LL;
  if ( a10 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a10[v37] );
    v38 = (unsigned int)(v37 + 1);
  }
  else
  {
    v38 = 5LL;
  }
  v56 = v38;
  v57 = 0;
  if ( !a10 )
    v30 = "NULL";
  v55 = v30;
  if ( a11 )
  {
    do
      ++v32;
    while ( a11[v32] );
    v39 = v32 + 1;
  }
  else
  {
    v39 = 5;
  }
  v59 = v39;
  v60 = 0;
  v61 = &a12;
  v62 = 4LL;
  v63 = &a13;
  if ( !a11 )
    v29 = "NULL";
  v58 = v29;
  v65 = &a14;
  v64 = 4LL;
  v67 = &a15;
  v66 = 4LL;
  v69 = &a16;
  v71 = &a17;
  v73 = &a18;
  v75 = &a19;
  v77 = &a20;
  v79 = &a21;
  v81 = &a22;
  v83 = &a23;
  v85 = &a24;
  v87 = &a25;
  v89 = &a26;
  v91 = &a27;
  v93 = &a28;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 8LL;
  v82 = 8LL;
  v84 = 8LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  return sub_1400031E4(v38, &stru_14014A178, 0LL, 0x1Au, &v41);
}
