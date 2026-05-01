/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x1800D7384
 * Callers:
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x1800D72D8 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1801DC97C (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x18029A2F8 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x1802C6F80 (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18031F43C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180498934 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x1804B08CC (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1804E769C (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180514474 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x18059D048 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x1802CA84A (InitializeSRWLock_0.c)
 */

CGITRegistrationList *__fastcall CGITRegistrationList::CGITRegistrationList(CGITRegistrationList *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock_0((PSRWLOCK)this + 1);
  return this;
}
