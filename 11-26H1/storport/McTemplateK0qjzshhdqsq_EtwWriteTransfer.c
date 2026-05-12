/*
 * XREFs of McTemplateK0qjzshhdqsq_EtwWriteTransfer @ 0x1400E39C4
 * Callers:
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhdqsq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        const char *a12,
        char a13)
{
  const wchar_t *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  const char *v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // ecx
  const char *v22; // rcx
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B1h] BYREF
  int *v26; // [rsp+40h] [rbp-A1h]
  __int64 v27; // [rsp+48h] [rbp-99h]
  __int64 v28; // [rsp+50h] [rbp-91h]
  __int64 v29; // [rsp+58h] [rbp-89h]
  const wchar_t *v30; // [rsp+60h] [rbp-81h]
  int v31; // [rsp+68h] [rbp-79h]
  int v32; // [rsp+6Ch] [rbp-75h]
  const char *v33; // [rsp+70h] [rbp-71h]
  int v34; // [rsp+78h] [rbp-69h]
  int v35; // [rsp+7Ch] [rbp-65h]
  char *v36; // [rsp+80h] [rbp-61h]
  __int64 v37; // [rsp+88h] [rbp-59h]
  char *v38; // [rsp+90h] [rbp-51h]
  __int64 v39; // [rsp+98h] [rbp-49h]
  char *v40; // [rsp+A0h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-39h]
  char *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  const char *v44; // [rsp+C0h] [rbp-21h]
  int v45; // [rsp+C8h] [rbp-19h]
  int v46; // [rsp+CCh] [rbp-15h]
  char *v47; // [rsp+D0h] [rbp-11h]
  __int64 v48; // [rsp+D8h] [rbp-9h]
  int v49; // [rsp+118h] [rbp+37h] BYREF

  v49 = a4;
  v13 = a6;
  v26 = &v49;
  v28 = a5;
  v15 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v31 = v17;
  v18 = a7;
  if ( !a6 )
    v13 = L"NULL";
  v32 = 0;
  v30 = v13;
  v19 = 5;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v34 = v21;
  v35 = 0;
  v36 = &a8;
  v37 = 2LL;
  v38 = &a9;
  if ( !a7 )
    v18 = "NULL";
  v33 = v18;
  v40 = &a10;
  v42 = &a11;
  v22 = a12;
  v39 = 2LL;
  v41 = 4LL;
  v43 = 4LL;
  v23 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v15;
    while ( a12[v15] );
    v19 = v15 + 1;
    v23 = a12 == 0LL;
  }
  if ( v23 )
    v22 = "NULL";
  v45 = v19;
  v46 = 0;
  v47 = &a13;
  v44 = v22;
  v48 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v22, a2, 0LL, 0xBu, &v25);
}
