/*
 * XREFs of _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180681A18
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002098C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x180222320 (wil--details--ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___--_ScopeExitFn__lambda_6914.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_6914baa2bbb41478f35591fe55a15932_::operator()(__int64 a1)
{
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v1; // rsi
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v4; // rax

  v1 = *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 16LL), 0LL);
  v4 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 8LL), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v1, v4, StringRawBuffer);
}
