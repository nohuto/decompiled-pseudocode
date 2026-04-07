/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016040
 * Callers:
 *     ?UpdateLayout@CPrimitiveGroupVisual@@UEAAJ_N@Z @ 0x1800697C0 (-UpdateLayout@CPrimitiveGroupVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = CContainerVisual::UpdateLayout(this, 1);
  v2 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x17u, 0LL);
  return v2;
}
