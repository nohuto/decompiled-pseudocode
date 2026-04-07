/*
 * XREFs of ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x180013BA0
 * Callers:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099A60 (-QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::AddRef(CAnimationEngine *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 29);
}
