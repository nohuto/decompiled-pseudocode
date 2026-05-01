/*
 * XREFs of SetWindowSubclass @ 0x1802D821C
 * Callers:
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x18044D110 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHI@Z @ 0x18044F950 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerH.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802D8288 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __stdcall SetWindowSubclass(HWND hWnd, SUBCLASSPROC pfnSubclass, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
{
  __int64 (__fastcall *v4)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR); // rax

  v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_1808D8418;
  if ( qword_1808D8418 == -1 )
  {
    GetProcFromComCtl32(&qword_1808D8418, 410LL);
    v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_1808D8418;
  }
  if ( v4 )
    LODWORD(v4) = v4(hWnd, pfnSubclass, 0LL, dwRefData);
  return (int)v4;
}
