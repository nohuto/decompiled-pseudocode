/*
 * XREFs of _SnapInteraction::SendTelemetryAsync_::_1_::dtor$2 @ 0x1806D358A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapInteraction::SendTelemetryAsync_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<IApplicationView>::~com_ptr<IApplicationView>((_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL));
}
