/*
 * XREFs of ??_E?$heap_implements@VTouchEdgeGripperHost@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchEdgeGripperHost@@UEAA@XZ @ 0x180595810 (--1TouchEdgeGripperHost@@UEAA@XZ.c)
 */

TouchEdgeGripperHost *__fastcall winrt::impl::heap_implements<TouchEdgeGripperHost>::`vector deleting destructor'(
        TouchEdgeGripperHost *a1,
        char a2)
{
  TouchEdgeGripperHost::~TouchEdgeGripperHost(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x100);
  return a1;
}
