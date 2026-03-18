/*
 * XREFs of _lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_ @ 0x14019689C
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402789DC (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax

  a1[3] = a5;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
