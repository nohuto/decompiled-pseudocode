/*
 * XREFs of ??_G?$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805D6E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowRegistration@@UEAA@XZ @ 0x1805D6E24 (--1WindowRegistration@@UEAA@XZ.c)
 */

WindowRegistration *__fastcall winrt::impl::heap_implements<WindowRegistration>::`scalar deleting destructor'(
        WindowRegistration *a1,
        char a2)
{
  WindowRegistration::~WindowRegistration(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
