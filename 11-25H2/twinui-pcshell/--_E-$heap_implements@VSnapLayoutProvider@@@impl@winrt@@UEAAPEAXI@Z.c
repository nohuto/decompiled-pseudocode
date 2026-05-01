/*
 * XREFs of ??_E?$heap_implements@VSnapLayoutProvider@@@impl@winrt@@UEAAPEAXI@Z @ 0x18057AC5C
 * Callers:
 *     ??_ESnapLayoutProvider@@W7EAAPEAXI@Z @ 0x18057AAE0 (--_ESnapLayoutProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x18057A5AC (--1SnapLayoutProvider@@UEAA@XZ.c)
 */

SnapLayoutProvider *__fastcall winrt::impl::heap_implements<SnapLayoutProvider>::`vector deleting destructor'(
        SnapLayoutProvider *a1,
        char a2)
{
  SnapLayoutProvider::~SnapLayoutProvider(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA0);
  return a1;
}
