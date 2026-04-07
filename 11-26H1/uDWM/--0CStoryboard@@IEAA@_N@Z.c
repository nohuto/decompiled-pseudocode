/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x18007BCE0
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x18008D2C8 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18008D2F8 (--0CFade@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800C003C (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800C006C (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800C00B0 (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800C0154 (--0CSlide@@IEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800C01F8 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this)
{
  __int64 v1; // rcx
  CStoryboard *result; // rax
  char v3; // dl

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v1 + 28) = -1;
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 64) = -1;
  *(_DWORD *)(v1 + 72) = -1;
  result = (CStoryboard *)v1;
  *(GUID *)(v1 + 48) = GUID_NULL;
  *(_BYTE *)(v1 + 68) = v3;
  *(_BYTE *)(v1 + 76) = 0;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 112) = 0LL;
  *(_DWORD *)(v1 + 120) = 0;
  *(_OWORD *)(v1 + 32) = 0LL;
  return result;
}
