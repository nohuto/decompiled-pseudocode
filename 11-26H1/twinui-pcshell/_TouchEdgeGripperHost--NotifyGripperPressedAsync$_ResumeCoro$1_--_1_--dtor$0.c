/*
 * XREFs of _TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F7C49
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x1802BB56C (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 16LL;
  return winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(*(_QWORD **)(a2 + 40));
}
