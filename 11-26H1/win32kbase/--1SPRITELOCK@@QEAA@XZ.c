/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1400C7880
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
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
