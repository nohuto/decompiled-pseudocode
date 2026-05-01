/*
 * XREFs of ?IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802E8D70
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801F024C (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 * Callees:
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094830 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094858 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800955AC (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsTrayWindowCheck(CApplicationManagerUtility *hWnd, HWND a2)
{
  HWND v3; // rdx
  char v4; // bl
  HWND v5; // rdx

  v4 = 0;
  if ( CApplicationManagerUtility::IsForcedAppWindow(hWnd, a2)
    || CApplicationManagerUtility::IsTrayWindowStyleCheck((HWND)hWnd, v3)
    && !CApplicationManagerUtility::IsOwnedWindow(hWnd, v5) )
  {
    return 1;
  }
  return v4;
}
