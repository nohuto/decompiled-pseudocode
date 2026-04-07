/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x180075CF8
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180099834 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x180099868 (--0CFade@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800C6478 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800C64AC (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800C64F4 (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800C65A8 (--0CSlide@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this)
{
  __int64 v1; // r9
  char v2; // dl
  CStoryboard *v3; // r9
  CStoryboard *result; // rax

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v1 + 28) = -1;
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  *(_DWORD *)(v1 + 24) = 0;
  *(_BYTE *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 64) = -1;
  *(GUID *)(v1 + 48) = GUID_NULL;
  *(_BYTE *)(v1 + 68) = v2;
  *(_DWORD *)(v1 + 72) = -1;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v1 + 96));
  result = v3;
  *((_OWORD *)v3 + 2) = 0LL;
  return result;
}
