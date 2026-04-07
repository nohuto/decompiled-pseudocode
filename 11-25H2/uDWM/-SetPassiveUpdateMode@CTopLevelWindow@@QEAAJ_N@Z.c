/*
 * XREFs of ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z @ 0x180071CA4
 * Callers:
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180092D10 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x180071D10 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetPassiveUpdateMode(CTopLevelWindow *this, bool a2)
{
  unsigned int v2; // ebx
  int updated; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 201) & 8) != 0) )
  {
    *((_BYTE *)this + 201) = (8 * a2) | *((_BYTE *)this + 201) & 0xF7;
    updated = CVisualProxy::SetPassiveUpdateMode(*((CVisualProxy **)this + 2), a2);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x130u, 0LL);
  }
  return v2;
}
