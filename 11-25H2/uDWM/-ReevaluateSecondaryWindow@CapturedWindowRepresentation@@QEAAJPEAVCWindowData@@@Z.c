/*
 * XREFs of ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224
 * Callers:
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180024318 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x1800251EC (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x180025634 (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A8E48 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A8E74 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::ReevaluateSecondaryWindow(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  __int64 SecondaryWindow; // rsi
  struct CWindowData *v5; // rdx
  bool ShouldInclude; // al
  int updated; // ebx
  __int64 v9; // rdx
  char *v10; // rdi
  struct CVisualProxy **v11; // rbp
  unsigned int v12; // edx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SecondaryWindow = (unsigned int)CapturedWindowRepresentation::FindSecondaryWindow(
                                    (CapturedWindowRepresentation *)this,
                                    a2);
  ShouldInclude = CapturedWindowRepresentation::ShouldInclude((CapturedWindowRepresentation *)this, v5);
  if ( ShouldInclude == (int)SecondaryWindow >= 0 )
  {
    if ( ShouldInclude )
    {
      updated = CapturedWindowRepresentation::UpdateSecondaryWindowProperties((CapturedWindowRepresentation *)this, a2);
      if ( updated < 0 )
      {
        v9 = 77LL;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( ShouldInclude )
  {
    updated = CapturedWindowRepresentation::AddSecondaryWindow((CapturedWindowRepresentation *)this, a2);
    if ( updated >= 0 )
      return 0LL;
    v9 = 64LL;
  }
  else
  {
    v10 = (char *)(this + 6);
    v11 = (struct CVisualProxy **)*((_QWORD *)this[6] + SecondaryWindow);
    updated = CContainerVisualProxy::RemoveChild(this[5], v11[1]);
    if ( updated >= 0 )
    {
      DynArray<CAnimationComponent *,0>::RemoveAt(v10, (unsigned int)SecondaryWindow);
      CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(
        (CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v11,
        v12);
      return 0LL;
    }
    v9 = 69LL;
  }
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)updated,
    v13);
  return (unsigned int)updated;
}
