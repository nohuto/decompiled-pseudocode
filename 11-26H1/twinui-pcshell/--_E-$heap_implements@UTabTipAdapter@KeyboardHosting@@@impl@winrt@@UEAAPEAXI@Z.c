/*
 * XREFs of ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z @ 0x180168F80
 * Callers:
 *     ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x18046B7A0 (--_E-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x180168FBC (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vector deleting destructor'(
        KeyboardHosting::TabTipAdapter *a1,
        char a2)
{
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x248);
  return a1;
}
