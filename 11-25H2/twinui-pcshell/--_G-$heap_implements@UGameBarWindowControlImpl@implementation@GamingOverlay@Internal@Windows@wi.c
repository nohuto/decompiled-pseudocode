/*
 * XREFs of ??_G?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180342930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ @ 0x180341568 (--1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::`scalar deleting destructor'(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *Block,
        char a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::~GameBarWindowControlImpl(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
