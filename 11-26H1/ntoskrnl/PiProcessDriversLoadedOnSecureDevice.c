/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x1409DC0E8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PipUnprotectDevice @ 0x1407B7F58 (PipUnprotectDevice.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x140B69A24 (PnpTraceSecureDeviceEnumeration.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = 0;
  memset(v8, 0, sizeof(v8));
  v3 = *(_QWORD **)(a1 + 32);
  v4 = 1;
  v9 = 0LL;
  if ( (int)PnpQueryInterface(v3, (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE, 1u, 0x38u, 0LL, (USHORT *)v8) < 0 )
  {
    v6 = PipUnprotectDevice(a1);
    v1 = v6;
    if ( v6 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 48, -1073741790);
      v6 = -1073741106;
      v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(*((__int64 *)&v8[0] + 1), v5);
    v6 = 0;
  }
  PnpTraceSecureDeviceEnumeration(a1, v4, v1);
  return (unsigned int)v6;
}
