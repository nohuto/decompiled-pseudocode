/*
 * XREFs of McTemplateK0quuujjzssszpxqq_EtwWriteTransfer @ 0x14008ECDC
 * Callers:
 *     RaidLockContiguousPhysicalPages @ 0x1400952B0 (RaidLockContiguousPhysicalPages.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszpxqq_EtwWriteTransfer(
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
        const wchar_t *a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rdx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ecx
  const char *v23; // rcx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rcx
  bool v31; // zf
  __int64 v32; // rdx
  const wchar_t *v33; // rcx
  bool v34; // zf
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-D0h] BYREF
  int *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char *v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  char *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  const wchar_t *v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  const char *v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+BCh] [rbp-44h]
  const char *v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  const char *v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  const wchar_t *v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
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
  v18 = a10;
  v37 = &v72;
  v38 = 4LL;
  v39 = &a5;
  v41 = &a6;
  v43 = &a7;
  v19 = 10;
  v45 = a8;
  v47 = a9;
  v20 = -1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 16LL;
  v48 = 16LL;
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
  v50 = v22;
  v23 = a11;
  if ( !a10 )
    v18 = L"NULL";
  v51 = 0;
  v49 = v18;
  v24 = 5;
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
  v53 = v26;
  v54 = 0;
  if ( !a11 )
    v23 = "NULL";
  v52 = v23;
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
  v56 = v29;
  v57 = 0;
  if ( !a12 )
    v27 = "NULL";
  v55 = v27;
  v30 = a13;
  v31 = a13 == 0LL;
  if ( a13 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a13[v32] );
    v24 = v32 + 1;
    v31 = a13 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  v59 = v24;
  v58 = v30;
  v33 = a14;
  v60 = 0;
  v34 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v20;
    while ( a14[v20] );
    v19 = 2 * v20 + 2;
    v34 = a14 == 0LL;
  }
  if ( v34 )
    v33 = L"NULL";
  v62 = v19;
  v61 = v33;
  v64 = &a15;
  v63 = 0;
  v66 = &a16;
  v65 = 8LL;
  v68 = &a17;
  v67 = 8LL;
  v70 = &a18;
  v69 = 4LL;
  v71 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v33, &EventNVMeLockPhysicalAddress, 0LL, 0x10u, &v36);
}
