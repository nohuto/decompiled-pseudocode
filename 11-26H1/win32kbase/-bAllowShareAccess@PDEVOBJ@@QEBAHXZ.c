/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1400C4CC0 (GreLockVisRgnSharedOrExclusive.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C5180 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C5300 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 SessionState; // rax
  __int64 v7; // rdx

  v1 = *(_QWORD *)this;
  v3 = *(unsigned int *)(*(_QWORD *)this + 40LL);
  if ( (v3 & 0x1000001) != 1 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 2604) != 5 && (v3 & 0x20000) == 0 )
  {
    v4 = *(_QWORD *)(v1 + 2568);
    if ( !v4 || v4 == -4 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
      return 0LL;
  }
  v5 = *(_QWORD *)(v1 + 24);
  SessionState = W32GetSessionState(v3);
  v7 = *(_QWORD *)this;
  return (*(_DWORD *)(*(_QWORD *)this + 2112LL) & 0x400) == 0
      && (*(_DWORD *)(v7 + 1808) & 0x8000000) == 0
      && (*(_DWORD *)(v7 + 40) & 0x48000000) == 0
      && (*(_DWORD *)(v5 + 40) & 0x1000000) == 0
      && *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 4232LL) != 0;
}
