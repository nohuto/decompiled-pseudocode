/*
 * XREFs of ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x180485A84
 * Callers:
 *     ??_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z @ 0x180485A30 (--_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180485958 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
