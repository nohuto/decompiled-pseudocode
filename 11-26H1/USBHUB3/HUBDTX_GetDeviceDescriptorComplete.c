/*
 * XREFs of HUBDTX_GetDeviceDescriptorComplete @ 0x14002B7D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CE30 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDTX_GetDeviceDescriptorComplete(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax

  v5 = *(_DWORD *)(a3 + 8);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_14006D0A8);
  HUBSM_AddEvent((__int64)(a4 + 64), ((v5 >> 31) & 0xFFFFFFF8) + 4012);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a1);
  HUBFDO_CompleteGetDescriptorRequest(*a4, *(_WORD *)(a4[1] + 200), a1, v9, *(_DWORD *)(v8 + 60));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a4);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v10,
           "User Mode FDO Request",
           6313LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
}
