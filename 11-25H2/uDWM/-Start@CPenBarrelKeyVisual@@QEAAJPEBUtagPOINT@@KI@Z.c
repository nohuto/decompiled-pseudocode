/*
 * XREFs of ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18002BA14
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18002BC10 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18002D244 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18002D2F8 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18002D634 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Start(CPenBarrelKeyVisual *this, const struct tagPOINT *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  struct CBitmapSource *v7; // rdx
  CImage *v8; // rcx

  *(struct tagPOINT *)((char *)this + 260) = *a2;
  *((_DWORD *)this + 67) = a3;
  *((_DWORD *)this + 64) = a4;
  v5 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v6 = MulDiv(20, v5, 96);
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 34);
  v8 = (CImage *)*((_QWORD *)this + 35);
  *((_DWORD *)this + 74) = v6;
  CImage::SetBitmapSource(v8, v7);
  CPenBarrelKeyVisual::PlaceVisuals(this);
  CVisual::SetOpacity(this, 1.0);
  CPenBarrelKeyVisual::UpdateBarrelAlpha(this);
  return 0LL;
}
