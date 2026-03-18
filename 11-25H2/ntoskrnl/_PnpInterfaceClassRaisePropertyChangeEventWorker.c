/*
 * XREFs of _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14080C438
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140836790 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpNotifyDerivedKeys @ 0x140A0A9B0 (_PnpNotifyDerivedKeys.c)
 */

__int64 __fastcall PnpInterfaceClassRaisePropertyChangeEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // ebp
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  v9[1] = a4;
  v7 = a1;
  v9[0] = a3;
  v9[2] = a5;
  guard_dispatch_icall_no_overrides(a1);
  return PnpNotifyDerivedKeys(v7, a2, 4, a5, (__int64)&off_14000C0D0, 1, (__int64)v9, a6);
}
