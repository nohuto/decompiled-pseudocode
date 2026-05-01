/*
 * XREFs of ?WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAUHWND__@@@Z @ 0x1802B4434
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1801044EC (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper(
        HMODULE *this,
        struct IUnknown *a2,
        HWND a3)
{
  FARPROC ProcAddress; // rax
  const char *v6; // r9
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = GetProcAddress(*this, "WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindow");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3F,
      (unsigned int)"pcshell\\twinui\\XamlExplorerHost\\lib\\WinUICohabitationFunctions.h",
      v6);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, HWND))ProcAddress)(a2, a3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v7,
      v8);
}
