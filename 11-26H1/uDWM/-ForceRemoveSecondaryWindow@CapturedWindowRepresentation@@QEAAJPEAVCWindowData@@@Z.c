/*
 * XREFs of ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18009C4D4
 * Callers:
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x180066260 (-_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x18003AC28 (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z @ 0x18009BFFC (--_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::ForceRemoveSecondaryWindow(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  int SecondaryWindow; // eax
  unsigned int v4; // edi
  __int64 *v5; // rsi
  CBaseObject **v6; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SecondaryWindow = CapturedWindowRepresentation::FindSecondaryWindow((CapturedWindowRepresentation *)this, a2);
  v4 = SecondaryWindow;
  if ( SecondaryWindow > 0 )
  {
    _mm_lfence();
    v5 = (__int64 *)(this + 6);
    v6 = (CBaseObject **)*((_QWORD *)this[6] + (unsigned int)SecondaryWindow);
    v7 = CContainerVisualProxy::RemoveChild(this[5], v6[1]);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (int)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    DynArray<CAnimationComponent *,0>::RemoveAt(v5, v4);
    CapturedWindowRepresentation::SecondaryWindow::`scalar deleting destructor'(v6);
  }
  return 0LL;
}
