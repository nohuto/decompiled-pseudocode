/*
 * XREFs of HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected @ 0x140088160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_WriteValueToHubHardwareKey @ 0x14008D530 (HUBREG_WriteValueToHubHardwareKey.c)
 */

__int64 __fastcall HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_14006D270);
  HUBREG_WriteValueToHubHardwareKey(v3, L"&(", (*(_DWORD *)(v3 + 40) >> 29) & 1);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
