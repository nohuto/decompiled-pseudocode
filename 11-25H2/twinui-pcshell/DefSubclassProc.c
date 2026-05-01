/*
 * XREFs of DefSubclassProc @ 0x1802DF494
 * Callers:
 *     ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x180440DA0 (-s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x180443550 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DF578 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __stdcall DefSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  LRESULT result; // rax

  result = qword_180897E00;
  if ( qword_180897E00 == -1 )
  {
    GetProcFromComCtl32(&qword_180897E00, 413LL);
    result = qword_180897E00;
  }
  if ( result )
    return ((__int64 (__fastcall *)(HWND, _QWORD, WPARAM, LPARAM))result)(hWnd, uMsg, wParam, lParam);
  return result;
}
