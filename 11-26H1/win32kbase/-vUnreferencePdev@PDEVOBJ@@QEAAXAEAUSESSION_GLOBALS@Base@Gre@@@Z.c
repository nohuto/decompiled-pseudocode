/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1400C96A0 (DrvDestroyMDEV.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14010E4D0 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401B5D90 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1401F27B0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401F2850 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401F3274 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x14018FD00 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(HDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  struct _ERESOURCE *v2; // rbx
  HDEV v5; // rdi
  int v6; // r8d
  int v7; // ebp
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(struct _ERESOURCE **)a2;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)a2);
  GrepAcquireLockValidate<19>();
  v5 = *this;
  TrackObjectReferenceDecrement(
    (__int64)a2,
    1u,
    *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*this + 442));
  v7 = *((_DWORD *)v5 + 2) - 1;
  *((_DWORD *)v5 + 2) = v7;
  if ( !v7 )
    RemoveHDEVFromList((HDEV *)a2 + 494, *this);
  if ( v2 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v2,
      v6);
  if ( !v7 )
  {
    v8[0] = *this;
    v8[1] = 1LL;
    vUnreferencePdevWorker((__int64)v8);
  }
}
