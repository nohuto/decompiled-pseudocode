/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18000BEF0
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18000BCA0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4340 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800118CC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180029418 (-Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006BF90 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  struct CClientArea **v2; // rsi
  struct CWindowData *v5; // rcx
  int v6; // eax
  int inserted; // eax
  CVisual *v8; // rcx
  int updated; // eax
  struct _MARGINS v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (struct CClientArea **)((char *)this + 480);
  if ( !*((_QWORD *)this + 60) )
  {
    v5 = (struct CWindowData *)*((_QWORD *)this + 89);
    if ( *((_QWORD *)v5 + 18) )
    {
      v6 = CClientArea::Create(v5, v2);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x8D6u, 0LL);
      }
      else
      {
        inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 68), *v2, 0LL);
        v1 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x8D9u, 0LL);
        }
        else
        {
          v8 = *v2;
          v10 = 0LL;
          CVisual::SetInsetFromParent(v8, &v10);
          if ( (*((_BYTE *)this + 200) & 4) != 0 )
          {
            updated = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
            v1 = updated;
            if ( updated < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x8E0u, 0LL);
          }
        }
      }
    }
  }
  return v1;
}
