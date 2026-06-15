/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038E48
 * Callers:
 *     __lambda_8722efacb6e295def5e1d4fc60f9938c_::operator()_::_1_::catch$11 @ 0x18004BB52 (__lambda_8722efacb6e295def5e1d4fc60f9938c_--operator()_--_1_--catch$11.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch$12 @ 0x18004C3F0 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--catch$12.c)
 *     _CApplication::NotifyVolumePolicyChange_::_1_::catch$7 @ 0x18004C610 (_CApplication--NotifyVolumePolicyChange_--_1_--catch$7.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180036E3C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
