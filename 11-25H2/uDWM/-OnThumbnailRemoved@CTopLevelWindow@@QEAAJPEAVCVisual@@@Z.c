/*
 * XREFs of ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180098678
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180060E14 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailRemoved(CTopLevelWindow *this, struct CVisualProxy **a2)
{
  unsigned int v3; // ebx
  CContainerVisual *v4; // rcx
  int v5; // eax
  int v6; // eax

  v3 = 0;
  v4 = (CContainerVisual *)*((_QWORD *)this + 68);
  if ( v4 )
  {
    v5 = CContainerVisual::RemoveChild(v4, a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x793u, 0LL);
    }
    else if ( *(_DWORD *)(*((_QWORD *)this + 68) + 176LL) == (*((_QWORD *)this + 60) != 0LL) )
    {
      v6 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 89));
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x79Au, 0LL);
    }
  }
  return v3;
}
