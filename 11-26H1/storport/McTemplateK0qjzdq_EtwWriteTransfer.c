/*
 * XREFs of McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400D1C28
 * Callers:
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterStartDeviceIrp @ 0x1400DE2A4 (NvmeAdapterStartDeviceIrp.c)
 *     NvmePnpAsyncStartComplete @ 0x1400E2620 (NvmePnpAsyncStartComplete.c)
 *     NvmePnpAsyncStartCompleteWorker @ 0x1400E2A20 (NvmePnpAsyncStartCompleteWorker.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzdq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-39h] BYREF
  int *v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-21h]
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  const wchar_t *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  char *v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  char *v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF

  v24 = a4;
  v8 = a6;
  v13 = &v24;
  v15 = a5;
  v14 = 4LL;
  v16 = 16LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v18 = v10;
  v19 = 0;
  v20 = &a7;
  v21 = 4LL;
  if ( !a6 )
    v8 = L"NULL";
  v22 = &a8;
  v17 = v8;
  v23 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v8, a2, 0LL, 6u, &v12);
}
