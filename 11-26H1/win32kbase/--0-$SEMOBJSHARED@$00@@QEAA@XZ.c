/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140024580 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C (-DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(HSEMAPHORE *a1)
{
  HSEMAPHORE v2; // rcx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  char v6; // cl
  int v8; // edx
  unsigned __int64 i; // rcx
  int v10; // eax

  v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 624LL);
  *a1 = v2;
  EngAcquireSemaphoreShared(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)v3 & 2) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v10 = v8;
        v8 = v10;
      }
      if ( v10 > 1 && v10 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v10, v5);
    }
    v6 = *((_BYTE *)v4 + 9);
    *((_BYTE *)v4 + 9) = v6 + 1;
    if ( !v6 )
      *(_QWORD *)v4 |= 2uLL;
  }
  return a1;
}
