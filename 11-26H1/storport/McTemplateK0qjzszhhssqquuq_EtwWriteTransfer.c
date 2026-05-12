/*
 * XREFs of McTemplateK0qjzszhhssqquuq_EtwWriteTransfer @ 0x1400C92B8
 * Callers:
 *     StorLogMFNDQueryNSPageMap @ 0x1400CC130 (StorLogMFNDQueryNSPageMap.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1400CC2E8 (StorLogMFNDQueryOperationInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqquuq_EtwWriteTransfer(
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
        char a17)
{
  const wchar_t *v17; // rcx
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rdx
  unsigned int v22; // edx
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
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+38h] [rbp-D0h] BYREF
  int *v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  const wchar_t *v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  const char *v43; // [rsp+78h] [rbp-90h]
  int v44; // [rsp+80h] [rbp-88h]
  int v45; // [rsp+84h] [rbp-84h]
  const wchar_t *v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+90h] [rbp-78h]
  int v48; // [rsp+94h] [rbp-74h]
  char *v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  char *v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  const char *v53; // [rsp+B8h] [rbp-50h]
  int v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C4h] [rbp-44h]
  const char *v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+D0h] [rbp-38h]
  int v58; // [rsp+D4h] [rbp-34h]
  char *v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  char *v61; // [rsp+E8h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-18h]
  char *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  char *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  char *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  int v69; // [rsp+160h] [rbp+58h] BYREF

  v69 = a4;
  v17 = a6;
  v37 = &v69;
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
  if ( !a6 )
    v17 = L"NULL";
  v23 = 5;
  v41 = v17;
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
  v44 = v26;
  v45 = 0;
  if ( !a7 )
    v24 = "NULL";
  v43 = v24;
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
  v47 = v20;
  v46 = v27;
  v49 = &a9;
  v51 = &a10;
  v30 = a11;
  v48 = 0;
  v50 = 2LL;
  v52 = 2LL;
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
  v54 = v32;
  v55 = 0;
  if ( !a11 )
    v30 = "NULL";
  v53 = v30;
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
  v57 = v23;
  v56 = v33;
  v59 = &a13;
  v58 = 0;
  v61 = &a14;
  v60 = 4LL;
  v63 = &a15;
  v62 = 4LL;
  v65 = &a16;
  v67 = &a17;
  v64 = 1LL;
  v66 = 1LL;
  v68 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v33, a2, 0LL, 0xFu, &v36);
}
