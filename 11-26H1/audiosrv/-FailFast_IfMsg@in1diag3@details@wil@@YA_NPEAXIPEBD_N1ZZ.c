/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180127C98
 * Callers:
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18005CE48 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1801279E4 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool wil::details::in1diag3::FailFast_IfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  int v8; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( (_BYTE)a4 )
    wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, retaddr, v7, retaddr, v8, a5, (__int64)&a6);
  return 0;
}
