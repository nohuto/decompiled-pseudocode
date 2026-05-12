/*
 * XREFs of McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer @ 0x1400E3440
 * Callers:
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15,
        const char *a16,
        char a17)
{
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  const char *v21; // rdx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // ecx
  const char *v25; // rcx
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rcx
  bool v29; // zf
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-D0h] BYREF
  int *v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  const wchar_t *v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  char *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  char *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  char *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  const char *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  const char *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  const char *v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+108h] [rbp+8h]
  int v61; // [rsp+10Ch] [rbp+Ch]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int v64; // [rsp+158h] [rbp+58h] BYREF

  v64 = a4;
  v17 = a6;
  v32 = &v64;
  v34 = a5;
  v18 = -1LL;
  v33 = 4LL;
  v35 = 16LL;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v37 = v20;
  v38 = 0;
  v40 = 8LL;
  v39 = &a7;
  if ( !a6 )
    v17 = L"NULL";
  v36 = v17;
  v21 = a14;
  v22 = 5;
  v41 = &a8;
  v43 = &a9;
  v45 = &a10;
  v47 = &a11;
  v49 = &a12;
  v51 = &a13;
  v42 = 4LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 2LL;
  v52 = 2LL;
  if ( a14 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a14[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v54 = v24;
  v25 = a15;
  if ( !a14 )
    v21 = "NULL";
  v55 = 0;
  v53 = v21;
  if ( a15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a15[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v57 = v27;
  v58 = 0;
  if ( !a15 )
    v25 = "NULL";
  v56 = v25;
  v28 = a16;
  v29 = a16 == 0LL;
  if ( a16 )
  {
    do
      ++v18;
    while ( a16[v18] );
    v22 = v18 + 1;
    v29 = a16 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v60 = v22;
  v61 = 0;
  v62 = &a17;
  v59 = v28;
  v63 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v28, &EventNVMeoFProcessDiscoveryEntryFailure, 0LL, 0xFu, &v31);
}
