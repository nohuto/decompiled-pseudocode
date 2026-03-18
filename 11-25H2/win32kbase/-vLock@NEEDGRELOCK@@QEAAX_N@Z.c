/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAX_N@Z @ 0x1400ECCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, char a2)
{
  struct _ERESOURCE **v3; // rcx

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    v3 = *(struct _ERESOURCE ***)(W32GetSessionState(this) + 88);
    *(_QWORD *)this = *v3 + 11;
    GreAcquireSemaphore<2,>(v3);
  }
}
