/*
 * XREFs of ?ShowContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18063B218
 * Callers:
 *     ?Show@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B0C0 (-Show@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x18063B0E0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_ResumeC.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v5[9] = a1;
  *v5 = winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 64) = 0;
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__ResumeCoro_1((__int64)v5);
  return a2;
}
