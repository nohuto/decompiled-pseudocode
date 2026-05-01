/*
 * XREFs of ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x180555F00
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$FailureTrace@AEAY0CL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CL@$$CBD$$QEAJ@Z @ 0x1805542B8 (--$FailureTrace@AEAY0CL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CL@$$CBD$$QEAJ@Z.c)
 *     ?TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@PEAU8@@Z @ 0x180557D7C (-TryToGetInputSiteWindow@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 */

HWND __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetInitialTargetWindowFromPoint(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        const struct tagPOINT *a2,
        HWND a3,
        HWND a4)
{
  HWND result; // rax
  const char *v7; // r9
  HWND v8; // rax
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

  Point = (struct tagPOINT)this;
  if ( a4 )
    return a4;
  while ( 1 )
  {
    Point = *a2;
    if ( !ScreenToClient(a3, &Point) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xFD,
        (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        v7);
    v8 = ChildWindowFromPointEx(a3, Point, 5u);
    if ( a3 == v8 || !v8 )
      break;
    a3 = v8;
  }
  result = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::TryToGetInputSiteWindow(
             v9,
             a3);
  if ( !result )
  {
    result = a3;
    if ( !a3 )
    {
      Point.x = -2147467259;
      DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[43],long>();
      return 0LL;
    }
  }
  return result;
}
