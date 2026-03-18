/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086410
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400864A4 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 SessionState; // rax

  *(_QWORD *)this = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  v7 = (v6 + 8) & -(__int64)(v6 != 0);
  if ( !v7 || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2) || !*(_DWORD *)(v7 + 348) && !*(_DWORD *)(v7 + 352) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
    SessionState = W32GetSessionState(v5);
    GreAcquireSemaphore<6,>(*(_QWORD *)(SessionState + 88));
  }
  return this;
}
