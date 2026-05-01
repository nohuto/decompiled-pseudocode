/*
 * XREFs of ??_E?$heap_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18064A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18064A5A0 (--1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

unsigned int **__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>::`vector deleting destructor'(
        unsigned int **a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::~NetworkConnectionUtils(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
