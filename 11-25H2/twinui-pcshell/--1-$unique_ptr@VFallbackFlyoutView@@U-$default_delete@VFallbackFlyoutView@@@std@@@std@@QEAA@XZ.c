/*
 * XREFs of ??1?$unique_ptr@VFallbackFlyoutView@@U?$default_delete@VFallbackFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805D60E4
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805D0108 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FallbackFlyoutView@@QEAA@XZ @ 0x1805D6114 (--1FallbackFlyoutView@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<FallbackFlyoutView>::~unique_ptr<FallbackFlyoutView>(FallbackFlyoutView **a1)
{
  FallbackFlyoutView *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    FallbackFlyoutView::~FallbackFlyoutView(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
