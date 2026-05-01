/*
 * XREFs of ??_GCMultitaskingViewManager@@UEAAPEAXI@Z @ 0x180224FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180224FDC (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMultitaskingViewManager *__fastcall CMultitaskingViewManager::`scalar deleting destructor'(
        CMultitaskingViewManager *this,
        char a2)
{
  CMultitaskingViewManager::~CMultitaskingViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}
