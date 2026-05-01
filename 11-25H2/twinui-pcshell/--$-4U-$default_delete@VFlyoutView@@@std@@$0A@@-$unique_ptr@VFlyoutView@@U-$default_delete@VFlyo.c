/*
 * XREFs of ??$?4U?$default_delete@VFlyoutView@@@std@@$0A@@?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805CD25C
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805D0108 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall std::unique_ptr<FlyoutView>::operator=<std::default_delete<FlyoutView>,0>(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4, (const struct std::nothrow_t *)8);
  return a1;
}
