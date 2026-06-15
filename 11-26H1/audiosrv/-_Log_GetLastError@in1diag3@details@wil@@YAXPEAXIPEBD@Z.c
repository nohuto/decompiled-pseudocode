/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010F920
 * Callers:
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010EC00 (--0CSebNotifier@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___ @ 0x180110D7C (wil--details--lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___--_lambda_call__lambda_ef07.c)
 *     ServiceDeviceEventCallback @ 0x1801534F0 (ServiceDeviceEventCallback.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180157C70 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18010E900 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v4, retaddr);
}
