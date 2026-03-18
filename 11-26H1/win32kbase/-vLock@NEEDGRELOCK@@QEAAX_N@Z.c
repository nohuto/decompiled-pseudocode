/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAX_N@Z @ 0x14003B590
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, char a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD **)(W32GetSessionState(this) + 88);
    *(_QWORD *)this = *v3 + 1144LL;
    GreAcquireSemaphore<2,>(v3);
  }
}
