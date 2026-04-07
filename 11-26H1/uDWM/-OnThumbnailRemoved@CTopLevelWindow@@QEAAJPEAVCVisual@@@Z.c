/*
 * XREFs of ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008B81C
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025680 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailRemoved(CTopLevelWindow *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  CContainerVisual *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  int v7; // r9d
  _BOOL8 v8; // rdx
  int v9; // eax

  v3 = 0;
  v4 = (CContainerVisual *)*((_QWORD *)this + 66);
  if ( v4 )
  {
    v5 = CContainerVisual::RemoveChild(v4, a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x718u, 0LL);
    }
    else
    {
      v8 = *((_QWORD *)this + 58) != 0LL;
      if ( *(_DWORD *)(*((_QWORD *)this + 66) + 168LL) == v8 )
      {
        v9 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 87), v8, v6, v7);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x71Fu, 0LL);
      }
    }
  }
  return v3;
}
