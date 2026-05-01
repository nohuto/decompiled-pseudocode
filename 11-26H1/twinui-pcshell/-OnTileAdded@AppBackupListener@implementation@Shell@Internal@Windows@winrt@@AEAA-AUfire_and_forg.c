/*
 * XREFs of ?OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileAddedEventArgs@9UI@WindowsUdk@6@@Z @ 0x180615640
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x180615350 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  void (__fastcall *v8)(char *); // rax
  void (__fastcall *v9)(char *); // rax
  void (__fastcall **v11)(char *); // [rsp+60h] [rbp+8h]

  v11 = (void (__fastcall **)(char *))operator new(0xE0uLL);
  v11[25] = a1;
  v8 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v11[26] = v8;
  v9 = *(void (__fastcall **)(char *))a4;
  *(_QWORD *)a4 = 0LL;
  v11[27] = v9;
  *v11 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1;
  *((_DWORD *)v11 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v11 + 192) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1((char *)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
