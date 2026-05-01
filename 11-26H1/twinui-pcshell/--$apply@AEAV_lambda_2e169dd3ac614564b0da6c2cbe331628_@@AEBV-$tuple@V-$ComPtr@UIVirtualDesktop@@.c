/*
 * XREFs of ??$apply@AEAV_lambda_2e169dd3ac614564b0da6c2cbe331628_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@std@@YA?A_TAEAV_lambda_2e169dd3ac614564b0da6c2cbe331628_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@0@@Z @ 0x18054C834
 * Callers:
 *     ??R_lambda_32cddfead7c6f8562f674df7c4355998_@@QEBA@XZ @ 0x18054CCBC (--R_lambda_32cddfead7c6f8562f674df7c4355998_@@QEBA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::apply<_lambda_2e169dd3ac614564b0da6c2cbe331628_ &,std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>> const &>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rdx
  _QWORD *result; // rax

  v3 = a3[1];
  *a1 = *a3;
  result = a1;
  a1[1] = v3;
  return result;
}
