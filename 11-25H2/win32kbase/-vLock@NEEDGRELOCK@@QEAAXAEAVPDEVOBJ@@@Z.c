/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140086540
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140087050 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  struct _ERESOURCE **v5; // rcx

  *(_QWORD *)this = 0LL;
  if ( *(_QWORD *)a2
    && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000) == 0 )
  {
    v5 = *(struct _ERESOURCE ***)(W32GetSessionState(v4) + 88);
    *(_QWORD *)this = *v5 + 11;
    GreAcquireSemaphore<2,>(v5);
  }
}
