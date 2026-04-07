/*
 * XREFs of ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800B35D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::StartImpl(CDisplayBlackCurtainAnimatedVisual *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  GetDesktopID(1LL, &v6);
  v2 = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this);
  if ( v2 < 0 )
  {
    v3 = 53LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v2 < 0 )
  {
    v3 = 54LL;
    goto LABEL_3;
  }
  return 0LL;
}
