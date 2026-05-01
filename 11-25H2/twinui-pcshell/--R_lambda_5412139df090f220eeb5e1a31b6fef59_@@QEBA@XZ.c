/*
 * XREFs of ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ @ 0x180554E28
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180554BFC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180554CF4 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x180557D0C (-TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 */

void __fastcall _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  _BYTE v3[336]; // [rsp+20h] [rbp-168h] BYREF

  v2 = DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(a1[1], v3);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::operator=(*a1, v2);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)v3);
}
