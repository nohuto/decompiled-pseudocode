/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x140086360
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  __int64 SessionState; // rax

  if ( *(_QWORD *)this )
  {
    SessionState = W32GetSessionState(this);
    GreReleaseSemaphoreExclusive<6,>(*(_QWORD *)(SessionState + 88));
  }
}
