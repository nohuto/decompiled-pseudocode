/*
 * XREFs of winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18044E320
 * Callers:
 *     winrt::Microsoft::UI::GetWindowFromWindowId @ 0x18044E748 (winrt--Microsoft--UI--GetWindowFromWindowId.c)
 *     winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x18044E7C4 (winrt--Microsoft--UI--GetWindowIdFromWindow.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180450ECC (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z @ 0x18044D878 (--$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z.c)
 */

char winrt::Microsoft::UI::EnsureInteropImplLoaded()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rax
  char v2; // cl
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]

  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&winrt::Microsoft::UI::s_module, 0LL, 0LL) )
  {
    ModuleHandleW = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if ( ModuleHandleW || (ModuleHandleW = LoadLibraryW(L"Microsoft.Internal.FrameworkUdk.dll")) != 0LL )
    {
      winrt::Microsoft::UI::s_impl = GetProcAddress(ModuleHandleW, "Windowing_GetWindowIdFromWindow");
      qword_1808DCA90 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetWindowFromWindowId");
      qword_1808DCA98 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetDisplayIdFromMonitor");
      qword_1808DCAA0 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetMonitorFromDisplayId");
      qword_1808DCAA8 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetIconIdFromIcon");
      ProcAddress = GetProcAddress(ModuleHandleW, "Windowing_GetIconFromIconId");
      v5 = 0LL;
      qword_1808DCAB0 = (__int64)ProcAddress;
      v4 = 0;
      if ( !winrt::Microsoft::UI::s_impl
        || !qword_1808DCA90
        || !qword_1808DCA98
        || !qword_1808DCAA0
        || !qword_1808DCAA8
        || (v2 = 1, !ProcAddress) )
      {
        v2 = 0;
      }
      winrt::check_bool<bool>(v2, (winrt *)&v4);
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&winrt::Microsoft::UI::s_module,
        (signed __int64)ModuleHandleW,
        0LL);
    }
  }
  v4 = 0;
  v5 = 0LL;
  return winrt::check_bool<bool>(
           _InterlockedCompareExchange64((volatile signed __int64 *)&winrt::Microsoft::UI::s_module, 0LL, 0LL) != 0,
           (winrt *)&v4);
}
