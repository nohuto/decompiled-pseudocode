/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$14 @ 0x1806F8F99
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 592) = *(_QWORD *)(a2 + 800) + 248LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(*(RTL_SRWLOCK ***)(a2 + 592));
}
