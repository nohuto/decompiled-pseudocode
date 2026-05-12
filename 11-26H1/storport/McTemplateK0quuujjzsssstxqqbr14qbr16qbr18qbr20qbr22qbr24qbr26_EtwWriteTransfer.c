/*
 * XREFs of McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer @ 0x1400B5978
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1400C1F84 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer(
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
        const char *a14,
        char a15,
        int a16,
        char a17,
        int a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        __int64 a29,
        int a30,
        __int64 a31)
{
  const wchar_t *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  int v35; // r8d
  const char *v36; // rcx
  __int64 v37; // rdx
  int v38; // edx
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const char *v42; // rcx
  __int64 v43; // rdx
  int v44; // edx
  const char *v45; // rcx
  bool v46; // zf
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+40h] [rbp-C0h] BYREF
  int *v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  char *v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  char *v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  char *v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  const wchar_t *v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+BCh] [rbp-44h]
  const char *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  const char *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  const char *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  const char *v74; // [rsp+F0h] [rbp-10h]
  int v75; // [rsp+F8h] [rbp-8h]
  int v76; // [rsp+FCh] [rbp-4h]
  char *v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 *v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  char *v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  int *v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  int v86; // [rsp+148h] [rbp+48h]
  int v87; // [rsp+14Ch] [rbp+4Ch]
  int *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  __int64 v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]
  int *v93; // [rsp+170h] [rbp+70h]
  __int64 v94; // [rsp+178h] [rbp+78h]
  __int64 v95; // [rsp+180h] [rbp+80h]
  int v96; // [rsp+188h] [rbp+88h]
  int v97; // [rsp+18Ch] [rbp+8Ch]
  int *v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  __int64 v100; // [rsp+1A0h] [rbp+A0h]
  int v101; // [rsp+1A8h] [rbp+A8h]
  int v102; // [rsp+1ACh] [rbp+ACh]
  int *v103; // [rsp+1B0h] [rbp+B0h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  __int64 v105; // [rsp+1C0h] [rbp+C0h]
  int v106; // [rsp+1C8h] [rbp+C8h]
  int v107; // [rsp+1CCh] [rbp+CCh]
  int *v108; // [rsp+1D0h] [rbp+D0h]
  __int64 v109; // [rsp+1D8h] [rbp+D8h]
  __int64 v110; // [rsp+1E0h] [rbp+E0h]
  int v111; // [rsp+1E8h] [rbp+E8h]
  int v112; // [rsp+1ECh] [rbp+ECh]
  int *v113; // [rsp+1F0h] [rbp+F0h]
  __int64 v114; // [rsp+1F8h] [rbp+F8h]
  __int64 v115; // [rsp+200h] [rbp+100h]
  int v116; // [rsp+208h] [rbp+108h]
  int v117; // [rsp+20Ch] [rbp+10Ch]
  int v118; // [rsp+248h] [rbp+148h] BYREF

  v118 = a4;
  v31 = a10;
  v48 = *(_QWORD *)&g_SystemUptime_s;
  v50 = &v118;
  v52 = &a5;
  v54 = &a6;
  v56 = &a7;
  v58 = a8;
  v60 = a9;
  v32 = -1LL;
  v51 = 4LL;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 16LL;
  v61 = 16LL;
  if ( a10 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a10[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v63 = v34;
  v64 = 0;
  if ( !a10 )
    v31 = L"NULL";
  v35 = 5;
  v62 = v31;
  v36 = a11;
  if ( a11 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a11[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v66 = v38;
  v67 = 0;
  if ( !a11 )
    v36 = "NULL";
  v65 = v36;
  v39 = a12;
  if ( a12 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a12[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v69 = v41;
  v70 = 0;
  if ( !a12 )
    v39 = "NULL";
  v68 = v39;
  v42 = a13;
  if ( a13 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a13[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v44 = 5;
  }
  v72 = v44;
  v73 = 0;
  if ( !a13 )
    v42 = "NULL";
  v71 = v42;
  v45 = a14;
  v46 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v32;
    while ( a14[v32] );
    v35 = v32 + 1;
    v46 = a14 == 0LL;
  }
  v75 = v35;
  v77 = &a15;
  v76 = 0;
  v79 = &v48;
  if ( v46 )
    v45 = "NULL";
  v87 = 0;
  v81 = &a17;
  v92 = 0;
  v83 = &a18;
  v85 = a19;
  v86 = a18;
  v88 = &a20;
  v90 = a21;
  v91 = a20;
  v93 = &a22;
  v95 = a23;
  v96 = a22;
  v98 = &a24;
  v100 = a25;
  v101 = a24;
  v103 = &a26;
  v105 = a27;
  v106 = a26;
  v108 = &a28;
  v110 = a29;
  v111 = a28;
  v113 = &a30;
  v115 = a31;
  v116 = a30;
  v97 = 0;
  v102 = 0;
  v107 = 0;
  v112 = 0;
  v117 = 0;
  v74 = v45;
  v78 = 4LL;
  v80 = 8LL;
  v82 = 4LL;
  v84 = 4LL;
  v89 = 4LL;
  v94 = 4LL;
  v99 = 4LL;
  v104 = 4LL;
  v109 = 4LL;
  v114 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v45, &EventUnitDeviceStatisticsLogs, 0LL, 0x1Du, &v49);
}
