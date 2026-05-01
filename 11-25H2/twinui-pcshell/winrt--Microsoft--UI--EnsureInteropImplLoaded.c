/*
 * XREFs of winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x180441BFC
 * Callers:
 *     winrt::Microsoft::UI::GetWindowFromWindowId @ 0x180442028 (winrt--Microsoft--UI--GetWindowFromWindowId.c)
 *     winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x1804420A0 (winrt--Microsoft--UI--GetWindowIdFromWindow.c)
 * Callees:
 *     ??$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z @ 0x180441190 (--$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z.c)
 */

char winrt::Microsoft::UI::EnsureInteropImplLoaded()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rax
  char v2; // cl
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]

  if ( !winrt::Microsoft::UI::s_module )
  {
    ModuleHandleW = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if ( ModuleHandleW || (ModuleHandleW = LoadLibraryW(L"Microsoft.Internal.FrameworkUdk.dll")) != 0LL )
    {
      winrt::Microsoft::UI::s_impl = GetProcAddress(ModuleHandleW, "Windowing_GetWindowIdFromWindow");
      qword_18089C3D8 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetWindowFromWindowId");
      qword_18089C3E0 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetDisplayIdFromMonitor");
      qword_18089C3E8 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetMonitorFromDisplayId");
      qword_18089C3F0 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetIconIdFromIcon");
      ProcAddress = GetProcAddress(ModuleHandleW, "Windowing_GetIconFromIconId");
      v4 = 0;
      v5 = 0LL;
      qword_18089C3F8 = (__int64)ProcAddress;
      v2 = winrt::Microsoft::UI::s_impl
        && qword_18089C3D8
        && qword_18089C3E0
        && qword_18089C3E8
        && qword_18089C3F0
        && ProcAddress;
      winrt::check_bool<bool>(v2, (winrt *)&v4);
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&winrt::Microsoft::UI::s_module,
        (signed __int64)ModuleHandleW,
        0LL);
    }
  }
  v4 = 0;
  v5 = 0LL;
  return winrt::check_bool<bool>(winrt::Microsoft::UI::s_module != 0LL, (winrt *)&v4);
}
