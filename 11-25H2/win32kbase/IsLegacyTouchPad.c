/*
 * XREFs of IsLegacyTouchPad @ 0x140124C78
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x14018ABC0 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLegacyTouchPad(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 48) )
    return *(_WORD *)(a1 + 864) == 1;
  return result;
}
