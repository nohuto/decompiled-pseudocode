/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     DrvNotifyModeChangeStartStop @ 0x140188CE8 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0 (DrvGetRenderAdapterLuidFromHDEV.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // r8
  char v7; // cl
  int v9; // edx
  unsigned __int64 i; // rcx
  int v11; // eax

  v3 = (HSEMAPHORE)(*a2 + 624LL);
  *a1 = v3;
  EngAcquireSemaphoreShared(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)v4 & 2) == 0 )
    {
      v9 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v11 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v6) == 0 )
          v11 = v9;
        v9 = v11;
      }
      if ( v11 > 1 && v11 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v11, v6);
    }
    v7 = *((_BYTE *)v5 + 9);
    *((_BYTE *)v5 + 9) = v7 + 1;
    if ( !v7 )
      *(_QWORD *)v5 |= 2uLL;
  }
  return a1;
}
