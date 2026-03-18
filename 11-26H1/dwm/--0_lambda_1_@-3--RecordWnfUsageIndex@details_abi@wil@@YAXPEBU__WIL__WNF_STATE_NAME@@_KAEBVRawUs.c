/*
 * XREFs of ??0_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@23@@Z@QEAA@AEA_K3AEAV523@@Z @ 0x140006C30
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14000A2D4 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_::_lambda_1_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
