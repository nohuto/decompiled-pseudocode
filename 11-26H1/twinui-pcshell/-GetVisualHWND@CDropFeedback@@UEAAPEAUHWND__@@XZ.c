/*
 * XREFs of ?GetVisualHWND@CDropFeedback@@UEAAPEAUHWND__@@XZ @ 0x1804B3550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDropFeedback::GetVisualHWND(CDropFeedback *this)
{
  return (HWND)*((_QWORD *)this + 4);
}
