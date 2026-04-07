/*
 * XREFs of ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::StartImpl(
        CDisplayMixedModeAnimatedVisual *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation(this, a2, a3, a4);
  if ( v5 < 0 )
  {
    v6 = 46LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v5 < 0 )
  {
    v6 = 48LL;
    goto LABEL_3;
  }
  return 0LL;
}
