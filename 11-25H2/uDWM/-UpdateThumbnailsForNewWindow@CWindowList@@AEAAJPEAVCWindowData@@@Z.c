/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180019850
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800133D8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180097A38 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18009A548 (-OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // edi
  __int64 i; // rsi
  __int64 j; // rsi
  __int64 v7; // r14
  int v8; // eax
  CTopLevelWindow *v9; // rcx
  CThumbnailVisual *v10; // rcx
  int v11; // eax

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 140); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * i);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x19C2u, 0LL);
      return v2;
    }
    v9 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( *(_BYTE *)(v7 + 34) )
    {
      CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v9);
    }
    else
    {
      v11 = CTopLevelWindow::OnThumbnailAdded(v9, *(struct CVisual **)(v7 + 88));
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x19CDu, 0LL);
        return v2;
      }
    }
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 148); j = (unsigned int)(j + 1) )
  {
    v10 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8 * j) + 88LL);
    if ( v10 )
      CThumbnailVisual::OnSourceWindowVisualCreated(v10);
  }
  return v2;
}
