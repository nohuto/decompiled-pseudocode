/*
 * XREFs of ??0CFlyoutPopup@@IEAA@XZ @ 0x180099834
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x18008E114 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075CF8 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFlyoutPopup *__fastcall CFlyoutPopup::CFlyoutPopup(CFlyoutPopup *this)
{
  CFlyoutPopup *v1; // r10
  CFlyoutPopup *result; // rax

  CStoryboard::CStoryboard(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  return result;
}
