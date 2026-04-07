/*
 * XREFs of ??0CCrossFade@@QEAA@XZ @ 0x1800C003C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18007BCE0 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CCrossFade *__fastcall CCrossFade::CCrossFade(CCrossFade *this)
{
  CCrossFade *v1; // rcx
  CCrossFade *result; // rax

  CStoryboard::CStoryboard(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CCrossFade::`vftable'{for `CBaseObject'};
  return result;
}
