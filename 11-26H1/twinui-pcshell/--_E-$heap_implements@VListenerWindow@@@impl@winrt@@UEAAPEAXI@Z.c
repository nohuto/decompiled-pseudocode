/*
 * XREFs of ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805F3F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ListenerWindow@@UEAA@XZ @ 0x1805F8A34 (--1ListenerWindow@@UEAA@XZ.c)
 */

ListenerWindow *__fastcall winrt::impl::heap_implements<ListenerWindow>::`vector deleting destructor'(
        ListenerWindow *a1,
        char a2)
{
  ListenerWindow::~ListenerWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
