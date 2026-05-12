/*
 * XREFs of McTemplateK0qjzszhhssqqbr10uuq_EtwWriteTransfer @ 0x1400C8DF0
 * Callers:
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1400CB654 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1400CC998 (StorLogMFNDSetChildPFCommandPermission.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqbr10uuq_EtwWriteTransfer(
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
        int a14,
        __int64 a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rcx
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // rdx
  unsigned int v23; // edx
  int v24; // r8d
  const char *v25; // rcx
  __int64 v26; // rdx
  int v27; // edx
  const wchar_t *v28; // rcx
  bool v29; // zf
  __int64 v30; // rdx
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const char *v34; // rcx
  bool v35; // zf
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+38h] [rbp-D0h] BYREF
  int *v38; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  const wchar_t *v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  const char *v44; // [rsp+78h] [rbp-90h]
  int v45; // [rsp+80h] [rbp-88h]
  int v46; // [rsp+84h] [rbp-84h]
  const wchar_t *v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h]
  int v49; // [rsp+94h] [rbp-74h]
  char *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  char *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  const char *v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  const char *v57; // [rsp+C8h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D4h] [rbp-34h]
  char *v60; // [rsp+D8h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-28h]
  int *v62; // [rsp+E8h] [rbp-20h]
  __int64 v63; // [rsp+F0h] [rbp-18h]
  __int64 v64; // [rsp+F8h] [rbp-10h]
  int v65; // [rsp+100h] [rbp-8h]
  int v66; // [rsp+104h] [rbp-4h]
  char *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  char *v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  int v73; // [rsp+170h] [rbp+68h] BYREF

  v73 = a4;
  v18 = a6;
  v38 = &v73;
  v40 = a5;
  v20 = -1LL;
  v39 = 4LL;
  v41 = 16LL;
  v21 = 10;
  if ( a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a6[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v43 = v23;
  if ( !a6 )
    v18 = L"NULL";
  v24 = 5;
  v42 = v18;
  v25 = a7;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v45 = v27;
  v46 = 0;
  if ( !a7 )
    v25 = "NULL";
  v44 = v25;
  v28 = a8;
  v29 = a8 == 0LL;
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
    v21 = 2 * v30 + 2;
    v29 = a8 == 0LL;
  }
  if ( v29 )
    v28 = L"NULL";
  v48 = v21;
  v47 = v28;
  v50 = &a9;
  v52 = &a10;
  v31 = a11;
  v49 = 0;
  v51 = 2LL;
  v53 = 2LL;
  if ( a11 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a11[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v55 = v33;
  v56 = 0;
  if ( !a11 )
    v31 = "NULL";
  v54 = v31;
  v34 = a12;
  v35 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v20;
    while ( a12[v20] );
    v24 = v20 + 1;
    v35 = a12 == 0LL;
  }
  if ( v35 )
    v34 = "NULL";
  v58 = v24;
  v57 = v34;
  v60 = &a13;
  v59 = 0;
  v62 = &a14;
  v64 = a15;
  v65 = a14;
  v67 = &a16;
  v69 = &a17;
  v71 = &a18;
  v61 = 4LL;
  v63 = 4LL;
  v66 = 0;
  v68 = 1LL;
  v70 = 1LL;
  v72 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v34, a2, 0LL, 0x10u, &v37);
}
