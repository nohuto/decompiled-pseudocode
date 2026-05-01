/*
 * XREFs of ??_GCMultitaskingViewHotKeyHandler@@UEAAPEAXI@Z @ 0x18049F700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewHotKeyHandler@@UEAA@XZ @ 0x18049F6B0 (--1CMultitaskingViewHotKeyHandler@@UEAA@XZ.c)
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
