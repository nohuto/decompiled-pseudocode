/*
 * XREFs of ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x18028631C
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z @ 0x180286380 (-CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180286810 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CVisualCapture::CheckForRenderCompleted(CVisualCapture *this)
{
  if ( *((_DWORD *)this + 608) == 2 )
  {
    if ( WaitForSingleObject(*((HANDLE *)this + 303), 0) )
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x400u);
    else
      CVisualCapture::SendCaptureCompleted(this);
  }
}
