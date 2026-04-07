/*
 * XREFs of ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800BD65C
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180059E38 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
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
