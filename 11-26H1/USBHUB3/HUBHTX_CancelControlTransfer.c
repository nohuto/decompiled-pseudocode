/*
 * XREFs of HUBHTX_CancelControlTransfer @ 0x140002AA4
 * Callers:
 *     HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x140012490 (HUBPSM20_CancellingDisableOnHubStopSuspend.c)
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1400124C0 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HUBHTX_CancelControlTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 16));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 1432),
                            v3,
                            4,
                            39,
                            (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
    }
  }
  return result;
}
