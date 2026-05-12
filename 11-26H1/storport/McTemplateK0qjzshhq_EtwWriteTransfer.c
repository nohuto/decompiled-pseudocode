/*
 * XREFs of McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400E3B48
 * Callers:
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rcx
  const wchar_t *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  const char *v15; // rax
  __int64 v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-69h] BYREF
  int *v19; // [rsp+40h] [rbp-59h]
  __int64 v20; // [rsp+48h] [rbp-51h]
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 v22; // [rsp+58h] [rbp-41h]
  const wchar_t *v23; // [rsp+60h] [rbp-39h]
  int v24; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  const char *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  char *v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  char *v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+98h] [rbp-1h]
  char *v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+E8h] [rbp+4Fh] BYREF

  v35 = a4;
  v20 = 4LL;
  v19 = &v35;
  v10 = -1LL;
  v21 = a5;
  v12 = a6;
  v22 = 16LL;
  if ( a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a6[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v24 = v14;
  v25 = 0;
  if ( !a6 )
    v12 = L"NULL";
  v23 = v12;
  v15 = a7;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v16 = (unsigned int)(v10 + 1);
  }
  else
  {
    v16 = 5LL;
  }
  v28 = 0;
  v27 = v16;
  if ( !a7 )
    v15 = "NULL";
  v30 = 2LL;
  v26 = v15;
  v32 = 2LL;
  v29 = &a8;
  v34 = 4LL;
  v31 = &a9;
  v33 = &a10;
  return McGenEventWrite_EtwWriteTransfer(v16, a2, 0LL, 8u, &v18);
}
