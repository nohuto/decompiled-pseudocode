/*
 * XREFs of ??_GCMultitaskingViewHotKeyHandler@@UEAAPEAXI@Z @ 0x18048EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewHotKeyHandler@@UEAA@XZ @ 0x18048EA5C (--1CMultitaskingViewHotKeyHandler@@UEAA@XZ.c)
 */

CMultitaskingViewHotKeyHandler *__fastcall CMultitaskingViewHotKeyHandler::`scalar deleting destructor'(
        CMultitaskingViewHotKeyHandler *this,
        char a2)
{
  CMultitaskingViewHotKeyHandler::~CMultitaskingViewHotKeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
