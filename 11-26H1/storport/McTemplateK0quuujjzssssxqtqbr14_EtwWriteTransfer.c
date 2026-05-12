/*
 * XREFs of McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer @ 0x1400B5D1C
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1400C3948 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer(
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
        int a15,
        char a16,
        char a17,
        int a18,
        __int64 a19)
{
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  int v23; // r8d
  const char *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rcx
  __int64 v31; // rdx
  int v32; // edx
  const char *v33; // rcx
  bool v34; // zf
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+40h] [rbp-C0h] BYREF
  int *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char *v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  char *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  char *v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  const wchar_t *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  const char *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  const char *v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DCh] [rbp-24h]
  const char *v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  const char *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  __int64 *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  char *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  char *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  int *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  __int64 v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+188h] [rbp+88h] BYREF

  v76 = a4;
  v19 = a10;
  v37 = *(_QWORD *)&g_SystemUptime_s;
  v39 = &v76;
  v41 = &a5;
  v43 = &a6;
  v45 = &a7;
  v47 = a8;
  v49 = a9;
  v20 = -1LL;
  v36 = 512;
  v40 = 4LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 16LL;
  v50 = 16LL;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v52 = v22;
  v53 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v23 = 5;
  v51 = v19;
  v24 = a11;
  if ( a11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v55 = v26;
  v56 = 0;
  if ( !a11 )
    v24 = "NULL";
  v54 = v24;
  v27 = a12;
  if ( a12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a12[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v58 = v29;
  v59 = 0;
  if ( !a12 )
    v27 = "NULL";
  v57 = v27;
  v30 = a13;
  if ( a13 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a13[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v61 = v32;
  v62 = 0;
  if ( !a13 )
    v30 = "NULL";
  v60 = v30;
  v33 = a14;
  v34 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v20;
    while ( a14[v20] );
    v23 = v20 + 1;
    v34 = a14 == 0LL;
  }
  if ( v34 )
    v33 = "NULL";
  v64 = v23;
  v65 = 0;
  v66 = &v37;
  v63 = v33;
  v68 = &a16;
  v67 = 8LL;
  v70 = &a17;
  v69 = 4LL;
  v72 = &v36;
  v74 = a19;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 512LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v33, &EventUnitSmartAttributes, 0LL, 0x11u, &v38);
}
