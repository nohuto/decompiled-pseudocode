/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00
 * Callers:
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B080 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180022BFC (-Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18005AC68 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int inserted; // ebx
  struct CWindowData *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  int updated; // eax
  struct _MARGINS v8; // [rsp+30h] [rbp-18h] BYREF

  inserted = 0;
  if ( !*((_QWORD *)this + 58) )
  {
    v4 = (struct CWindowData *)*((_QWORD *)this + 87);
    if ( *((_QWORD *)v4 + 18) )
    {
      v5 = CClientArea::Create(v4, (struct CClientArea **)this + 58);
      inserted = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x85Bu, 0LL);
      }
      else
      {
        inserted = CContainerVisual::InsertChildAfter(
                     *((CContainerVisual **)this + 66),
                     *((struct CVisual **)this + 58),
                     0LL);
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x85Eu, 0LL);
        }
        else
        {
          v6 = (CVisual *)*((_QWORD *)this + 58);
          v8 = 0LL;
          CVisual::SetInsetFromParent(v6, &v8);
          if ( (*((_BYTE *)this + 184) & 4) != 0 )
          {
            updated = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
            inserted = updated;
            if ( updated < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x865u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)inserted;
}
