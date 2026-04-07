/*
 * XREFs of ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x18003E26C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18003C8E4 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::ScheduleToRun(CStoryboard *this)
{
  if ( !*((_DWORD *)this + 6) || *((_DWORD *)this + 6) == 1 )
  {
    *((_DWORD *)this + 6) = 2;
    CStoryboard::_LogStoryboardEvent(this);
  }
}
