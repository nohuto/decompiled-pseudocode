/*
 * XREFs of ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18045D8CC
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800A9BD4 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x18064B254 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1804561BC (--$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_NtStatus<0>((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, v6);
}
