/*
 * XREFs of McTemplateK0qjzsdqq_EtwWriteTransfer @ 0x1400D1FF8
 * Callers:
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzsdqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        int a9,
        char a10)
{
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  const char *v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-69h] BYREF
  int *v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h]
  __int64 v22; // [rsp+68h] [rbp-41h]
  const wchar_t *v23; // [rsp+70h] [rbp-39h]
  int v24; // [rsp+78h] [rbp-31h]
  int v25; // [rsp+7Ch] [rbp-2Dh]
  const char *v26; // [rsp+80h] [rbp-29h]
  int v27; // [rsp+88h] [rbp-21h]
  int v28; // [rsp+8Ch] [rbp-1Dh]
  char *v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  int *v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  char *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+F8h] [rbp+4Fh] BYREF

  v35 = a4;
  v20 = 4LL;
  v19 = &v35;
  v10 = -1LL;
  v21 = a5;
  v11 = a6;
  v17 = 0;
  v22 = 16LL;
  if ( a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v24 = v13;
  v25 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v23 = v11;
  v14 = a7;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v15 = (unsigned int)(v10 + 1);
  }
  else
  {
    v15 = 5LL;
  }
  v28 = 0;
  v27 = v15;
  if ( !a7 )
    v14 = "NULL";
  v30 = 4LL;
  v26 = v14;
  v32 = 4LL;
  v29 = &a8;
  v34 = 4LL;
  v31 = &v17;
  v33 = &a10;
  return McGenEventWrite_EtwWriteTransfer(v15, &EventNVMeoFConnectControllerFailure, 0LL, 8u, &v18);
}
