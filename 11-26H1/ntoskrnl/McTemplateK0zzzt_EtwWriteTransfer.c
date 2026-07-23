/*
 * XREFs of McTemplateK0zzzt_EtwWriteTransfer @ 0x1405DEF98
 * Callers:
 *     PiSwDeviceInterfaceSetState @ 0x140B1284C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140B14B14 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // ecx
  const wchar_t *v11; // rcx
  __int64 v12; // rdx
  int v13; // edx
  const wchar_t *v14; // rcx
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-11h]
  int v19; // [rsp+48h] [rbp-9h]
  int v20; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v21; // [rsp+50h] [rbp-1h]
  int v22; // [rsp+58h] [rbp+7h]
  int v23; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v24; // [rsp+60h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+6Ch] [rbp+1Bh]
  char *v27; // [rsp+70h] [rbp+1Fh]
  __int64 v28; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  v11 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v20 = 0;
  v18 = a4;
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a5 )
    v11 = L"NULL";
  v21 = v11;
  v14 = a6;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v14 = L"NULL";
  v25 = v8;
  v24 = v14;
  v27 = &a7;
  v26 = 0;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceStateChange,
           0LL,
           5u,
           &v17);
}
