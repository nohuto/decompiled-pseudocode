/*
 * XREFs of ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18003A504
 * Callers:
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x18003993C (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18003A5F0 (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x18003AC28 (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z @ 0x18009BFFC (--_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C02C (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C614 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
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
      CapturedWindowRepresentation::SecondaryWindow::`scalar deleting destructor'(
        (CapturedWindowRepresentation::SecondaryWindow *)v11,
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
