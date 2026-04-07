/*
 * XREFs of ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180073E6C
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020A4C (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180092C50 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x18008CD8C (-PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetExcludeFromDDA(CTopLevelWindow *this, bool a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 201) & 4) != 0) )
  {
    *((_BYTE *)this + 201) = (4 * a2) | *((_BYTE *)this + 201) & 0xFB;
    v4 = CVisualProxy::PartitionSetExcludeFromDDA(*((CVisualProxy **)this + 2), a2);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x123u, 0LL);
  }
  return v2;
}
