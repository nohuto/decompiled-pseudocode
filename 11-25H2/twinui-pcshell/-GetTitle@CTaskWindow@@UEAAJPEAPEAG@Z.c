/*
 * XREFs of ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180306330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskWindow::GetTitle(CTaskWindow *this, unsigned __int16 **a2)
{
  *a2 = 0LL;
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
           (__int64 *)this + 8,
           a2);
}
