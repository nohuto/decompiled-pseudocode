/*
 * XREFs of McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer @ 0x14005DF64
 * Callers:
 *     StorLogMFNDNSPageMapControl @ 0x14006E734 (StorLogMFNDNSPageMapControl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        char a19)
{
  const wchar_t *v19; // rcx
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rdx
  int v24; // edx
  int v25; // r8d
  const char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  const wchar_t *v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  const char *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const char *v35; // rcx
  bool v36; // zf
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  int *v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  const wchar_t *v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h]
  const char *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
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
  char *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  char *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  int v76; // [rsp+188h] [rbp+88h] BYREF

  v76 = a4;
  v19 = a6;
  v39 = &v76;
  v41 = a5;
  v21 = -1LL;
  v40 = 4LL;
  v42 = 16LL;
  v22 = 10;
  if ( a6 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a6[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v44 = v24;
  v45 = 0;
  if ( !a6 )
    v19 = L"NULL";
  v25 = 5;
  v43 = v19;
  v26 = a7;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v47 = v28;
  v48 = 0;
  if ( !a7 )
    v26 = "NULL";
  v46 = v26;
  v29 = a8;
  v30 = a8 == 0LL;
  if ( a8 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a8[v31] );
    v22 = 2 * v31 + 2;
    v30 = a8 == 0LL;
  }
  if ( v30 )
    v29 = L"NULL";
  v50 = v22;
  v49 = v29;
  v52 = &a9;
  v54 = &a10;
  v32 = a11;
  v51 = 0;
  v53 = 2LL;
  v55 = 2LL;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v57 = v34;
  v58 = 0;
  if ( !a11 )
    v32 = "NULL";
  v56 = v32;
  v35 = a12;
  v36 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v21;
    while ( a12[v21] );
    v25 = v21 + 1;
    v36 = a12 == 0LL;
  }
  if ( v36 )
    v35 = "NULL";
  v60 = v25;
  v59 = v35;
  v62 = &a13;
  v61 = 0;
  v64 = &a14;
  v63 = 4LL;
  v66 = &a15;
  v65 = 4LL;
  v68 = &a16;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 1LL;
  v73 = 1LL;
  v75 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v35, a2, 0LL, 0x11u, &v38);
}
