/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x18007FB98
 * Callers:
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x18007FAEC (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1801E6F64 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x1802A20B8 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x1802CFD4C (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x180322BBC (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180487C60 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x18049F630 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1804D525C (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1804F2D68 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180579898 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x1802D392A (InitializeSRWLock_0.c)
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
