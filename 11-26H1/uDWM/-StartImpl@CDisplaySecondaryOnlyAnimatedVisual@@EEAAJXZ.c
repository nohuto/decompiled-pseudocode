/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3900
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180070D5C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800DE334 (-SetCenter@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StartImpl(CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int updated; // ebx
  __int64 v3; // rdx
  LONG v5; // r8d
  CWindowList *v6; // rsi
  LONG v7; // edx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  GetDesktopID(1LL, &v10);
  updated = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this);
  if ( updated < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v5 = 0;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  if ( *((_DWORD *)this + 57) - *((_DWORD *)this + 55) >= 0 )
    v5 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
  v7 = 0;
  if ( *((_DWORD *)this + 56) - *((_DWORD *)this + 54) >= 0 )
    v7 = *((_DWORD *)this + 56) - *((_DWORD *)this + 54);
  CVisual::SetSize(this, v7, v5);
  CVisual::SetCenter(this, (float)*((int *)this + 16) * 0.5, (float)*((int *)this + 17) * 0.5);
  updated = CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(this, v8);
  if ( updated < 0 )
  {
    v3 = 64LL;
    goto LABEL_3;
  }
  updated = CWindowList::ForceUpdateScene(v6);
  if ( updated < 0 )
  {
    v3 = 71LL;
    goto LABEL_3;
  }
  return 0LL;
}
