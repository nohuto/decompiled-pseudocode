/*
 * XREFs of ??0CSlideOut@@QEAA@XZ @ 0x1800C6618
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800C65A8 (--0CSlide@@IEAA@XZ.c)
 */

CSlideOut *__fastcall CSlideOut::CSlideOut(CSlideOut *this)
{
  CSlide::CSlide(this);
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &CSlideOut::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  return this;
}
