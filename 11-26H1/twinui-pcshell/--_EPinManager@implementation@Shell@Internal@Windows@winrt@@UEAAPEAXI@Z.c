/*
 * XREFs of ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E4598
 * Callers:
 *     ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z @ 0x1805E4400 (--_EPinManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805E37DC (--1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
