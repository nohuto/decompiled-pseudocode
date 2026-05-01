/*
 * XREFs of ??_G?$heap_implements@VTouchEdgeGripperWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x180571F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchEdgeGripperWindow@@UEAA@XZ @ 0x1805751DC (--1TouchEdgeGripperWindow@@UEAA@XZ.c)
 */

TouchEdgeGripperWindow *__fastcall winrt::impl::heap_implements<TouchEdgeGripperWindow>::`scalar deleting destructor'(
        TouchEdgeGripperWindow *a1,
        char a2)
{
  TouchEdgeGripperWindow::~TouchEdgeGripperWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA8);
  return a1;
}
