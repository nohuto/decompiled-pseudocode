/*
 * XREFs of ?ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18020508C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1802668B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldTrySetThumbnail(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  RTL_SRWLOCK *v2; // rbx
  int Ptr; // eax

  v1 = this + 21;
  v2 = this;
  _Platform_AcquireSRWLockExclusive(this + 21);
  Ptr = (int)v2[17].Ptr;
  LODWORD(v2[17].Ptr) = 2;
  LOBYTE(v2) = Ptr <= 0;
  ReleaseSRWLockExclusive_0(v1);
  return (char)v2;
}
