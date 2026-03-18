/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C5180
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 SessionState; // rax

  *(_QWORD *)this = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, a2);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v7 = (v6 + 8) & -(__int64)(v6 != 0);
  if ( !v7 || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2) || !*(_DWORD *)(v7 + 340) && !*(_DWORD *)(v7 + 344) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
    SessionState = W32GetSessionState(v5);
    GreAcquireSemaphore<6,>(*(_QWORD *)(SessionState + 88));
  }
  return this;
}
