/*
 * XREFs of McTemplateK0qjzsqhhsstttttqqqxx_EtwWriteTransfer @ 0x14012DB88
 * Callers:
 *     StorLogDLRMInitialization @ 0x14012E6A0 (StorLogDLRMInitialization.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzsqhhsstttttqqqxx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rcx
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
  bool v31; // zf
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+50h] [rbp-B0h] BYREF
  int *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  const wchar_t *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  const char *v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  char *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  char *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  char *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  const char *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  const char *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  int *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  int *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  __int64 *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  __int64 *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+1C8h] [rbp+C8h] BYREF

  v80 = a4;
  v18 = a6;
  v36 = g_DlrmScaleDownTimeWindow100ns;
  v35 = g_DlrmScaleUpTimeWindow100ns;
  v34 = g_DlrmScaleDownThresholdFactorPercent;
  v33 = g_DlrmScaleUpThresholdFactorPercent;
  v38 = &v80;
  v40 = a5;
  v20 = -1LL;
  v39 = 4LL;
  v41 = 16LL;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v43 = v22;
  v44 = 0;
  if ( !a6 )
    v18 = L"NULL";
  v23 = 5;
  v42 = v18;
  v24 = a7;
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v46 = v26;
  v47 = 0;
  if ( !a7 )
    v24 = "NULL";
  v49 = 4LL;
  v45 = v24;
  v48 = &a8;
  v50 = &a9;
  v52 = &a10;
  v27 = a11;
  v51 = 2LL;
  v53 = 2LL;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v55 = v29;
  v56 = 0;
  if ( !a11 )
    v27 = "NULL";
  v54 = v27;
  v30 = a12;
  v31 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v20;
    while ( a12[v20] );
    v23 = v20 + 1;
    v31 = a12 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  v58 = v23;
  v59 = 0;
  v60 = &a13;
  v57 = v30;
  v62 = &a14;
  v61 = 4LL;
  v64 = &a15;
  v63 = 4LL;
  v66 = &a16;
  v68 = &a17;
  v70 = &a18;
  v72 = &v33;
  v74 = &v34;
  v76 = &v35;
  v78 = &v36;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 8LL;
  v79 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v30, a2, 0LL, 0x14u, &v37);
}
