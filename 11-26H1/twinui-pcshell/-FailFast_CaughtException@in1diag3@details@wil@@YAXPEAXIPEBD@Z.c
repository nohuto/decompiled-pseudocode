/*
 * XREFs of ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1805BCD18
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryLoadSnapLayoutPickerExtension_::_1_::catch$54 @ 0x1806D1B3B (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryLoadSnap.c)
 *     __lambda_6853a53403c5e70a089bec5311ff3126_::operator()_::_1_::catch$6 @ 0x1806DDB75 (__lambda_6853a53403c5e70a089bec5311ff3126_--operator()_--_1_--catch$6.c)
 *     __lambda_83256061826219130c74760726d0f103_::operator()_::_1_::catch$4 @ 0x1806FA232 (__lambda_83256061826219130c74760726d0f103_--operator()_--_1_--catch$4.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1805BC798 (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::FailFast_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_CaughtException<3>((int)this, (int)a2, a3, (__int64)a4, v4, retaddr);
}
