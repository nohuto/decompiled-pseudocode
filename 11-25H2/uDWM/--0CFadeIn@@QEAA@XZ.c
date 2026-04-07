/*
 * XREFs of ??0CFadeIn@@QEAA@XZ @ 0x18008CC90
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x180099868 (--0CFade@@IEAA@XZ.c)
 */

CFadeIn *__fastcall CFadeIn::CFadeIn(CFadeIn *this)
{
  CFade::CFade(this);
  *(_QWORD *)this = &CFadeIn::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  return this;
}
