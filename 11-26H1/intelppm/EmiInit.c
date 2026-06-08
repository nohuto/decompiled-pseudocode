/*
 * XREFs of EmiInit @ 0x14003BEF4
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EmiInit(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  char v5; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
         WdfDriverGlobals,
         v2,
         &GUID_DEVICE_ENERGY_METER,
         0LL);
  if ( v3 >= 0 )
  {
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD, char))(WdfFunctions_01015 + 624))(
      WdfDriverGlobals,
      v2,
      &GUID_DEVICE_ENERGY_METER,
      0LL,
      v5);
    *(_WORD *)(a1 + 1256) = ((__int64 (__fastcall *)(__int64, __int64))qword_140019460)(a1, 0x800000000000LL);
  }
  return (unsigned int)v3;
}
