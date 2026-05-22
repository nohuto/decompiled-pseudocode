/*
 * XREFs of _lambda_2c96748461f4900de3746577f815c647_::_lambda_2c96748461f4900de3746577f815c647_ @ 0x1800BEBB8
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180070AC4 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_2c96748461f4900de3746577f815c647_::_lambda_2c96748461f4900de3746577f815c647_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
