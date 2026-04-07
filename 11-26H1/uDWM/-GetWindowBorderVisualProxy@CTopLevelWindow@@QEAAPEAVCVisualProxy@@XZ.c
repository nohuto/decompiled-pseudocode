/*
 * XREFs of ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CB6B8
 * Callers:
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CTopLevelWindow::GetWindowBorderVisualProxy(CTopLevelWindow *this)
{
  struct CVisualProxy *result; // rax

  result = (struct CVisualProxy *)*((_QWORD *)this + 26);
  if ( result )
    return (struct CVisualProxy *)*((_QWORD *)result + 2);
  return result;
}
