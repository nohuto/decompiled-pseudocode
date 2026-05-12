/*
 * XREFs of McTemplateK0qjzshh_EtwWriteTransfer @ 0x1400E3638
 * Callers:
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E7C84 (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshh_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9)
{
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rdx
  int v12; // edx
  const char *v13; // rax
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-51h] BYREF
  int *v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  const wchar_t *v21; // [rsp+60h] [rbp-21h]
  int v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+6Ch] [rbp-15h]
  const char *v24; // [rsp+70h] [rbp-11h]
  int v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+7Ch] [rbp-5h]
  char *v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  char *v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+D8h] [rbp+57h] BYREF

  v31 = a4;
  v18 = 4LL;
  v17 = &v31;
  v9 = -1LL;
  v19 = a5;
  v10 = a6;
  v20 = 16LL;
  if ( a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a6[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v22 = v12;
  v23 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v21 = v10;
  v13 = a7;
  if ( a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
    v14 = (unsigned int)(v9 + 1);
  }
  else
  {
    v14 = 5LL;
  }
  v26 = 0;
  v25 = v14;
  if ( !a7 )
    v13 = "NULL";
  v28 = 2LL;
  v24 = v13;
  v30 = 2LL;
  v27 = &a8;
  v29 = &a9;
  return McGenEventWrite_EtwWriteTransfer(v14, &EventNVMeoFDisconnectDeleteQueue, 0LL, 7u, &v16);
}
