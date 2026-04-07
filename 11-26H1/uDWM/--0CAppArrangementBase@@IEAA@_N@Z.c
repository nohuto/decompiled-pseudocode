/*
 * XREFs of ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800BFFF0
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800C006C (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 */

CAppArrangementBase *__fastcall CAppArrangementBase::CAppArrangementBase(CAppArrangementBase *this, bool a2)
{
  __int64 v2; // rcx

  CGroupingStoryboard::CGroupingStoryboard(this, a2);
  *(_QWORD *)(v2 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v2 = &CAppArrangementBase::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 176) = 0;
  return (CAppArrangementBase *)v2;
}
