/*
 * XREFs of ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x1802CB25C
 * Callers:
 *     ?OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180244DE0 (-OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180244EE0 (-OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        struct IApplicationFrame *a2)
{
  __int64 v2; // rcx
  char v3; // bl

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
    return (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v2 + 24LL))(v2, a2) != 0;
  return v3;
}
