/*
 * XREFs of _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806CF10C
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 256) + 48LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 168));
}
