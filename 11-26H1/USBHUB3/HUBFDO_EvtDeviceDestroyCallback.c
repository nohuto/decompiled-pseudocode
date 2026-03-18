/*
 * XREFs of HUBFDO_EvtDeviceDestroyCallback @ 0x14000DB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceDestroyCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006D270);
  v3 = result;
  v4 = *(_QWORD *)(result + 2320);
  if ( v4 )
  {
    LOBYTE(v2) = 1;
    result = ExDeleteTimer(v4, v2, 0LL, 0LL);
    *(_QWORD *)(v3 + 2320) = 0LL;
  }
  return result;
}
