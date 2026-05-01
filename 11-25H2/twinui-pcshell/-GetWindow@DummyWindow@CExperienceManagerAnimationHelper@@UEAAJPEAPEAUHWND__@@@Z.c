/*
 * XREFs of ?GetWindow@DummyWindow@CExperienceManagerAnimationHelper@@UEAAJPEAPEAUHWND__@@@Z @ 0x18065D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExperienceManagerAnimationHelper::DummyWindow::GetWindow(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 3);
  return 0LL;
}
