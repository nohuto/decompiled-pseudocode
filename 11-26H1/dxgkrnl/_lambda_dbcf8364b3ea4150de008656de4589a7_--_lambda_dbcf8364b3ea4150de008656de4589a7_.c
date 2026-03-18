/*
 * XREFs of _lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_ @ 0x140089EB4
 * Callers:
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E808 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E940 (-ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
