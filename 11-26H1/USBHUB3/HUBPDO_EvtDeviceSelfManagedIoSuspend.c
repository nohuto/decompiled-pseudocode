/*
 * XREFs of HUBPDO_EvtDeviceSelfManagedIoSuspend @ 0x1400164A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceSelfManagedIoSuspend(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D1D0);
  *(_DWORD *)(v1 + 32) &= ~1u;
  return 0LL;
}
