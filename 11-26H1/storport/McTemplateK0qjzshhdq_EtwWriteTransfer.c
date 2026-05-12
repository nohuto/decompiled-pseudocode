/*
 * XREFs of McTemplateK0qjzshhdq_EtwWriteTransfer @ 0x1400E374C
 * Callers:
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhdq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  const char *v15; // rax
  __int64 v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-81h] BYREF
  int *v19; // [rsp+40h] [rbp-71h]
  __int64 v20; // [rsp+48h] [rbp-69h]
  __int64 v21; // [rsp+50h] [rbp-61h]
  __int64 v22; // [rsp+58h] [rbp-59h]
  const wchar_t *v23; // [rsp+60h] [rbp-51h]
  int v24; // [rsp+68h] [rbp-49h]
  int v25; // [rsp+6Ch] [rbp-45h]
  const char *v26; // [rsp+70h] [rbp-41h]
  int v27; // [rsp+78h] [rbp-39h]
  int v28; // [rsp+7Ch] [rbp-35h]
  char *v29; // [rsp+80h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp-29h]
  char *v31; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+98h] [rbp-19h]
  char *v33; // [rsp+A0h] [rbp-11h]
  __int64 v34; // [rsp+A8h] [rbp-9h]
  char *v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+B8h] [rbp+7h]
  int v37; // [rsp+F8h] [rbp+47h] BYREF

  v37 = a4;
  v20 = 4LL;
  v19 = &v37;
  v11 = -1LL;
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
      ++v11;
    while ( a7[v11] );
    v16 = (unsigned int)(v11 + 1);
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
  v36 = 4LL;
  v33 = &a10;
  v35 = &a11;
  return McGenEventWrite_EtwWriteTransfer(v16, &EventNVMeoFDisconnectControllerQueueFailure, 0LL, 9u, &v18);
}
