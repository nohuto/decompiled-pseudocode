/*
 * XREFs of McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400B4738
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400C1A44 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer(
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
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        int a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // r8d
  const char *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const char *v34; // rcx
  __int64 v35; // rdx
  int v36; // edx
  const char *v37; // rcx
  __int64 v38; // rdx
  int v39; // edx
  const char *v40; // rcx
  bool v41; // zf
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+40h] [rbp-C0h] BYREF
  int *v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  const wchar_t *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+7Ch] [rbp-84h]
  const char *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
  char *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  char *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  const char *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  const char *v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+CCh] [rbp-34h]
  const char *v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  const char *v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  char *v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  char *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  __int64 *v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  char *v77; // [rsp+120h] [rbp+20h]
  __int64 v78; // [rsp+128h] [rbp+28h]
  int *v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  __int64 v81; // [rsp+140h] [rbp+40h]
  int v82; // [rsp+148h] [rbp+48h]
  int v83; // [rsp+14Ch] [rbp+4Ch]
  char *v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  char *v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  int *v88; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  __int64 v90; // [rsp+180h] [rbp+80h]
  int v91; // [rsp+188h] [rbp+88h]
  int v92; // [rsp+18Ch] [rbp+8Ch]
  int v93; // [rsp+1C8h] [rbp+C8h] BYREF

  v93 = a4;
  v23 = a6;
  v43 = *(_QWORD *)&g_SystemUptime_s;
  v45 = &v93;
  v47 = a5;
  v24 = -1LL;
  v46 = 4LL;
  v48 = 16LL;
  if ( a6 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a6[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v50 = v26;
  v51 = 0;
  if ( !a6 )
    v23 = L"NULL";
  v27 = 5;
  v49 = v23;
  v28 = a7;
  if ( a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a7[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v53 = v30;
  v54 = 0;
  if ( !a7 )
    v28 = "NULL";
  v56 = 2LL;
  v52 = v28;
  v55 = &a8;
  v57 = &a9;
  v31 = a10;
  v58 = 1LL;
  if ( a10 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a10[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v60 = v33;
  v61 = 0;
  if ( !a10 )
    v31 = "NULL";
  v59 = v31;
  v34 = a11;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v63 = v36;
  v64 = 0;
  if ( !a11 )
    v34 = "NULL";
  v62 = v34;
  v37 = a12;
  if ( a12 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a12[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v66 = v39;
  v67 = 0;
  if ( !a12 )
    v37 = "NULL";
  v65 = v37;
  v40 = a13;
  v41 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v24;
    while ( a13[v24] );
    v27 = v24 + 1;
    v41 = a13 == 0LL;
  }
  v69 = v27;
  v71 = &a14;
  if ( v41 )
    v40 = "NULL";
  v70 = 0;
  v83 = 0;
  v73 = &a15;
  v92 = 0;
  v75 = &v43;
  v68 = v40;
  v77 = &a17;
  v79 = &a18;
  v81 = a19;
  v82 = a18;
  v84 = &a20;
  v86 = &a21;
  v88 = &a22;
  v90 = a23;
  v91 = a22;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 8LL;
  v78 = 4LL;
  v80 = 4LL;
  v85 = 1LL;
  v87 = 2LL;
  v89 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v40, &EventNVMeControllerHealthLog, 0LL, 0x15u, &v44);
}
