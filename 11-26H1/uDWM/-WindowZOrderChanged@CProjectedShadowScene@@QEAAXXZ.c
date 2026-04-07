/*
 * XREFs of ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800BE160
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x18004DDF4 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProjectedShadowScene::WindowZOrderChanged(CProjectedShadowScene *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
