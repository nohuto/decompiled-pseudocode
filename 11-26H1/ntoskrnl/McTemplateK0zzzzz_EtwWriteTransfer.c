/*
 * XREFs of McTemplateK0zzzzz_EtwWriteTransfer @ 0x1405DCC68
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  const wchar_t *v12; // rcx
  __int64 v13; // r8
  int v14; // r8d
  const wchar_t *v15; // rcx
  __int64 v16; // r8
  int v17; // r8d
  const wchar_t *v18; // rcx
  __int64 v19; // r8
  int v20; // r8d
  const wchar_t *v21; // rcx
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v25; // [rsp+40h] [rbp-29h]
  int v26; // [rsp+48h] [rbp-21h]
  int v27; // [rsp+4Ch] [rbp-1Dh]
  const wchar_t *v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+5Ch] [rbp-Dh]
  const wchar_t *v31; // [rsp+60h] [rbp-9h]
  int v32; // [rsp+68h] [rbp-1h]
  int v33; // [rsp+6Ch] [rbp+3h]
  const wchar_t *v34; // [rsp+70h] [rbp+7h]
  int v35; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+7Ch] [rbp+13h]
  const wchar_t *v37; // [rsp+80h] [rbp+17h]
  int v38; // [rsp+88h] [rbp+1Fh]
  int v39; // [rsp+8Ch] [rbp+23h]

  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v26 = v11;
  v12 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v27 = 0;
  v25 = a4;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v29 = v14;
  v30 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v28 = v12;
  v15 = a6;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v32 = v17;
  v33 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v31 = v15;
  v18 = a7;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v35 = v20;
  v36 = 0;
  if ( !a7 )
    v18 = L"NULL";
  v34 = v18;
  v21 = a8;
  v22 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v9 = 2 * v8 + 2;
    v22 = a8 == 0LL;
  }
  if ( v22 )
    v21 = L"NULL";
  v38 = v9;
  v37 = v21;
  v39 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DuplicateDevice,
           0LL,
           6u,
           &v24);
}
