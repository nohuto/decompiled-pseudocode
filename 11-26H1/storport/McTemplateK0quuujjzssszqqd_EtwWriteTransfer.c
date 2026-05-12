/*
 * XREFs of McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x14008EF1C
 * Callers:
 *     RaidCaptureLiveDump @ 0x1400536B8 (RaidCaptureLiveDump.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
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
        char a17)
{
  const wchar_t *v17; // rdx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  const char *v22; // rcx
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // edx
  const char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  const char *v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  const wchar_t *v32; // rcx
  bool v33; // zf
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  int *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  char *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  char *v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  char *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  const wchar_t *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  const char *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  const char *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  const char *v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DCh] [rbp-24h]
  const wchar_t *v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  char *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  char *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  char *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+158h] [rbp+58h] BYREF

  v69 = a4;
  v17 = a10;
  v36 = &v69;
  v37 = 4LL;
  v38 = &a5;
  v40 = &a6;
  v42 = &a7;
  v18 = 10;
  v44 = a8;
  v46 = a9;
  v19 = -1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 16LL;
  v47 = 16LL;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v49 = v21;
  v22 = a11;
  if ( !a10 )
    v17 = L"NULL";
  v50 = 0;
  v48 = v17;
  v23 = 5;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v52 = v25;
  v53 = 0;
  if ( !a11 )
    v22 = "NULL";
  v51 = v22;
  v26 = a12;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v55 = v28;
  v56 = 0;
  if ( !a12 )
    v26 = "NULL";
  v54 = v26;
  v29 = a13;
  v30 = a13 == 0LL;
  if ( a13 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a13[v31] );
    v23 = v31 + 1;
    v30 = a13 == 0LL;
  }
  if ( v30 )
    v29 = "NULL";
  v58 = v23;
  v57 = v29;
  v32 = a14;
  v59 = 0;
  v33 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v19;
    while ( a14[v19] );
    v18 = 2 * v19 + 2;
    v33 = a14 == 0LL;
  }
  if ( v33 )
    v32 = L"NULL";
  v61 = v18;
  v60 = v32;
  v63 = &a15;
  v62 = 0;
  v65 = &a16;
  v64 = 4LL;
  v67 = &a17;
  v66 = 4LL;
  v68 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v32, &EventCaptureLiveDump, 0LL, 0xFu, &v35);
}
