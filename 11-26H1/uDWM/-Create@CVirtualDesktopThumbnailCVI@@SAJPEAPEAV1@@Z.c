/*
 * XREFs of ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800669B0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800505F0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18008AFC8 (--0CDesktopThumbnailCVI@@IEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::Create(struct CVirtualDesktopThumbnailCVI **a1)
{
  int TrustLevel; // edi
  CDesktopThumbnailCVI *v3; // rax
  CDesktopThumbnailCVI *v4; // rbx

  if ( a1 )
  {
    v3 = (CDesktopThumbnailCVI *)DefaultHeap::AllocClear(0x50uLL);
    v4 = v3;
    if ( v3 )
    {
      CDesktopThumbnailCVI::CDesktopThumbnailCVI(v3);
      *(_QWORD *)v4 = &CVirtualDesktopThumbnailCVI::`vftable';
      *(_OWORD *)((char *)v4 + 56) = 0LL;
      TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
      if ( TrustLevel >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      TrustLevel = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TrustLevel, 0x7Eu, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    TrustLevel = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Eu, 0LL);
  }
  return (unsigned int)TrustLevel;
}
