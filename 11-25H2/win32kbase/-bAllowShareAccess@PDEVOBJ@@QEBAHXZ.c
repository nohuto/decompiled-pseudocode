/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0
 * Callers:
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086410 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140086540 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140089890 (GreLockVisRgnSharedOrExclusive.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401338F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rbx
  PDEVOBJ *v2; // rdi
  int v3; // eax
  __int64 v4; // rbx
  __int64 SessionState; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)this;
  v2 = this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( (v3 & 1) == 0 )
    return 0LL;
  if ( (v3 & 0x1000000) != 0 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 2604) != 5 && (v3 & 0x20000) == 0 )
  {
    this = *(PDEVOBJ **)(v1 + 2568);
    if ( (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)this + 40) & 0x800000) == 0 )
      return 0LL;
  }
  v4 = *(_QWORD *)(v1 + 24);
  SessionState = W32GetSessionState(this);
  v6 = *(_QWORD *)v2;
  return (*(_DWORD *)(*(_QWORD *)v2 + 2112LL) & 0x400) == 0
      && (*(_DWORD *)(v6 + 1808) & 0x8000000) == 0
      && (*(_DWORD *)(v6 + 40) & 0x48000000) == 0
      && (*(_DWORD *)(v4 + 40) & 0x1000000) == 0
      && *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 4128LL) != 0;
}
