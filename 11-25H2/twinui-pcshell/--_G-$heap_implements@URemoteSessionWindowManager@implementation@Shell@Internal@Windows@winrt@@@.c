/*
 * XREFs of ??_G?$heap_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18062FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18062F8C0 (--1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::~RemoteSessionWindowManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x130);
  return a1;
}
