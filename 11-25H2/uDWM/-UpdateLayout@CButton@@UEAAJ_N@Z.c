/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180015540
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000474C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180015AA0 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CAtlasedRectsVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xCCu, 0LL);
  else
    CButton::UpdateAtlasPositionAndSize(this);
  return v4;
}
