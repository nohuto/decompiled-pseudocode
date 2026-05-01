/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_5412139df090f220eeb5e1a31b6fef59_@@@details@wil@@QEAA@XZ @ 0x180554AA8
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806CD207 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806CD207.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806CD2CF (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806CD2CF.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180554BFC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180554CF4 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x180557D0C (-TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>::~ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>(
        __int64 a1)
{
  __int64 v2; // rax
  _BYTE v3[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(*(_QWORD *)(a1 + 8), v3);
    DragDropSimulatorTelemetryProvider::OnSimulateDrop::operator=(*(_QWORD *)a1, v2);
    DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)v3);
  }
}
