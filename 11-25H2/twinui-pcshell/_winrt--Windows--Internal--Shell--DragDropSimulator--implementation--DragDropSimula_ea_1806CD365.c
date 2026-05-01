/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$20 @ 0x1806CD365
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z @ 0x180554010 (--$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1_::_1_::catch_20(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(*(_QWORD *)(a2 + 64) + 1384LL) = wil::ResultFromCaughtException(a1);
  DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[20],long>();
  throw;
}
