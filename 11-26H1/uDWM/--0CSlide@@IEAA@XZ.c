/*
 * XREFs of ??0CSlide@@IEAA@XZ @ 0x1800C0154
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800C0124 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800C0190 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800C01C0 (--0CSlideOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18007BCE0 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CSlide *__fastcall CSlide::CSlide(CSlide *this)
{
  __int64 v1; // rcx
  CSlide *result; // rax

  CStoryboard::CStoryboard(this);
  *(_DWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = (CSlide *)v1;
  *(_QWORD *)v1 = &CPanelAnimation::`vftable'{for `CBaseObject'};
  return result;
}
