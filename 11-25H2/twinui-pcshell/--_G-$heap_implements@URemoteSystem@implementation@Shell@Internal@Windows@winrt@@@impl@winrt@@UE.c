/*
 * XREFs of ??_G?$heap_implements@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180624BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSystem@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180624564 (--1RemoteSystem@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystem>::`scalar deleting destructor'(
        volatile signed __int32 **a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystem::~RemoteSystem(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
