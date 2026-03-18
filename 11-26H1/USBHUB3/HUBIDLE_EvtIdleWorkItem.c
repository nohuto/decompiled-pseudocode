/*
 * XREFs of HUBIDLE_EvtIdleWorkItem @ 0x140040C30
 * Callers:
 *     <none>
 * Callees:
 *     HUBIDLE_AddEvent @ 0x14004073C (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBIDLE_EvtIdleWorkItem(__int64 a1)
{
  __int64 *v1; // rax

  v1 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_14006D100);
  return HUBIDLE_AddEvent(*v1, 6010, 0LL);
}
