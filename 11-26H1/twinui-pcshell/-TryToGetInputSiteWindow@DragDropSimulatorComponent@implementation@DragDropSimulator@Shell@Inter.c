/*
 * XREFs of ?TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@PEAU8@@Z @ 0x18057BD44
 * Callers:
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18057A0C0 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18057BA60 (-TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z.c)
 */

HWND __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::TryToGetInputSiteWindow(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        HWND a2)
{
  HWND Window; // rdi
  int v4; // r15d
  int v5; // r14d
  HMONITOR v6; // rax
  HANDLE PropW; // rbx
  HANDLE v8; // rax
  DWORD dwProcessId; // [rsp+20h] [rbp-30h] BYREF
  DWORD v11; // [rsp+24h] [rbp-2Ch] BYREF
  int v12; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF

  Rect = 0LL;
  if ( !a2 )
    return 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return 0LL;
  Window = GetWindow(a2, 5u);
  if ( !Window )
    return 0LL;
  dwProcessId = 0;
  v11 = 0;
  GetWindowThreadProcessId(a2, &dwProcessId);
  GetWindowThreadProcessId(Window, &v11);
  if ( !dwProcessId || dwProcessId != v11 )
    return 0LL;
  v4 = Rect.left - Rect.right;
  if ( Rect.left - Rect.right < 0 )
    v4 = Rect.right - Rect.left;
  v5 = Rect.top - Rect.bottom;
  if ( Rect.top - Rect.bottom < 0 )
    v5 = Rect.bottom - Rect.top;
  v6 = MonitorFromRect(&Rect, 0);
  v12 = 100;
  if ( (int)GetScaleFactorForMonitor(v6, &v12) >= 0 && v12 )
  {
    v4 = (int)(float)((float)((float)v4 * 100.0) / (float)v12);
    v5 = (int)(float)((float)((float)v5 * 100.0) / (float)v12);
  }
  PropW = GetPropW(Window, L"UIA_HWNDWidth");
  v8 = GetPropW(Window, L"UIA_HWNDHeight");
  if ( (__int64)PropW < v4 || (__int64)v8 < v5 )
    return 0LL;
  DragDropSimulatorTelemetryProvider::TraceFoundInputSiteWindow(a2, Window);
  return Window;
}
