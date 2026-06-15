/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180042B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x1800429BC (--1CAastPreStartContext@@UEAA@XZ.c)
 */

CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        char a2)
{
  CAastPreStartContext::~CAastPreStartContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
