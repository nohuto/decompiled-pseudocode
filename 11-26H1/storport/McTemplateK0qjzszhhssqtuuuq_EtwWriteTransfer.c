/*
 * XREFs of McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer @ 0x1400C94E8
 * Callers:
 *     StorLogMFNDSetOperationInfo @ 0x1400CD4C0 (StorLogMFNDSetOperationInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        char a18)
{
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rdx
  int v22; // edx
  int v23; // r8d
  const char *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  const wchar_t *v27; // rcx
  bool v28; // zf
  __int64 v29; // rdx
  const char *v30; // rcx
  __int64 v31; // rdx
  int v32; // edx
  const char *v33; // rcx
  bool v34; // zf
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-D0h] BYREF
  int *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  const wchar_t *v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  const char *v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+8Ch] [rbp-74h]
  char *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  char *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  const char *v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  const char *v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+CCh] [rbp-34h]
  char *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  char *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  char *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  char *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  char *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  char *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  int v72; // [rsp+168h] [rbp+68h] BYREF

  v72 = a4;
  v18 = a6;
  v37 = &v72;
  v39 = a5;
  v19 = -1LL;
  v38 = 4LL;
  v40 = 16LL;
  v20 = 10;
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
  v42 = v22;
  v43 = 0;
  if ( !a6 )
    v18 = L"NULL";
  v23 = 5;
  v41 = v18;
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
  v45 = v26;
  v46 = 0;
  if ( !a7 )
    v24 = "NULL";
  v44 = v24;
  v27 = a8;
  v28 = a8 == 0LL;
  if ( a8 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a8[v29] );
    v20 = 2 * v29 + 2;
    v28 = a8 == 0LL;
  }
  if ( v28 )
    v27 = L"NULL";
  v48 = v20;
  v47 = v27;
  v50 = &a9;
  v52 = &a10;
  v30 = a11;
  v49 = 0;
  v51 = 2LL;
  v53 = 2LL;
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
  v55 = v32;
  v56 = 0;
  if ( !a11 )
    v30 = "NULL";
  v54 = v30;
  v33 = a12;
  v34 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v19;
    while ( a12[v19] );
    v23 = v19 + 1;
    v34 = a12 == 0LL;
  }
  if ( v34 )
    v33 = "NULL";
  v58 = v23;
  v57 = v33;
  v60 = &a13;
  v59 = 0;
  v62 = &a14;
  v61 = 4LL;
  v64 = &a15;
  v63 = 4LL;
  v66 = &a16;
  v68 = &a17;
  v70 = &a18;
  v65 = 1LL;
  v67 = 1LL;
  v69 = 1LL;
  v71 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v33, &EventMFNDSetOperationInformation, 0LL, 0x10u, &v36);
}
