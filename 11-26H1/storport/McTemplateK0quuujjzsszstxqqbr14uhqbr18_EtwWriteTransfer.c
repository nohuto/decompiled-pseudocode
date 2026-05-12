/*
 * XREFs of McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400B6A14
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x140046910 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400C071C (StorpTelemetrySendAdapterNvmeHealthInfo.c)
 *     StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400CA390 (StorGetAndLogNVMeSmartHealthInfoWorkRoutine.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
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
        const wchar_t *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // r8d
  const char *v29; // rcx
  __int64 v30; // rdx
  int v31; // edx
  const char *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const wchar_t *v35; // rcx
  bool v36; // zf
  __int64 v37; // rdx
  const char *v38; // rcx
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+38h] [rbp-D0h] BYREF
  int *v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  char *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  char *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  char *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  const wchar_t *v54; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+B0h] [rbp-58h]
  int v56; // [rsp+B4h] [rbp-54h]
  const char *v57; // [rsp+B8h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C4h] [rbp-44h]
  const char *v60; // [rsp+C8h] [rbp-40h]
  int v61; // [rsp+D0h] [rbp-38h]
  int v62; // [rsp+D4h] [rbp-34h]
  const wchar_t *v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E4h] [rbp-24h]
  const char *v66; // [rsp+E8h] [rbp-20h]
  int v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F4h] [rbp-14h]
  char *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h]
  char *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  char *v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  int *v75; // [rsp+128h] [rbp+20h]
  __int64 v76; // [rsp+130h] [rbp+28h]
  __int64 v77; // [rsp+138h] [rbp+30h]
  int v78; // [rsp+140h] [rbp+38h]
  int v79; // [rsp+144h] [rbp+3Ch]
  char *v80; // [rsp+148h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  char *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  int *v84; // [rsp+168h] [rbp+60h]
  __int64 v85; // [rsp+170h] [rbp+68h]
  __int64 v86; // [rsp+178h] [rbp+70h]
  int v87; // [rsp+180h] [rbp+78h]
  int v88; // [rsp+184h] [rbp+7Ch]
  int v89; // [rsp+1C0h] [rbp+B8h] BYREF

  v89 = a4;
  v23 = a10;
  v42 = &v89;
  v43 = 4LL;
  v44 = &a5;
  v46 = &a6;
  v48 = &a7;
  v24 = 10;
  v50 = a8;
  v52 = a9;
  v25 = -1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 16LL;
  v53 = 16LL;
  if ( a10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a10[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v55 = v27;
  v56 = 0;
  if ( !a10 )
    v23 = L"NULL";
  v28 = 5;
  v54 = v23;
  v29 = a11;
  if ( a11 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a11[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v58 = v31;
  v59 = 0;
  if ( !a11 )
    v29 = "NULL";
  v57 = v29;
  v32 = a12;
  if ( a12 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a12[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v61 = v34;
  v62 = 0;
  if ( !a12 )
    v32 = "NULL";
  v60 = v32;
  v35 = a13;
  v36 = a13 == 0LL;
  if ( a13 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a13[v37] );
    v24 = 2 * v37 + 2;
    v36 = a13 == 0LL;
  }
  if ( v36 )
    v35 = L"NULL";
  v64 = v24;
  v63 = v35;
  v38 = a14;
  v65 = 0;
  v39 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v25;
    while ( a14[v25] );
    v28 = v25 + 1;
    v39 = a14 == 0LL;
  }
  if ( v39 )
    v38 = "NULL";
  v67 = v28;
  v66 = v38;
  v69 = &a15;
  v68 = 0;
  v71 = &a16;
  v70 = 4LL;
  v73 = &a17;
  v72 = 8LL;
  v75 = &a18;
  v77 = a19;
  v78 = a18;
  v80 = &a20;
  v82 = &a21;
  v84 = &a22;
  v86 = a23;
  v87 = a22;
  v74 = 4LL;
  v76 = 4LL;
  v79 = 0;
  v81 = 1LL;
  v83 = 2LL;
  v85 = 4LL;
  v88 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v38, &EventUnitNvmeHealthLog, 0LL, 0x15u, &v41);
}
