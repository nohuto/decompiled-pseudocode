/*
 * XREFs of ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18061509C
 * Callers:
 *     ?perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180617EA0 (-perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2)
{
  void (__fastcall **v4)(char *); // rax

  v4 = (void (__fastcall **)(char *))operator new(0xA0uLL);
  v4[19] = a1;
  *v4 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1;
  *((_DWORD *)v4 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v4 + 144) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1((char *)v4);
  return a2;
}
