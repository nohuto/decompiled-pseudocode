/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4
 * Callers:
 *     ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z @ 0x1400C1D08 (-vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z @ 0x1400C3444 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z.c)
 *     ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400FEB78 (-BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     GreGetAspectRatioFilter @ 0x14031C9D0 (GreGetAspectRatioFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v3; // ecx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2160LL);
  v3 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v3 == 1 || v3 == 2 )
    return *(unsigned int *)(*(_QWORD *)this + 2160LL);
  else
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
}
