/*
 * XREFs of McTemplateK0qjzssshhdqsq_EtwWriteTransfer @ 0x1400E42F0
 * Callers:
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzssshhdqsq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        char a15)
{
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  const char *v20; // rcx
  __int64 v21; // rdx
  int v22; // edx
  const char *v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  const char *v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  const char *v29; // rcx
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  int *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  const wchar_t *v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  const char *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  const char *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  const char *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  char *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  char *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  char *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  const char *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+138h] [rbp+38h] BYREF

  v62 = a4;
  v15 = a6;
  v33 = &v62;
  v35 = a5;
  v16 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
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
  v38 = v18;
  v39 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v19 = 5;
  v37 = v15;
  v20 = a7;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v41 = v22;
  v42 = 0;
  if ( !a7 )
    v20 = "NULL";
  v40 = v20;
  v23 = a8;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v44 = v25;
  v26 = a9;
  if ( !a8 )
    v23 = "NULL";
  v45 = 0;
  v43 = v23;
  if ( a9 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a9[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v47 = v28;
  v48 = 0;
  v49 = &a10;
  if ( !a9 )
    v26 = "NULL";
  v46 = v26;
  v51 = &a11;
  v53 = &a12;
  v55 = &a13;
  v29 = a14;
  v50 = 2LL;
  v52 = 2LL;
  v54 = 4LL;
  v56 = 4LL;
  v30 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v16;
    while ( a14[v16] );
    v19 = v16 + 1;
    v30 = a14 == 0LL;
  }
  if ( v30 )
    v29 = "NULL";
  v58 = v19;
  v59 = 0;
  v60 = &a15;
  v57 = v29;
  v61 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v29, &EventNVMeoFCreateControllerQueueFailure, 0LL, 0xDu, &v32);
}
