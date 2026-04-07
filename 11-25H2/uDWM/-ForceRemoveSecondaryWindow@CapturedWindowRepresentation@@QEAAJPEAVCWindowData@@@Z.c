/*
 * XREFs of ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A9314
 * Callers:
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180073788 (-_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x1800251EC (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A8E48 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
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
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    DynArray<CAnimationComponent *,0>::RemoveAt(v5, v4);
    CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v6);
  }
  return 0LL;
}
