/*
 * XREFs of ?OnTileRemoved@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileRemovedEventArgs@9UI@WindowsUdk@6@@Z @ 0x180615B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180615980 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  void (__fastcall *v8)(char *); // rax
  void (__fastcall *v9)(char *); // rax
  void (__fastcall **v11)(char *); // [rsp+60h] [rbp+8h]

  v11 = (void (__fastcall **)(char *))operator new(0x90uLL);
  v11[15] = a1;
  v8 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v11[16] = v8;
  v9 = *(void (__fastcall **)(char *))a4;
  *(_QWORD *)a4 = 0LL;
  v11[17] = v9;
  *v11 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1;
  *((_DWORD *)v11 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v11 + 112) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1((char *)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
