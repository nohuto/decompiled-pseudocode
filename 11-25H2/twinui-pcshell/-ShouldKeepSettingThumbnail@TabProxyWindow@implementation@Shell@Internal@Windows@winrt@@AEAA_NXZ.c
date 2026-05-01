/*
 * XREFs of ?ShouldKeepSettingThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1801F8F58
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EAC0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldKeepSettingThumbnail(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v2; // rdi

  v1 = this + 21;
  v2 = this;
  _Platform_AcquireSRWLockExclusive(this + 21);
  LOBYTE(v2) = --LODWORD(v2[17].Ptr) > 0;
  ReleaseSRWLockExclusive_0(v1);
  return (char)v2;
}
