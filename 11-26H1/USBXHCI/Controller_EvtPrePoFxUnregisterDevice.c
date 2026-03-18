/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1400410B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B240);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 984LL) = 0LL;
  return result;
}
