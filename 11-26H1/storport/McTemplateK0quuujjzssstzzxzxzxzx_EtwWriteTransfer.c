/*
 * XREFs of McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1400B64F4
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x140057FB8 (StorpInitializeUnitTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x14018FFC0 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
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
        char a14,
        const wchar_t *a15,
        __int64 a16,
        char a17)
{
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  const char *v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // edx
  const char *v25; // rcx
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rcx
  bool v29; // zf
  __int64 v30; // rdx
  const wchar_t *v31; // rcx
  int v32; // eax
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+50h] [rbp-B0h] BYREF
  int *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const wchar_t *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  const char *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  const char *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  const char *v59; // [rsp+F0h] [rbp-10h]
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  const wchar_t *v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  const wchar_t *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int64 *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  const wchar_t *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  __int64 *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  const wchar_t *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  __int64 *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int v83; // [rsp+1D8h] [rbp+D8h] BYREF

  v83 = a4;
  v17 = a10;
  v38 = &v83;
  v36 = 0LL;
  v40 = &a5;
  v42 = &a6;
  v44 = &a7;
  v46 = a8;
  v48 = a9;
  v18 = -1LL;
  v35 = 0LL;
  v34 = 0LL;
  v39 = 4LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  v49 = 16LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v51 = v20;
  v21 = a11;
  if ( !a10 )
    v17 = L"NULL";
  v52 = 0;
  v50 = v17;
  v22 = 5;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v54 = v24;
  v55 = 0;
  if ( !a11 )
    v21 = "NULL";
  v53 = v21;
  v25 = a12;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v57 = v27;
  v58 = 0;
  if ( !a12 )
    v25 = "NULL";
  v56 = v25;
  v28 = a13;
  v29 = a13 == 0LL;
  if ( a13 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a13[v30] );
    v22 = v30 + 1;
    v29 = a13 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v60 = v22;
  v59 = v28;
  v62 = &a14;
  v31 = a15;
  v61 = 0;
  v63 = 4LL;
  if ( a15 )
  {
    do
      ++v18;
    while ( a15[v18] );
    v32 = 2 * v18 + 2;
  }
  else
  {
    v32 = 10;
  }
  v65 = v32;
  v66 = 0;
  v67 = L"NtStatus";
  v68 = 18LL;
  v69 = &a17;
  if ( !a15 )
    v31 = L"NULL";
  v64 = v31;
  v73 = &v34;
  v70 = 8LL;
  v77 = &v35;
  v71 = L"NULL";
  v81 = &v36;
  v72 = 10LL;
  v74 = 8LL;
  v75 = L"NULL";
  v76 = 10LL;
  v78 = 8LL;
  v79 = L"NULL";
  v80 = 10LL;
  v82 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v31, &DeviceWarning, 0LL, 0x15u, &v37);
}
