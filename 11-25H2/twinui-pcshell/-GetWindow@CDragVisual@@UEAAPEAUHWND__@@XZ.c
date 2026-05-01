/*
 * XREFs of ?GetWindow@CDragVisual@@UEAAPEAUHWND__@@XZ @ 0x18051E3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDragVisual::GetWindow(CDragVisual *this)
{
  return (HWND)*((_QWORD *)this + 16);
}
