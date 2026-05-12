/*
 * XREFs of McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400D2120
 * Callers:
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzsh_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8)
{
  __int64 v8; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rdx
  int v12; // edx
  const char *v13; // rax
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  int *v17; // [rsp+40h] [rbp-29h]
  __int64 v18; // [rsp+48h] [rbp-21h]
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  const char *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  char *v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+C8h] [rbp+5Fh] BYREF

  v29 = a4;
  v18 = 4LL;
  v17 = &v29;
  v8 = -1LL;
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
      ++v8;
    while ( a7[v8] );
    v14 = (unsigned int)(v8 + 1);
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
  v27 = &a8;
  return McGenEventWrite_EtwWriteTransfer(v14, a2, 0LL, 6u, &v16);
}
