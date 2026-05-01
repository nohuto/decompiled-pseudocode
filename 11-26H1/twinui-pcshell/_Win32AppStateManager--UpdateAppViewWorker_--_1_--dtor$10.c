/*
 * XREFs of _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$10 @ 0x1806F5175
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 312));
}
