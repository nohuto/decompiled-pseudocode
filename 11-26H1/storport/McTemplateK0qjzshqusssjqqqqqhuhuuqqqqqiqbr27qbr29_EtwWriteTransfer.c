/*
 * XREFs of McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer @ 0x1400B2EE4
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400BE9FC (StorpTelemetryNvmeSendNamespaceErrorDataSummary.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        __int64 a14,
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
        int a31,
        __int64 a32,
        int a33,
        __int64 a34)
{
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // edx
  int v38; // r8d
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const char *v42; // rcx
  __int64 v43; // rdx
  int v44; // edx
  const char *v45; // rcx
  __int64 v46; // rdx
  int v47; // edx
  const char *v48; // rcx
  bool v49; // zf
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  int *v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  const wchar_t *v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+6Ch] [rbp-94h]
  const char *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+7Ch] [rbp-84h]
  char *v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
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
  const char *v74; // [rsp+D0h] [rbp-30h]
  int v75; // [rsp+D8h] [rbp-28h]
  int v76; // [rsp+DCh] [rbp-24h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  char *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  char *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  char *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  char *v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  char *v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  char *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  char *v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  char *v93; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]
  char *v95; // [rsp+170h] [rbp+70h]
  __int64 v96; // [rsp+178h] [rbp+78h]
  char *v97; // [rsp+180h] [rbp+80h]
  __int64 v98; // [rsp+188h] [rbp+88h]
  char *v99; // [rsp+190h] [rbp+90h]
  __int64 v100; // [rsp+198h] [rbp+98h]
  char *v101; // [rsp+1A0h] [rbp+A0h]
  __int64 v102; // [rsp+1A8h] [rbp+A8h]
  char *v103; // [rsp+1B0h] [rbp+B0h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  char *v105; // [rsp+1C0h] [rbp+C0h]
  __int64 v106; // [rsp+1C8h] [rbp+C8h]
  char *v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1D8h] [rbp+D8h]
  char *v109; // [rsp+1E0h] [rbp+E0h]
  __int64 v110; // [rsp+1E8h] [rbp+E8h]
  int *v111; // [rsp+1F0h] [rbp+F0h]
  __int64 v112; // [rsp+1F8h] [rbp+F8h]
  __int64 v113; // [rsp+200h] [rbp+100h]
  int v114; // [rsp+208h] [rbp+108h]
  int v115; // [rsp+20Ch] [rbp+10Ch]
  int *v116; // [rsp+210h] [rbp+110h]
  __int64 v117; // [rsp+218h] [rbp+118h]
  __int64 v118; // [rsp+220h] [rbp+120h]
  int v119; // [rsp+228h] [rbp+128h]
  int v120; // [rsp+22Ch] [rbp+12Ch]
  int v121; // [rsp+268h] [rbp+168h] BYREF

  v121 = a4;
  v34 = a6;
  v52 = &v121;
  v54 = a5;
  v35 = -1LL;
  v53 = 4LL;
  v55 = 16LL;
  if ( a6 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a6[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v57 = v37;
  v58 = 0;
  if ( !a6 )
    v34 = L"NULL";
  v38 = 5;
  v56 = v34;
  v39 = a7;
  if ( a7 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a7[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v60 = v41;
  v61 = 0;
  if ( !a7 )
    v39 = "NULL";
  v63 = 2LL;
  v59 = v39;
  v62 = &a8;
  v64 = &a9;
  v66 = &a10;
  v42 = a11;
  v65 = 4LL;
  v67 = 1LL;
  if ( a11 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a11[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v44 = 5;
  }
  v69 = v44;
  v70 = 0;
  if ( !a11 )
    v42 = "NULL";
  v68 = v42;
  v45 = a12;
  if ( a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a12[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v47 = 5;
  }
  v72 = v47;
  v73 = 0;
  if ( !a12 )
    v45 = "NULL";
  v71 = v45;
  v48 = a13;
  v49 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v35;
    while ( a13[v35] );
    v38 = v35 + 1;
    v49 = a13 == 0LL;
  }
  v77 = a14;
  if ( v49 )
    v48 = "NULL";
  v75 = v38;
  v79 = &a15;
  v76 = 0;
  v81 = &a16;
  v83 = &a17;
  v85 = &a18;
  v87 = &a19;
  v89 = &a20;
  v91 = &a21;
  v93 = &a22;
  v95 = &a23;
  v97 = &a24;
  v99 = &a25;
  v101 = &a26;
  v103 = &a27;
  v105 = &a28;
  v107 = &a29;
  v109 = &a30;
  v111 = &a31;
  v113 = a32;
  v114 = a31;
  v116 = &a33;
  v118 = a34;
  v119 = a33;
  v115 = 0;
  v120 = 0;
  v74 = v48;
  v78 = 16LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 2LL;
  v92 = 1LL;
  v94 = 2LL;
  v96 = 1LL;
  v98 = 1LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 4LL;
  v110 = 8LL;
  v112 = 4LL;
  v117 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v48, &EventNVMeNamespaceErrorDataSummary, 0LL, 0x20u, &v51);
}
