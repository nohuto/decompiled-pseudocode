/*
 * XREFs of ?IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@Z @ 0x1800DB76C
 * Callers:
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DC890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsVisibleWindow(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CWindowData *a2)
{
  char v3; // di
  char v4; // dl
  bool v5; // cl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = 1;
  GetDesktopID(1LL, &v7);
  if ( !a2 )
    return 0;
  if ( !*((_QWORD *)a2 + 55) )
    return 0;
  v4 = *((_BYTE *)a2 + 736);
  if ( (v4 & 1) == 0 )
    return 0;
  v5 = 0;
  if ( (v4 & 4) == 0 )
    v5 = (*((_BYTE *)a2 + 740) & 1) == 0;
  if ( !v5 || (*((_DWORD *)a2 + 29) & 0x20000000) != 0 || !*((_QWORD *)a2 + 5) )
    return 0;
  return v3;
}
