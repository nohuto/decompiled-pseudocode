/*
 * XREFs of ??_G?$heap_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180675F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180675DA0 (--1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA.c)
 */

winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::~EdgeAnimationRelationshipManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x110);
  return a1;
}
