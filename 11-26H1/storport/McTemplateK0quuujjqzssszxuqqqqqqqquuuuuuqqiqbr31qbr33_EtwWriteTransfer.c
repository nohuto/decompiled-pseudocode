/*
 * XREFs of McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer @ 0x1400B5520
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400C2424 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer(
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
        int a16,
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
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        int a35,
        __int64 a36,
        int a37,
        __int64 a38)
{
  int v38; // r8d
  const wchar_t *v39; // rcx
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // edx
  const char *v44; // rcx
  __int64 v45; // rdx
  int v46; // edx
  const char *v47; // rcx
  __int64 v48; // rdx
  int v49; // edx
  const char *v50; // rcx
  bool v51; // zf
  __int64 v52; // rdx
  const wchar_t *v53; // rcx
  bool v54; // zf
  __int64 v56; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+48h] [rbp-C0h] BYREF
  int *v59; // [rsp+58h] [rbp-B0h]
  __int64 v60; // [rsp+60h] [rbp-A8h]
  char *v61; // [rsp+68h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-98h]
  char *v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  char *v65; // [rsp+88h] [rbp-80h]
  __int64 v66; // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-68h]
  __int64 v69; // [rsp+A8h] [rbp-60h]
  __int64 v70; // [rsp+B0h] [rbp-58h]
  char *v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  const wchar_t *v73; // [rsp+C8h] [rbp-40h]
  int v74; // [rsp+D0h] [rbp-38h]
  int v75; // [rsp+D4h] [rbp-34h]
  const char *v76; // [rsp+D8h] [rbp-30h]
  int v77; // [rsp+E0h] [rbp-28h]
  int v78; // [rsp+E4h] [rbp-24h]
  const char *v79; // [rsp+E8h] [rbp-20h]
  int v80; // [rsp+F0h] [rbp-18h]
  int v81; // [rsp+F4h] [rbp-14h]
  const char *v82; // [rsp+F8h] [rbp-10h]
  int v83; // [rsp+100h] [rbp-8h]
  int v84; // [rsp+104h] [rbp-4h]
  const wchar_t *v85; // [rsp+108h] [rbp+0h]
  int v86; // [rsp+110h] [rbp+8h]
  int v87; // [rsp+114h] [rbp+Ch]
  __int64 *v88; // [rsp+118h] [rbp+10h]
  __int64 v89; // [rsp+120h] [rbp+18h]
  __int64 *v90; // [rsp+128h] [rbp+20h]
  __int64 v91; // [rsp+130h] [rbp+28h]
  char *v92; // [rsp+138h] [rbp+30h]
  __int64 v93; // [rsp+140h] [rbp+38h]
  char *v94; // [rsp+148h] [rbp+40h]
  __int64 v95; // [rsp+150h] [rbp+48h]
  char *v96; // [rsp+158h] [rbp+50h]
  __int64 v97; // [rsp+160h] [rbp+58h]
  char *v98; // [rsp+168h] [rbp+60h]
  __int64 v99; // [rsp+170h] [rbp+68h]
  char *v100; // [rsp+178h] [rbp+70h]
  __int64 v101; // [rsp+180h] [rbp+78h]
  char *v102; // [rsp+188h] [rbp+80h]
  __int64 v103; // [rsp+190h] [rbp+88h]
  char *v104; // [rsp+198h] [rbp+90h]
  __int64 v105; // [rsp+1A0h] [rbp+98h]
  char *v106; // [rsp+1A8h] [rbp+A0h]
  __int64 v107; // [rsp+1B0h] [rbp+A8h]
  char *v108; // [rsp+1B8h] [rbp+B0h]
  __int64 v109; // [rsp+1C0h] [rbp+B8h]
  char *v110; // [rsp+1C8h] [rbp+C0h]
  __int64 v111; // [rsp+1D0h] [rbp+C8h]
  char *v112; // [rsp+1D8h] [rbp+D0h]
  __int64 v113; // [rsp+1E0h] [rbp+D8h]
  char *v114; // [rsp+1E8h] [rbp+E0h]
  __int64 v115; // [rsp+1F0h] [rbp+E8h]
  char *v116; // [rsp+1F8h] [rbp+F0h]
  __int64 v117; // [rsp+200h] [rbp+F8h]
  char *v118; // [rsp+208h] [rbp+100h]
  __int64 v119; // [rsp+210h] [rbp+108h]
  char *v120; // [rsp+218h] [rbp+110h]
  __int64 v121; // [rsp+220h] [rbp+118h]
  char *v122; // [rsp+228h] [rbp+120h]
  __int64 v123; // [rsp+230h] [rbp+128h]
  char *v124; // [rsp+238h] [rbp+130h]
  __int64 v125; // [rsp+240h] [rbp+138h]
  int *v126; // [rsp+248h] [rbp+140h]
  __int64 v127; // [rsp+250h] [rbp+148h]
  __int64 v128; // [rsp+258h] [rbp+150h]
  int v129; // [rsp+260h] [rbp+158h]
  int v130; // [rsp+264h] [rbp+15Ch]
  int *v131; // [rsp+268h] [rbp+160h]
  __int64 v132; // [rsp+270h] [rbp+168h]
  __int64 v133; // [rsp+278h] [rbp+170h]
  int v134; // [rsp+280h] [rbp+178h]
  int v135; // [rsp+284h] [rbp+17Ch]
  int v136; // [rsp+2C0h] [rbp+1B8h] BYREF

  v136 = a4;
  v38 = 5;
  v39 = a11;
  v57 = *(_QWORD *)&g_SystemUptime_s;
  v59 = &v136;
  v61 = &a5;
  v40 = 10;
  LOBYTE(v56) = 5;
  v63 = &a6;
  v65 = &a7;
  v67 = a8;
  v69 = a9;
  v71 = &a10;
  v41 = -1LL;
  v60 = 4LL;
  v62 = 1LL;
  v64 = 1LL;
  v66 = 1LL;
  v68 = 16LL;
  v70 = 16LL;
  v72 = 4LL;
  if ( a11 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a11[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v43 = 10;
  }
  v74 = v43;
  v75 = 0;
  if ( !a11 )
    v39 = L"NULL";
  v73 = v39;
  v44 = a12;
  if ( a12 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a12[v45] );
    v46 = v45 + 1;
  }
  else
  {
    v46 = 5;
  }
  v77 = v46;
  v78 = 0;
  if ( !a12 )
    v44 = "NULL";
  v76 = v44;
  v47 = a13;
  if ( a13 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a13[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v49 = 5;
  }
  v80 = v49;
  v81 = 0;
  if ( !a13 )
    v47 = "NULL";
  v79 = v47;
  v50 = a14;
  v51 = a14 == 0LL;
  if ( a14 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a14[v52] );
    v38 = v52 + 1;
    v51 = a14 == 0LL;
  }
  if ( v51 )
    v50 = "NULL";
  v83 = v38;
  v82 = v50;
  v53 = a15;
  v84 = 0;
  v54 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v41;
    while ( a15[v41] );
    v40 = 2 * v41 + 2;
    v54 = a15 == 0LL;
  }
  v86 = v40;
  v88 = &v57;
  if ( v54 )
    v53 = L"NULL";
  v85 = v53;
  v90 = &v56;
  v87 = 0;
  v92 = &a18;
  v89 = 8LL;
  v94 = &a19;
  v96 = &a20;
  v98 = &a21;
  v100 = &a22;
  v102 = &a23;
  v104 = &a24;
  v106 = &a25;
  v108 = &a26;
  v110 = &a27;
  v112 = &a28;
  v114 = &a29;
  v116 = &a30;
  v118 = &a31;
  v120 = &a32;
  v122 = &a33;
  v124 = &a34;
  v126 = &a35;
  v128 = a36;
  v129 = a35;
  v131 = &a37;
  v133 = a38;
  v134 = a37;
  v91 = 1LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 1LL;
  v111 = 1LL;
  v113 = 1LL;
  v115 = 1LL;
  v117 = 1LL;
  v119 = 1LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 8LL;
  v127 = 4LL;
  v130 = 0;
  v132 = 4LL;
  v135 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v53, &EventUnitErrorDataSummary, 0LL, 0x24u, &v58);
}
