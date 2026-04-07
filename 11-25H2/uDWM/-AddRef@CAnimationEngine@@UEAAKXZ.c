/*
 * XREFs of ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x1800158B0
 * Callers:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015874 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18006D7A4 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A70F0 (-QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::AddRef(CAnimationEngine *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 29);
}
