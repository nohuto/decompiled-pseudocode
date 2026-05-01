/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806CD1D5
 * Callers:
 *     <none>
 * Callees:
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180554BFC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 64) + 368LL;
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop(*(DragDropSimulatorTelemetryProvider::OnSimulateDrop **)(a2 + 240));
}
