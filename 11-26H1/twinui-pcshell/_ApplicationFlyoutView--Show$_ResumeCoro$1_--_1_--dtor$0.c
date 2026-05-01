/*
 * XREFs of _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FFD1D
 * Callers:
 *     <none>
 * Callees:
 *     ??1CorrelationVector@@QEAA@XZ @ 0x1802C5B8C (--1CorrelationVector@@QEAA@XZ.c)
 */

void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 128) + 16LL;
  CorrelationVector::~CorrelationVector(*(CorrelationVector **)(a2 + 64));
}
