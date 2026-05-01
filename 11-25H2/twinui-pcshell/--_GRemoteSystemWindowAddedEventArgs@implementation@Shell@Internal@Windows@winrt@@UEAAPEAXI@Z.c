/*
 * XREFs of ??_GRemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180624B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1806244F0 (--1RemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs::~RemoteSystemTimeOutInfoChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
