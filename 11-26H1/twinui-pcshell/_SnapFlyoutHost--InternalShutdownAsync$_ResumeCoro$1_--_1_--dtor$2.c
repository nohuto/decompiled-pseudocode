/*
 * XREFs of _SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F96F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 144) + 64LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(*(RTL_SRWLOCK ***)(a2 + 72));
}
