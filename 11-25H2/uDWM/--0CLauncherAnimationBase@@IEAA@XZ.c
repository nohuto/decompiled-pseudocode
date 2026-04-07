/*
 * XREFs of ??0CLauncherAnimationBase@@IEAA@XZ @ 0x18008E114
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180099834 (--0CFlyoutPopup@@IEAA@XZ.c)
 */

CLauncherAnimationBase *__fastcall CLauncherAnimationBase::CLauncherAnimationBase(CLauncherAnimationBase *this)
{
  CLauncherAnimationBase *result; // rax

  CFlyoutPopup::CFlyoutPopup(this);
  *(_QWORD *)this = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = this;
  *((_OWORD *)this + 8) = 0LL;
  return result;
}
