/*
 * XREFs of ??_G?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180345230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ @ 0x1803425A0 (--1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ.c)
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
