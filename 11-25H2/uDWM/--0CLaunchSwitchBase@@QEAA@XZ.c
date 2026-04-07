/*
 * XREFs of ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800C652C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800C64AC (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 */

CLaunchSwitchBase *__fastcall CLaunchSwitchBase::CLaunchSwitchBase(CLaunchSwitchBase *this)
{
  CGroupingStoryboard::CGroupingStoryboard(this);
  *(_QWORD *)this = &CLaunchSwitchBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  return this;
}
