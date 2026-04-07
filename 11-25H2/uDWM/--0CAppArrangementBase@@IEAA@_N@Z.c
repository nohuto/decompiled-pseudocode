/*
 * XREFs of ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800C6438
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800C64AC (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 */

CAppArrangementBase *__fastcall CAppArrangementBase::CAppArrangementBase(CAppArrangementBase *this, bool a2)
{
  CGroupingStoryboard::CGroupingStoryboard(this, a2);
  *(_QWORD *)this = &CAppArrangementBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  CBitmapSourceArray::CBitmapSourceArray((CAppArrangementBase *)((char *)this + 152));
  return this;
}
