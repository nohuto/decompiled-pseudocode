/*
 * XREFs of McTemplateK0qjzssshhq_EtwWriteTransfer @ 0x1400E44D4
 * Callers:
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzssshhq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        char a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  const char *v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  const char *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rcx
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  int *v28; // [rsp+40h] [rbp-89h]
  __int64 v29; // [rsp+48h] [rbp-81h]
  __int64 v30; // [rsp+50h] [rbp-79h]
  __int64 v31; // [rsp+58h] [rbp-71h]
  const wchar_t *v32; // [rsp+60h] [rbp-69h]
  int v33; // [rsp+68h] [rbp-61h]
  int v34; // [rsp+6Ch] [rbp-5Dh]
  const char *v35; // [rsp+70h] [rbp-59h]
  int v36; // [rsp+78h] [rbp-51h]
  int v37; // [rsp+7Ch] [rbp-4Dh]
  const char *v38; // [rsp+80h] [rbp-49h]
  int v39; // [rsp+88h] [rbp-41h]
  int v40; // [rsp+8Ch] [rbp-3Dh]
  const char *v41; // [rsp+90h] [rbp-39h]
  int v42; // [rsp+98h] [rbp-31h]
  int v43; // [rsp+9Ch] [rbp-2Dh]
  char *v44; // [rsp+A0h] [rbp-29h]
  __int64 v45; // [rsp+A8h] [rbp-21h]
  char *v46; // [rsp+B0h] [rbp-19h]
  __int64 v47; // [rsp+B8h] [rbp-11h]
  char *v48; // [rsp+C0h] [rbp-9h]
  __int64 v49; // [rsp+C8h] [rbp-1h]
  int v50; // [rsp+108h] [rbp+3Fh] BYREF

  v50 = a4;
  v12 = a6;
  v28 = &v50;
  v30 = a5;
  v14 = -1LL;
  v29 = 4LL;
  v31 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v33 = v16;
  v34 = 0;
  if ( !a6 )
    v12 = L"NULL";
  v17 = 5;
  v32 = v12;
  v18 = a7;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v36 = v20;
  v37 = 0;
  if ( !a7 )
    v18 = "NULL";
  v35 = v18;
  v21 = a8;
  if ( a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a8[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v39 = v23;
  v40 = 0;
  if ( !a8 )
    v21 = "NULL";
  v38 = v21;
  v24 = a9;
  v25 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v14;
    while ( a9[v14] );
    v17 = v14 + 1;
    v25 = a9 == 0LL;
  }
  if ( v25 )
    v24 = "NULL";
  v42 = v17;
  v43 = 0;
  v44 = &a10;
  v41 = v24;
  v46 = &a11;
  v45 = 2LL;
  v48 = &a12;
  v47 = 2LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v24, a2, 0LL, 0xAu, &v27);
}
