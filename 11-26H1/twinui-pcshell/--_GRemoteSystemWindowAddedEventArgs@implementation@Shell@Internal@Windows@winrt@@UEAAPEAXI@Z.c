/*
 * XREFs of ??_GRemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18064A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18064A1E4 (--1RemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
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
