/*
 * XREFs of McTemplateK0zz_EtwWriteTransfer @ 0x140525230
 * Callers:
 *     PiSwIrpSetAttributes @ 0x1407B0370 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B04AC (PiSwIrpSetLifetime.c)
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x140A7B100 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x140AF9430 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  __int64 v5; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // ecx
  const wchar_t *v10; // rcx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]
  const wchar_t *v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]

  v5 = -1LL;
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
  v10 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v16 = 0;
  v14 = a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v7 = 2 * v5 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v10 = L"NULL";
  v18 = v7;
  v17 = v10;
  v19 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &v13);
}
