/*
 * XREFs of HUBMUX_ReleasePortPowerReference @ 0x140012070
 * Callers:
 *     HUBPSM20_PoweredOffSuspended @ 0x140012FE0 (HUBPSM20_PoweredOffSuspended.c)
 *     HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold @ 0x140013300 (HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMUX_ReleasePortPowerReference(volatile signed __int32 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFB);
  _InterlockedAnd(a1 + 66, 0xFFFFFFF7);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 2360));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 2348), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v2 + 1280, 2058);
  result = *((unsigned int *)a1 + 334);
  if ( (result & 0x20) != 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a1 + 16LL),
               0LL,
               1152LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    _InterlockedAnd(a1 + 334, 0xFFFFFFDF);
  }
  return result;
}
