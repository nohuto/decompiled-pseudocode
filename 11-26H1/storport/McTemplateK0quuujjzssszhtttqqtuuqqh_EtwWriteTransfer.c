/*
 * XREFs of McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer @ 0x14008E9D0
 * Callers:
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
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
        char a26)
{
  const wchar_t *v26; // rcx
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  int v31; // r8d
  const char *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const char *v35; // rcx
  __int64 v36; // rdx
  int v37; // edx
  const char *v38; // rcx
  bool v39; // zf
  __int64 v40; // rdx
  const wchar_t *v41; // rcx
  bool v42; // zf
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+38h] [rbp-D0h] BYREF
  int *v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h]
  char *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  char *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  const wchar_t *v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-58h]
  int v59; // [rsp+B4h] [rbp-54h]
  const char *v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  const char *v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+D4h] [rbp-34h]
  const char *v66; // [rsp+D8h] [rbp-30h]
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  const wchar_t *v69; // [rsp+E8h] [rbp-20h]
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  char *v72; // [rsp+F8h] [rbp-10h]
  __int64 v73; // [rsp+100h] [rbp-8h]
  char *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
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
  int v96; // [rsp+1F0h] [rbp+E8h] BYREF

  v96 = a4;
  v26 = a10;
  v45 = &v96;
  v46 = 4LL;
  v47 = &a5;
  v49 = &a6;
  v51 = &a7;
  v27 = 10;
  v53 = a8;
  v55 = a9;
  v28 = -1LL;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 16LL;
  v56 = 16LL;
  if ( a10 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a10[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v58 = v30;
  v59 = 0;
  if ( !a10 )
    v26 = L"NULL";
  v31 = 5;
  v57 = v26;
  v32 = a11;
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
  v61 = v34;
  v62 = 0;
  if ( !a11 )
    v32 = "NULL";
  v60 = v32;
  v35 = a12;
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
  v64 = v37;
  v65 = 0;
  if ( !a12 )
    v35 = "NULL";
  v63 = v35;
  v38 = a13;
  v39 = a13 == 0LL;
  if ( a13 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a13[v40] );
    v31 = v40 + 1;
    v39 = a13 == 0LL;
  }
  if ( v39 )
    v38 = "NULL";
  v67 = v31;
  v66 = v38;
  v41 = a14;
  v68 = 0;
  v42 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v28;
    while ( a14[v28] );
    v27 = 2 * v28 + 2;
    v42 = a14 == 0LL;
  }
  v70 = v27;
  v72 = &a15;
  v71 = 0;
  v74 = &a16;
  if ( v42 )
    v41 = L"NULL";
  v69 = v41;
  v76 = &a17;
  v73 = 2LL;
  v78 = &a18;
  v75 = 4LL;
  v80 = &a19;
  v82 = &a20;
  v84 = &a21;
  v86 = &a22;
  v88 = &a23;
  v90 = &a24;
  v92 = &a25;
  v94 = &a26;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 2LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v41, &TcgConfigurationInvalid, 0LL, 0x18u, &v44);
}
