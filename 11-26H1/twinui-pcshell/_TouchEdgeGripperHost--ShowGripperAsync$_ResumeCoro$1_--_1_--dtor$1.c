/*
 * XREFs of _TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F7D7F
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 112) + 32LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(*(RTL_SRWLOCK ***)(a2 + 48));
}
