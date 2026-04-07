/*
 * XREFs of ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800132F8
 * Callers:
 *     ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x1800132C0 (-Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18004F36C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x1800131E8 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::PlaceVisuals(CPenBarrelKeyVisual *this)
{
  int v2; // r8d
  CContactManager *v3; // rcx
  unsigned int v4; // edx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 31), *((_DWORD *)this + 57) - *((_DWORD *)this + 64) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 31), *((_DWORD *)this + 58) - *((_DWORD *)this + 65) / 2);
  v2 = *((_DWORD *)this + 59);
  v6.x = *((_DWORD *)this + 57);
  v3 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  v4 = *((_DWORD *)this + 56);
  v6.y = *((_DWORD *)this + 58) + *((_DWORD *)this + 66) + *((_DWORD *)this + 65) / 2;
  CContactManager::PostKeystateFeedbackUpdate(v3, v4, v2, &v6, (v2 & 0x1F) != 0);
  return 0LL;
}
