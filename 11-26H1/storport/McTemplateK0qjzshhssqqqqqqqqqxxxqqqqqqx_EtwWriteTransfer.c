/*
 * XREFs of McTemplateK0qjzshhssqqqqqqqqqxxxqqqqqqx_EtwWriteTransfer @ 0x1400B2898
 * Callers:
 *     StorpTelemetrySendAdapterDlrmStatistics @ 0x1400BFFBC (StorpTelemetrySendAdapterDlrmStatistics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqqqqqqqqqxxxqqqqqqx_EtwWriteTransfer(
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
        char a28,
        char a29,
        char a30)
{
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // edx
  int v34; // r8d
  const char *v35; // rcx
  __int64 v36; // rdx
  int v37; // edx
  const char *v38; // rcx
  __int64 v39; // rdx
  int v40; // edx
  const char *v41; // rcx
  bool v42; // zf
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+30h] [rbp-D0h] BYREF
  int *v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  const wchar_t *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  const char *v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h]
  char *v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  char *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  const char *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  const char *v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+BCh] [rbp-44h]
  char *v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  char *v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  char *v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  char *v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  char *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  char *v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  char *v77; // [rsp+120h] [rbp+20h]
  __int64 v78; // [rsp+128h] [rbp+28h]
  char *v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  char *v81; // [rsp+140h] [rbp+40h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  char *v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  char *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  char *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  char *v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  char *v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  char *v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  char *v95; // [rsp+1B0h] [rbp+B0h]
  __int64 v96; // [rsp+1B8h] [rbp+B8h]
  char *v97; // [rsp+1C0h] [rbp+C0h]
  __int64 v98; // [rsp+1C8h] [rbp+C8h]
  char *v99; // [rsp+1D0h] [rbp+D0h]
  __int64 v100; // [rsp+1D8h] [rbp+D8h]
  char *v101; // [rsp+1E0h] [rbp+E0h]
  __int64 v102; // [rsp+1E8h] [rbp+E8h]
  int v103; // [rsp+228h] [rbp+128h] BYREF

  v103 = a4;
  v30 = a6;
  v45 = &v103;
  v47 = a5;
  v31 = -1LL;
  v46 = 4LL;
  v48 = 16LL;
  if ( a6 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a6[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v50 = v33;
  v51 = 0;
  if ( !a6 )
    v30 = L"NULL";
  v34 = 5;
  v49 = v30;
  v35 = a7;
  if ( a7 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a7[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v53 = v37;
  v54 = 0;
  if ( !a7 )
    v35 = "NULL";
  v56 = 2LL;
  v52 = v35;
  v55 = &a8;
  v57 = &a9;
  v38 = a10;
  v58 = 2LL;
  if ( a10 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a10[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v60 = v40;
  v61 = 0;
  if ( !a10 )
    v38 = "NULL";
  v59 = v38;
  v41 = a11;
  v42 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v31;
    while ( a11[v31] );
    v34 = v31 + 1;
    v42 = a11 == 0LL;
  }
  v63 = v34;
  v65 = &a12;
  v64 = 0;
  v67 = &a13;
  if ( v42 )
    v41 = "NULL";
  v62 = v41;
  v69 = &a14;
  v66 = 4LL;
  v71 = &a15;
  v68 = 4LL;
  v73 = &a16;
  v75 = &a17;
  v77 = &a18;
  v79 = &a19;
  v81 = &a20;
  v83 = &a21;
  v85 = &a22;
  v87 = &a23;
  v89 = &a24;
  v91 = &a25;
  v93 = &a26;
  v95 = &a27;
  v97 = &a28;
  v99 = &a29;
  v101 = &a30;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 8LL;
  v86 = 8LL;
  v88 = 8LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v41, &EventDLRMStatistics, 0LL, 0x1Cu, &v44);
}
