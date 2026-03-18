/*
 * XREFs of HUBDTX_CancelControlTransfer @ 0x14002A320
 * Callers:
 *     HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x14001FF60 (HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HUBDTX_CancelControlTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 256));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            v3,
                            5,
                            36,
                            (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
    }
  }
  return result;
}
