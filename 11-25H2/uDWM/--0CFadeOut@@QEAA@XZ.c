/*
 * XREFs of ??0CFadeOut@@QEAA@XZ @ 0x18008DA44
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x180099868 (--0CFade@@IEAA@XZ.c)
 */

CFadeOut *__fastcall CFadeOut::CFadeOut(CFadeOut *this)
{
  CFade::CFade(this);
  *(_QWORD *)this = &CFadeOut::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  return this;
}
