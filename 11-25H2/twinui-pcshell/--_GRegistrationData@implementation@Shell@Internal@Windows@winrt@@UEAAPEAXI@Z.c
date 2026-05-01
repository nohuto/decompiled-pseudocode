/*
 * XREFs of ??_GRegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180619BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1806190A8 (--1RegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::Windows::Internal::Shell::implementation::RegistrationData::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RegistrationData::~RegistrationData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
