/*
 * XREFs of ?FailFast_GetLastErrorMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18025CB08
 * Callers:
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x18019337C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18025C1B8 (--$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 */

void __noreturn wil::details::in1diag3::FailFast_GetLastErrorMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        char *a4,
        const char *a5,
        ...)
{
  __int64 v5; // [rsp+20h] [rbp-38h]
  const char *retaddr; // [rsp+58h] [rbp+0h]

  wil::details::ReportFailure_GetLastErrorMsg<3>(this, a2, a3, a4, v5, retaddr, a4, (char *)&a5);
}
