/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x140914594
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140915648 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14091467C (PnpTraceDmaGuardDevicePolicy.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  char v7; // di
  __int64 v8; // rbx
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 1;
  if ( a3 )
    v3 = PnpSetObjectProperty(
           PiPnpRtlCtx,
           v5,
           1,
           a2,
           0LL,
           (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
           7,
           (__int64)&v10,
           4,
           0);
  else
    PnpSetObjectProperty(PiPnpRtlCtx, v5, 1, 0, 0LL, (__int64)&DEVPKEY_Device_DmaRemappingPolicy, 0, 0LL, 0, 0);
  PnpTraceDmaGuardDevicePolicy(a1, v10);
  v8 = *(_QWORD *)(a1 + 720);
  if ( v8 )
  {
    if ( v10 != 2 || !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)v8, 0LL) )
      v7 = 0;
    *(_BYTE *)(v8 + 16) = v7 | *(_BYTE *)(v8 + 16) & 0xFE;
  }
  return v3;
}
