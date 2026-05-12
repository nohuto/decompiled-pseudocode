/*
 * XREFs of McTemplateK0qjzuuss_EtwWriteTransfer @ 0x1400D269C
 * Callers:
 *     NvmeAdapterAddHostGateway @ 0x1400D2A0C (NvmeAdapterAddHostGateway.c)
 *     NvmeAdapterRemoveHostGateway @ 0x1400DBF3C (NvmeAdapterRemoveHostGateway.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzuuss_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const wchar_t *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  const char *v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // ecx
  const char *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  int *v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h]
  __int64 v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  const wchar_t *v27; // [rsp+60h] [rbp-39h]
  int v28; // [rsp+68h] [rbp-31h]
  int v29; // [rsp+6Ch] [rbp-2Dh]
  char *v30; // [rsp+70h] [rbp-29h]
  __int64 v31; // [rsp+78h] [rbp-21h]
  char *v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  const char *v34; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  int v36; // [rsp+9Ch] [rbp+3h]
  const char *v37; // [rsp+A0h] [rbp+7h]
  int v38; // [rsp+A8h] [rbp+Fh]
  int v39; // [rsp+ACh] [rbp+13h]
  int v40; // [rsp+E8h] [rbp+4Fh] BYREF

  v40 = a4;
  v24 = 4LL;
  v23 = &v40;
  v11 = a6;
  v25 = a5;
  v12 = -1LL;
  v26 = 16LL;
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
  v28 = v14;
  v29 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v31 = 1LL;
  v27 = v11;
  v15 = a9;
  v16 = 5;
  v30 = &a7;
  v32 = &a8;
  v33 = 1LL;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v35 = v18;
  v19 = a10;
  if ( !a9 )
    v15 = "NULL";
  v36 = 0;
  v34 = v15;
  v20 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v12;
    while ( a10[v12] );
    v16 = v12 + 1;
    v20 = a10 == 0LL;
  }
  if ( v20 )
    v19 = "NULL";
  v38 = v16;
  v39 = 0;
  v37 = v19;
  return McGenEventWrite_EtwWriteTransfer((__int64)v19, a2, 0LL, 8u, &v22);
}
