/*
 * XREFs of McTemplateK0qjzshsss_EtwWriteTransfer @ 0x1400D2338
 * Callers:
 *     NvmeAdapterRemoveHostGateway @ 0x1400DBF3C (NvmeAdapterRemoveHostGateway.c)
 *     NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400DC2B4 (NvmeAdapterRemoveSubsystemPortMiniport.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019E8F8 (NvmeAdapterRemoveSubsystemPort.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshsss_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10,
        const char *a11)
{
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  int v15; // r8d
  const char *v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  const char *v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  const char *v22; // rcx
  __int64 v23; // rdx
  int v24; // edx
  const char *v25; // rcx
  bool v26; // zf
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-81h] BYREF
  int *v29; // [rsp+40h] [rbp-71h]
  __int64 v30; // [rsp+48h] [rbp-69h]
  __int64 v31; // [rsp+50h] [rbp-61h]
  __int64 v32; // [rsp+58h] [rbp-59h]
  const wchar_t *v33; // [rsp+60h] [rbp-51h]
  int v34; // [rsp+68h] [rbp-49h]
  int v35; // [rsp+6Ch] [rbp-45h]
  const char *v36; // [rsp+70h] [rbp-41h]
  int v37; // [rsp+78h] [rbp-39h]
  int v38; // [rsp+7Ch] [rbp-35h]
  char *v39; // [rsp+80h] [rbp-31h]
  __int64 v40; // [rsp+88h] [rbp-29h]
  const char *v41; // [rsp+90h] [rbp-21h]
  int v42; // [rsp+98h] [rbp-19h]
  int v43; // [rsp+9Ch] [rbp-15h]
  const char *v44; // [rsp+A0h] [rbp-11h]
  int v45; // [rsp+A8h] [rbp-9h]
  int v46; // [rsp+ACh] [rbp-5h]
  const char *v47; // [rsp+B0h] [rbp-1h]
  int v48; // [rsp+B8h] [rbp+7h]
  int v49; // [rsp+BCh] [rbp+Bh]
  int v50; // [rsp+F8h] [rbp+47h] BYREF

  v50 = a4;
  v11 = a6;
  v29 = &v50;
  v31 = a5;
  v12 = -1LL;
  v30 = 4LL;
  v32 = 16LL;
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
  v34 = v14;
  v35 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v15 = 5;
  v33 = v11;
  v16 = a7;
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v37 = v18;
  v38 = 0;
  if ( !a7 )
    v16 = "NULL";
  v40 = 2LL;
  v36 = v16;
  v39 = &a8;
  v19 = a9;
  if ( a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a9[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v42 = v21;
  v43 = 0;
  if ( !a9 )
    v19 = "NULL";
  v41 = v19;
  v22 = a10;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v45 = v24;
  v46 = 0;
  if ( !a10 )
    v22 = "NULL";
  v44 = v22;
  v25 = a11;
  v26 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v12;
    while ( a11[v12] );
    v15 = v12 + 1;
    v26 = a11 == 0LL;
  }
  if ( v26 )
    v25 = "NULL";
  v48 = v15;
  v49 = 0;
  v47 = v25;
  return McGenEventWrite_EtwWriteTransfer((__int64)v25, &EventNVMeoFSubsystemPortRemoved, 0LL, 9u, &v28);
}
