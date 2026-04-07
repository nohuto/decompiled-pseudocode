/*
 * XREFs of ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800AFEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800AFBAC (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::StartImpl(CDisplayDuplicateAnimatedVisual *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDisplayDuplicateAnimatedVisual::CaptureAndScheduleExitAnimation(this);
  if ( v2 < 0 )
  {
    v3 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v2 < 0 )
  {
    v3 = 49LL;
    goto LABEL_3;
  }
  return 0LL;
}
