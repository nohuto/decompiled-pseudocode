/*
 * XREFs of ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180498A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MultitaskingViewVisibilityService@@UEAA@XZ @ 0x1804989F4 (--1MultitaskingViewVisibilityService@@UEAA@XZ.c)
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
