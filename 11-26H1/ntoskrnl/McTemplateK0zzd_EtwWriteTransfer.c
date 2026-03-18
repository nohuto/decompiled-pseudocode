/*
 * XREFs of McTemplateK0zzd_EtwWriteTransfer @ 0x14049E7E8
 * Callers:
 *     PiSwIrpSetAttributes @ 0x1407B0370 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B04AC (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     PiSwIrpInterfaceSetState @ 0x140AF9430 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zzd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  __int64 v6; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // ecx
  const wchar_t *v11; // rcx
  bool v12; // zf
  _BYTE v14[16]; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  char *v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]

  v6 = -1LL;
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
  v16 = v10;
  v11 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v17 = 0;
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v8 = 2 * v6 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v19 = v8;
  v18 = v11;
  v21 = &a6;
  v20 = 0;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 4LL, v14);
}
