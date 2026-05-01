/*
 * XREFs of _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806F7A2C
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 176) + 128LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(*(wil::ActivityThreadWatcher **)(a2 + 80));
}
