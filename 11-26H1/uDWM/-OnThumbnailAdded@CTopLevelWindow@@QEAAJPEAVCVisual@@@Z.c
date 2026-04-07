/*
 * XREFs of ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008ADF4
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180059450 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E0750 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x1800E3B60 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailAdded(CContainerVisual **this, struct CVisual *a2)
{
  int v3; // eax
  int v4; // r9d
  unsigned int v5; // ebx
  __int64 v6; // r8
  int v7; // eax

  v3 = CContainerVisual::AddChild(this[66], a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x6FAu, 0LL);
  }
  else
  {
    v6 = (unsigned int)(this[58] != 0LL) + 1;
    if ( *((_DWORD *)this[66] + 42) == (_DWORD)v6 )
    {
      v7 = CWindowData::NotifyRepresentationChanged(this[87], -(__int64)this[58], v6, v4);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x700u, 0LL);
    }
  }
  return v5;
}
