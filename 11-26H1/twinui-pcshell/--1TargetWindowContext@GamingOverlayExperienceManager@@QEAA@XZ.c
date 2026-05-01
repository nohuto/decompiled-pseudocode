/*
 * XREFs of ??1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ @ 0x1803423E8
 * Callers:
 *     _GamingOverlayExperienceManager::WndProc_::_1_::dtor$0 @ 0x1806E58E9 (_GamingOverlayExperienceManager--WndProc_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::WndProc_::_1_::dtor$1 @ 0x1806E58FB (_GamingOverlayExperienceManager--WndProc_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D2E8 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

void __fastcall GamingOverlayExperienceManager::TargetWindowContext::~TargetWindowContext(
        GamingOverlayExperienceManager::TargetWindowContext *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v2, *((_QWORD *)this + 1));
    std::_Deallocate<16>(
      *(void **)this,
      (struct std::nothrow_t *)((*((_QWORD *)this + 2) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
