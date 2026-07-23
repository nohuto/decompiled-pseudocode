/*
 * XREFs of McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x1405DEE08
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzdzzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10)
{
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // ecx
  const wchar_t *v14; // rcx
  __int64 v15; // r8
  int v16; // r8d
  const wchar_t *v17; // rcx
  __int64 v18; // r8
  int v19; // r8d
  const wchar_t *v20; // rcx
  __int64 v21; // r8
  int v22; // r8d
  const wchar_t *v23; // rcx
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-69h] BYREF
  const wchar_t *v27; // [rsp+40h] [rbp-59h]
  int v28; // [rsp+48h] [rbp-51h]
  int v29; // [rsp+4Ch] [rbp-4Dh]
  const wchar_t *v30; // [rsp+50h] [rbp-49h]
  int v31; // [rsp+58h] [rbp-41h]
  int v32; // [rsp+5Ch] [rbp-3Dh]
  const wchar_t *v33; // [rsp+60h] [rbp-39h]
  int v34; // [rsp+68h] [rbp-31h]
  int v35; // [rsp+6Ch] [rbp-2Dh]
  char *v36; // [rsp+70h] [rbp-29h]
  __int64 v37; // [rsp+78h] [rbp-21h]
  const wchar_t *v38; // [rsp+80h] [rbp-19h]
  int v39; // [rsp+88h] [rbp-11h]
  int v40; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v41; // [rsp+90h] [rbp-9h]
  int v42; // [rsp+98h] [rbp-1h]
  int v43; // [rsp+9Ch] [rbp+3h]
  char *v44; // [rsp+A0h] [rbp+7h]
  __int64 v45; // [rsp+A8h] [rbp+Fh]

  v10 = -1LL;
  v11 = 10;
  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v28 = v13;
  v14 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v29 = 0;
  v27 = a4;
  if ( a5 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a5[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v31 = v16;
  v32 = 0;
  if ( !a5 )
    v14 = L"NULL";
  v30 = v14;
  v17 = a6;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v34 = v19;
  v35 = 0;
  if ( !a6 )
    v17 = L"NULL";
  v37 = 4LL;
  v33 = v17;
  v36 = &a7;
  v20 = a8;
  if ( a8 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a8[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v39 = v22;
  v40 = 0;
  if ( !a8 )
    v20 = L"NULL";
  v38 = v20;
  v23 = a9;
  v24 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v10;
    while ( a9[v10] );
    v11 = 2 * v10 + 2;
    v24 = a9 == 0LL;
  }
  if ( v24 )
    v23 = L"NULL";
  v42 = v11;
  v41 = v23;
  v44 = &a10;
  v43 = 0;
  v45 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CreateInfo,
           0LL,
           8u,
           &v26);
}
