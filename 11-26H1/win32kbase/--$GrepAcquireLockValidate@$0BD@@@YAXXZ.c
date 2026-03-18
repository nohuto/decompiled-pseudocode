/*
 * XREFs of ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330
 * Callers:
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     DrvGetHDEV @ 0x140027860 (DrvGetHDEV.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     DrvDestroyMDEV @ 0x1400C96A0 (DrvDestroyMDEV.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x140183730 (DrvInitializeDxgkrnlDpiCache.c)
 *     ldevLoadInternal @ 0x140190A00 (ldevLoadInternal.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x140190BA4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401B9BA0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401F76A0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<19>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFF80000uLL) != 0 && (v3 & 0x80000) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 19 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5, v3);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 27);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 27) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x80000uLL;
  }
  return result;
}
