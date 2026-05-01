/*
 * XREFs of ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x1802E6778
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E6F30 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

char __fastcall CApplicationManager::TryClosePopupForWindow(CApplicationManager *this, HWND a2)
{
  char v3; // bl
  HWND LastActivePopup; // rsi
  HMENU SystemMenu; // rdi
  tagMENUITEMINFOW mii; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  LastActivePopup = GetLastActivePopup(a2);
  if ( LastActivePopup != a2 && !IsWindowEnabled(a2) )
  {
    SystemMenu = GetSystemMenu(LastActivePopup, 0);
    if ( SystemMenu )
    {
      mii.cbSize = 80;
      memset_0(&mii.fMask, 0, 0x4CuLL);
      if ( GetMenuItemInfoW(SystemMenu, 0xF060u, 0, &mii) )
      {
        if ( (mii.fState & 3) == 0 )
        {
          v3 = 1;
          PostMessageW(LastActivePopup, 0x112u, 0xF060uLL, 0LL);
        }
      }
    }
  }
  return v3;
}
