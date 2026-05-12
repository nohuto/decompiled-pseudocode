/*
 * XREFs of McTemplateK0qjzszhhssqqqqquuq_EtwWriteTransfer @ 0x14005DCF0
 * Callers:
 *     StorLogMFNDChildPFControl @ 0x14006E554 (StorLogMFNDChildPFControl.c)
 *     StorLogMFNDQueryMigrationQoS @ 0x1400CBF44 (StorLogMFNDQueryMigrationQoS.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1400CD2D4 (StorLogMFNDSetMigrationQoS.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqqquuq_EtwWriteTransfer(
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
        char a19,
        char a20)
{
  const wchar_t *v20; // rcx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rdx
  int v25; // edx
  int v26; // r8d
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const wchar_t *v30; // rcx
  bool v31; // zf
  __int64 v32; // rdx
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
  const wchar_t *v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  char *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  const char *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  const char *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  char *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
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
  int v79; // [rsp+198h] [rbp+98h] BYREF

  v79 = a4;
  v20 = a6;
  v40 = &v79;
  v42 = a5;
  v22 = -1LL;
  v41 = 4LL;
  v43 = 16LL;
  v23 = 10;
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
    v20 = L"NULL";
  v26 = 5;
  v44 = v20;
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
  v47 = v27;
  v30 = a8;
  v31 = a8 == 0LL;
  if ( a8 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a8[v32] );
    v23 = 2 * v32 + 2;
    v31 = a8 == 0LL;
  }
  if ( v31 )
    v30 = L"NULL";
  v51 = v23;
  v50 = v30;
  v53 = &a9;
  v55 = &a10;
  v33 = a11;
  v52 = 0;
  v54 = 2LL;
  v56 = 2LL;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v58 = v35;
  v59 = 0;
  if ( !a11 )
    v33 = "NULL";
  v57 = v33;
  v36 = a12;
  v37 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v22;
    while ( a12[v22] );
    v26 = v22 + 1;
    v37 = a12 == 0LL;
  }
  if ( v37 )
    v36 = "NULL";
  v61 = v26;
  v60 = v36;
  v63 = &a13;
  v62 = 0;
  v65 = &a14;
  v64 = 4LL;
  v67 = &a15;
  v66 = 4LL;
  v69 = &a16;
  v71 = &a17;
  v73 = &a18;
  v75 = &a19;
  v77 = &a20;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 1LL;
  v76 = 1LL;
  v78 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v36, a2, 0LL, 0x12u, &v39);
}
