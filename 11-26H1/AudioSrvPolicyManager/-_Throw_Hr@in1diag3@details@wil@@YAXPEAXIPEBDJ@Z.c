/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AFF0
 * Callers:
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180027230 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180037108 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        wil::details *a4,
        int a5)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr<0>((__int64)this, a2, a3, a4, v5, retaddr, (unsigned int)a4);
}
