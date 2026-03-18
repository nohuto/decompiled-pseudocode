/*
 * XREFs of FWUPDATE_EvtDeviceCleanup @ 0x140041970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FWUPDATE_EvtDeviceCleanup(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006D248);
  if ( *(_QWORD *)(*(_QWORD *)result + 2672LL) == a1 )
    *(_QWORD *)(*(_QWORD *)result + 2672LL) = 0LL;
  return result;
}
