/*
 * XREFs of ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180487D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MultitaskingViewVisibilityService@@UEAA@XZ @ 0x180487D14 (--1MultitaskingViewVisibilityService@@UEAA@XZ.c)
 */

MultitaskingViewVisibilityService *__fastcall MultitaskingViewVisibilityService::`vector deleting destructor'(
        MultitaskingViewVisibilityService *this,
        char a2)
{
  MultitaskingViewVisibilityService::~MultitaskingViewVisibilityService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
