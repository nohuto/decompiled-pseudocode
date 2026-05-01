/*
 * XREFs of DefSubclassProc @ 0x1802D81A4
 * Callers:
 *     ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x18044D3E0 (-s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x18044FC00 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802D8288 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __stdcall DefSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  LRESULT result; // rax

  result = qword_1808D8410;
  if ( qword_1808D8410 == -1 )
  {
    GetProcFromComCtl32(&qword_1808D8410, 413LL);
    result = qword_1808D8410;
  }
  if ( result )
    return ((__int64 (__fastcall *)(HWND, _QWORD, WPARAM, LPARAM))result)(hWnd, uMsg, wParam, lParam);
  return result;
}
