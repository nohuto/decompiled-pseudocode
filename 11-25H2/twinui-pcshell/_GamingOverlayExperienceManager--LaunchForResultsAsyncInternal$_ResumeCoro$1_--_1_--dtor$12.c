/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806BD35E
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 352) = *(_QWORD *)(a2 + 56) + 440LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(*(RTL_SRWLOCK ***)(a2 + 352));
}
