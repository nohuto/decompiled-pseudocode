/*
 * XREFs of McTemplateK0qjzpduuuhhss_EtwWriteTransfer @ 0x1400E3298
 * Callers:
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzpduuuhhss_EtwWriteTransfer(
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
        const char *a15)
{
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  const char *v19; // rdx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // ecx
  const char *v23; // rcx
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  int *v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  const wchar_t *v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  char *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  char *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  char *v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  char *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  char *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  const char *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  const char *v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FCh] [rbp-4h]
  int v54; // [rsp+138h] [rbp+38h] BYREF

  v54 = a4;
  v15 = a6;
  v27 = &v54;
  v29 = a5;
  v16 = -1LL;
  v28 = 4LL;
  v30 = 16LL;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v32 = v18;
  v33 = 0;
  v35 = 8LL;
  v34 = &a7;
  if ( !a6 )
    v15 = L"NULL";
  v31 = v15;
  v19 = a14;
  v20 = 5;
  v36 = &a8;
  v38 = &a9;
  v40 = &a10;
  v42 = &a11;
  v44 = &a12;
  v46 = &a13;
  v37 = 4LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 2LL;
  v47 = 2LL;
  if ( a14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a14[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v49 = v22;
  v23 = a15;
  if ( !a14 )
    v19 = "NULL";
  v50 = 0;
  v48 = v19;
  v24 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v16;
    while ( a15[v16] );
    v20 = v16 + 1;
    v24 = a15 == 0LL;
  }
  if ( v24 )
    v23 = "NULL";
  v52 = v20;
  v53 = 0;
  v51 = v23;
  return McGenEventWrite_EtwWriteTransfer((__int64)v23, &EventNVMeoFAddDiscoveryEntryFailure, 0LL, 0xDu, &v26);
}
