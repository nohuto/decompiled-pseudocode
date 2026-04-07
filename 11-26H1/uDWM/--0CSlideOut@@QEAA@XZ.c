/*
 * XREFs of ??0CSlideOut@@QEAA@XZ @ 0x1800C01C0
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800C0154 (--0CSlide@@IEAA@XZ.c)
 */

CSlideOut *__fastcall CSlideOut::CSlideOut(CSlideOut *this)
{
  CSlideOut *v1; // rcx
  CSlideOut *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 17) = 0LL;
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CSlideOut::`vftable'{for `CBaseObject'};
  return result;
}
