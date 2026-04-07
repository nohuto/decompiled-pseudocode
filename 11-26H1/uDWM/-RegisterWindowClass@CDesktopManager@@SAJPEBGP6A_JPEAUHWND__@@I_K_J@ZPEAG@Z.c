/*
 * XREFs of ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18007B2EC
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::RegisterWindowClass(
        const unsigned __int16 *a1,
        __int64 (*a2)(HWND, unsigned int, unsigned __int64, __int64),
        unsigned __int16 *a3)
{
  unsigned int v3; // esi
  signed int v5; // edi
  ATOM v6; // ax
  signed int LastError; // eax
  WNDCLASSW WndClass; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  v5 = 0;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpszClassName = L"LivePreview";
  WndClass.lpfnWndProc = (WNDPROC)CDesktopManager::DwmLivePreviewWndProc;
  WndClass.hInstance = g_hInstance;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  SetLastError(0);
  v6 = RegisterClassW(&WndClass);
  *a3 = v6;
  if ( !v6 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F8D54, 1LL, v5, 0x7D9u, 0LL);
  }
  if ( v5 != -2147023486 )
    return (unsigned int)v5;
  return v3;
}
