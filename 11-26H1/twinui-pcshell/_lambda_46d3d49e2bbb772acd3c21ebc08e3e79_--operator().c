/*
 * XREFs of _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180681984
 * Callers:
 *     wil::details::ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___::_ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___ @ 0x180681788 (wil--details--ScopeExitFn__lambda_46d3d49e2bbb772acd3c21ebc08e3e79___--_ScopeExitFn__lambda_46d3.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180681A80 (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator()(__int64 a1)
{
  const unsigned __int16 *v1; // rdi
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v2; // rbp
  const unsigned __int16 *StringRawBuffer; // rsi

  v1 = &pvData;
  v2 = *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1;
  if ( **(_QWORD **)(a1 + 8) )
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 16) + 16LL), 0LL);
  else
    StringRawBuffer = &pvData;
  if ( **(_QWORD **)(a1 + 8) )
    v1 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 16) + 8LL), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v2, v1, StringRawBuffer);
}
