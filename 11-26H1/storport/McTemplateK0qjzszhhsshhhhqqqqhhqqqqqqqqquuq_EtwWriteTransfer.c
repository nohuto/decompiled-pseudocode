/*
 * XREFs of McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C7EB4
 * Callers:
 *     StorLogMFNDQueryChildPFSettings @ 0x1400CBC04 (StorLogMFNDQueryChildPFSettings.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer(
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
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rdx
  unsigned int v38; // edx
  int v39; // r8d
  const char *v40; // rcx
  __int64 v41; // rdx
  int v42; // edx
  const wchar_t *v43; // rcx
  bool v44; // zf
  __int64 v45; // rdx
  const char *v46; // rcx
  __int64 v47; // rdx
  int v48; // edx
  const char *v49; // rcx
  bool v50; // zf
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+38h] [rbp-D0h] BYREF
  int *v53; // [rsp+48h] [rbp-C0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  const wchar_t *v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h]
  const char *v59; // [rsp+78h] [rbp-90h]
  int v60; // [rsp+80h] [rbp-88h]
  int v61; // [rsp+84h] [rbp-84h]
  const wchar_t *v62; // [rsp+88h] [rbp-80h]
  int v63; // [rsp+90h] [rbp-78h]
  int v64; // [rsp+94h] [rbp-74h]
  char *v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-68h]
  char *v67; // [rsp+A8h] [rbp-60h]
  __int64 v68; // [rsp+B0h] [rbp-58h]
  const char *v69; // [rsp+B8h] [rbp-50h]
  int v70; // [rsp+C0h] [rbp-48h]
  int v71; // [rsp+C4h] [rbp-44h]
  const char *v72; // [rsp+C8h] [rbp-40h]
  int v73; // [rsp+D0h] [rbp-38h]
  int v74; // [rsp+D4h] [rbp-34h]
  char *v75; // [rsp+D8h] [rbp-30h]
  __int64 v76; // [rsp+E0h] [rbp-28h]
  char *v77; // [rsp+E8h] [rbp-20h]
  __int64 v78; // [rsp+F0h] [rbp-18h]
  char *v79; // [rsp+F8h] [rbp-10h]
  __int64 v80; // [rsp+100h] [rbp-8h]
  char *v81; // [rsp+108h] [rbp+0h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  char *v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  char *v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  char *v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  char *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  char *v91; // [rsp+158h] [rbp+50h]
  __int64 v92; // [rsp+160h] [rbp+58h]
  char *v93; // [rsp+168h] [rbp+60h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  char *v95; // [rsp+178h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+78h]
  char *v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+190h] [rbp+88h]
  char *v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+98h]
  char *v101; // [rsp+1A8h] [rbp+A0h]
  __int64 v102; // [rsp+1B0h] [rbp+A8h]
  char *v103; // [rsp+1B8h] [rbp+B0h]
  __int64 v104; // [rsp+1C0h] [rbp+B8h]
  char *v105; // [rsp+1C8h] [rbp+C0h]
  __int64 v106; // [rsp+1D0h] [rbp+C8h]
  char *v107; // [rsp+1D8h] [rbp+D0h]
  __int64 v108; // [rsp+1E0h] [rbp+D8h]
  char *v109; // [rsp+1E8h] [rbp+E0h]
  __int64 v110; // [rsp+1F0h] [rbp+E8h]
  char *v111; // [rsp+1F8h] [rbp+F0h]
  __int64 v112; // [rsp+200h] [rbp+F8h]
  char *v113; // [rsp+208h] [rbp+100h]
  __int64 v114; // [rsp+210h] [rbp+108h]
  char *v115; // [rsp+218h] [rbp+110h]
  __int64 v116; // [rsp+220h] [rbp+118h]
  char *v117; // [rsp+228h] [rbp+120h]
  __int64 v118; // [rsp+230h] [rbp+128h]
  int v119; // [rsp+270h] [rbp+168h] BYREF

  v119 = a4;
  v34 = a6;
  v53 = &v119;
  v55 = a5;
  v35 = -1LL;
  v54 = 4LL;
  v56 = 16LL;
  v36 = 10;
  if ( a6 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a6[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v38 = 10;
  }
  v58 = v38;
  if ( !a6 )
    v34 = L"NULL";
  v39 = 5;
  v57 = v34;
  v40 = a7;
  if ( a7 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a7[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v42 = 5;
  }
  v60 = v42;
  v61 = 0;
  if ( !a7 )
    v40 = "NULL";
  v59 = v40;
  v43 = a8;
  v44 = a8 == 0LL;
  if ( a8 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a8[v45] );
    v36 = 2 * v45 + 2;
    v44 = a8 == 0LL;
  }
  if ( v44 )
    v43 = L"NULL";
  v63 = v36;
  v62 = v43;
  v65 = &a9;
  v67 = &a10;
  v46 = a11;
  v64 = 0;
  v66 = 2LL;
  v68 = 2LL;
  if ( a11 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a11[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v48 = 5;
  }
  v70 = v48;
  v71 = 0;
  if ( !a11 )
    v46 = "NULL";
  v69 = v46;
  v49 = a12;
  v50 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v35;
    while ( a12[v35] );
    v39 = v35 + 1;
    v50 = a12 == 0LL;
  }
  v73 = v39;
  v75 = &a13;
  v74 = 0;
  v77 = &a14;
  if ( v50 )
    v49 = "NULL";
  v72 = v49;
  v79 = &a15;
  v76 = 2LL;
  v81 = &a16;
  v78 = 2LL;
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
  v113 = &a32;
  v115 = &a33;
  v117 = &a34;
  v80 = 2LL;
  v82 = 2LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 2LL;
  v94 = 2LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 4LL;
  v110 = 4LL;
  v112 = 4LL;
  v114 = 1LL;
  v116 = 1LL;
  v118 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v49, &EventMFNDQueryChildPFSettings, 0LL, 0x20u, &v52);
}
