/*
 * XREFs of ??_G?$heap_implements@VTouchEdgeGripperWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805958A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchEdgeGripperWindow@@UEAA@XZ @ 0x18059890C (--1TouchEdgeGripperWindow@@UEAA@XZ.c)
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
