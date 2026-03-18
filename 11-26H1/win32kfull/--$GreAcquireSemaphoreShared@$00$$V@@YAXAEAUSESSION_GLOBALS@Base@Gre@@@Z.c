/*
 * XREFs of ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4
 * Callers:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x14007324C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x140073314 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x140075588 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DxgkEngAcquireStableVisRgn @ 0x14007E270 (DxgkEngAcquireStableVisRgn.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1401D7B20 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     GreDesktopSwitch @ 0x140230AF8 (GreDesktopSwitch.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphoreShared<1,>(_QWORD *a1)
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  EtwTraceGreLockAcquireSemaphoreShared(L"DynamicModeChange", *a1 + 624LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 624LL));
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (v5 & 2) == 0 )
    {
      v6 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 1 && v7 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v7);
    }
    LOBYTE(i) = *((_BYTE *)v4 + 9);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 9) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 2uLL;
  }
  return result;
}
