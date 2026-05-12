/*
 * XREFs of McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer @ 0x1400B2BC8
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceUniqueErrorData @ 0x1400BFE24 (StorpTelemetryNvmeSendNamespaceUniqueErrorData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer(
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
        char a28)
{
  const wchar_t *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // edx
  int v32; // r8d
  const char *v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  const char *v36; // rcx
  __int64 v37; // rdx
  int v38; // edx
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const char *v42; // rcx
  bool v43; // zf
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  int *v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h]
  const wchar_t *v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  const char *v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+7Ch] [rbp-84h]
  char *v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  char *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  char *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  const char *v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+BCh] [rbp-44h]
  const char *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  const char *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  char *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  char *v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  char *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  char *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  char *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  char *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  char *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  char *v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  char *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  char *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  char *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  char *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  char *v97; // [rsp+1B0h] [rbp+B0h]
  __int64 v98; // [rsp+1B8h] [rbp+B8h]
  char *v99; // [rsp+1C0h] [rbp+C0h]
  __int64 v100; // [rsp+1C8h] [rbp+C8h]
  int v101; // [rsp+208h] [rbp+108h] BYREF

  v101 = a4;
  v28 = a6;
  v46 = &v101;
  v48 = a5;
  v29 = -1LL;
  v47 = 4LL;
  v49 = 16LL;
  if ( a6 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a6[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v51 = v31;
  v52 = 0;
  if ( !a6 )
    v28 = L"NULL";
  v32 = 5;
  v50 = v28;
  v33 = a7;
  if ( a7 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a7[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v54 = v35;
  v55 = 0;
  if ( !a7 )
    v33 = "NULL";
  v57 = 2LL;
  v53 = v33;
  v56 = &a8;
  v58 = &a9;
  v60 = &a10;
  v36 = a11;
  v59 = 4LL;
  v61 = 1LL;
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
  v63 = v38;
  v64 = 0;
  if ( !a11 )
    v36 = "NULL";
  v62 = v36;
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
  v66 = v41;
  v67 = 0;
  if ( !a12 )
    v39 = "NULL";
  v65 = v39;
  v42 = a13;
  v43 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v29;
    while ( a13[v29] );
    v32 = v29 + 1;
    v43 = a13 == 0LL;
  }
  v71 = a14;
  if ( v43 )
    v42 = "NULL";
  v69 = v32;
  v73 = &a15;
  v70 = 0;
  v75 = &a16;
  v68 = v42;
  v77 = &a17;
  v79 = &a18;
  v81 = &a19;
  v83 = &a20;
  v85 = &a21;
  v87 = &a22;
  v89 = &a23;
  v91 = &a24;
  v93 = &a25;
  v95 = &a26;
  v97 = &a27;
  v99 = &a28;
  v72 = 16LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 2LL;
  v82 = 1LL;
  v84 = 2LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v42, &EventNVMeNamespaceUniqueErrorData, 0LL, 0x1Au, &v45);
}
