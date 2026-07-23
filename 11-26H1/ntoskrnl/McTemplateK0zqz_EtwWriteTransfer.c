/*
 * XREFs of McTemplateK0zqz_EtwWriteTransfer @ 0x1405DE2CC
 * Callers:
 *     PnpFinalizeVetoedRemove @ 0x140B61B54 (PnpFinalizeVetoedRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // ecx
  const wchar_t *v10; // rcx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]
  char *v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  const wchar_t *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v6 = -1LL;
  v7 = 10;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v15 = v9;
  v16 = 0;
  v17 = &a5;
  v10 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v14 = a4;
  v18 = 4LL;
  v11 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v7 = 2 * v6 + 2;
    v11 = a6 == 0LL;
  }
  if ( v11 )
    v10 = L"NULL";
  v20 = v7;
  v19 = v10;
  v21 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemove_Vetoed,
           a3,
           4u,
           &v13);
}
