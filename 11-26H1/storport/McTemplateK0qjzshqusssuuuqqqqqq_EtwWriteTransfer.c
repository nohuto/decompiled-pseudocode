/*
 * XREFs of McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer @ 0x1401001F8
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x140102130 (NvmeNamespaceCompleteNvmRequest.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer(
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
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  int v26; // r8d
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rcx
  __int64 v31; // rdx
  int v32; // edx
  const char *v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  const char *v36; // rcx
  bool v37; // zf
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+30h] [rbp-D0h] BYREF
  int *v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  const wchar_t *v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  const char *v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  char *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  char *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  const char *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  char *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  char *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  char *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  char *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  char *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  char *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  char *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+1A8h] [rbp+A8h] BYREF

  v83 = a4;
  v22 = a6;
  v40 = &v83;
  v42 = a5;
  v23 = -1LL;
  v41 = 4LL;
  v43 = 16LL;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v45 = v25;
  v46 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v26 = 5;
  v44 = v22;
  v27 = a7;
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v48 = v29;
  v49 = 0;
  if ( !a7 )
    v27 = "NULL";
  v51 = 2LL;
  v47 = v27;
  v50 = &a8;
  v52 = &a9;
  v54 = &a10;
  v30 = a11;
  v53 = 4LL;
  v55 = 1LL;
  if ( a11 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a11[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v57 = v32;
  v58 = 0;
  if ( !a11 )
    v30 = "NULL";
  v56 = v30;
  v33 = a12;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v60 = v35;
  v61 = 0;
  if ( !a12 )
    v33 = "NULL";
  v59 = v33;
  v36 = a13;
  v37 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v23;
    while ( a13[v23] );
    v26 = v23 + 1;
    v37 = a13 == 0LL;
  }
  if ( v37 )
    v36 = "NULL";
  v63 = v26;
  v64 = 0;
  v65 = &a14;
  v62 = v36;
  v67 = &a15;
  v66 = 1LL;
  v69 = &a16;
  v68 = 1LL;
  v71 = &a17;
  v73 = &a18;
  v75 = &a19;
  v77 = &a20;
  v79 = &a21;
  v81 = &a22;
  v70 = 1LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v36, &EventNVMeNamespaceRequestFailure, 0LL, 0x14u, &v39);
}
