/*
 * XREFs of ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8
 * Callers:
 *     hdevEnumerateDisplayOnly @ 0x1400281A0 (hdevEnumerateDisplayOnly.c)
 *     DxgkEngAssertGdiOutput @ 0x1400291F0 (DxgkEngAssertGdiOutput.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400C64A0 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x1400C7620 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C (-DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401656D8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140188CE8 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401F9D30 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BD@@@YAXXZ @ 0x1400283C0 (--$GrepReleaseLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct _ERESOURCE *__fastcall hdevEnumerate<1>(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  struct _ERESOURCE **v4; // rdi
  int v5; // r8d
  struct _ERESOURCE *v6; // rsi
  int v7; // r8d
  struct _ERESOURCE *v8; // rsi
  struct _ERESOURCE *Flink; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v10; // rdx
  struct _ERESOURCE *v11; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v6 = *v4;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v3, v2, v5, (_DWORD)v6, 0, (__int64)L"DriverMgmt");
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<19>();
  v8 = 0LL;
  v14 = a1;
  Flink = (struct _ERESOURCE *)a1;
  if ( !a1 )
    Flink = (struct _ERESOURCE *)(v4 + 494);
  while ( 1 )
  {
    Flink = (struct _ERESOURCE *)Flink->SystemResourcesList.Flink;
    if ( !Flink )
      break;
    if ( ((__int64)Flink->ExclusiveWaiters & 1) != 0 )
    {
      ++LODWORD(Flink->SystemResourcesList.Blink);
      v8 = Flink;
      v10 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)Flink[34].SystemResourcesList.Flink;
      if ( v10 )
      {
        Flink = v4[7];
        if ( Flink )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)Flink,
            v10,
            1);
      }
      break;
    }
  }
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v4);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v14, (struct Gre::Base::SESSION_GLOBALS *)v4);
      return v8;
    }
    v13 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(a1 + 3536);
    if ( v13 )
    {
      Flink = v4[7];
      if ( Flink )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
          (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)Flink,
          v13,
          0);
    }
    --*(_DWORD *)(a1 + 8);
  }
  v11 = *v4;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (_DWORD)Flink,
      (unsigned int)&LockRelease,
      v7,
      (unsigned int)*v4,
      (__int64)L"DriverMgmt");
  GrepReleaseLockValidate<19>();
  GreReleaseSemaphoreSharedInternal(v11);
  return v8;
}
