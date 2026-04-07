/*
 * XREFs of ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z @ 0x180061234
 * Callers:
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180061170 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1800612A4 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetPassiveUpdateMode(CTopLevelWindow *this, bool a2)
{
  unsigned int v2; // ebx
  int updated; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 185) & 4) != 0) )
  {
    *((_BYTE *)this + 185) = (4 * a2) | *((_BYTE *)this + 185) & 0xFB;
    updated = CVisualProxy::SetPassiveUpdateMode(*((CVisualProxy **)this + 2), a2);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x11Bu, 0LL);
  }
  return v2;
}
