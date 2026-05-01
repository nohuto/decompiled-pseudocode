/*
 * XREFs of ??_GAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805EE1EC
 * Callers:
 *     ??_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1805EE0A0 (--_EAppBackupListener@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805EDC6C (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::~AppBackupListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
