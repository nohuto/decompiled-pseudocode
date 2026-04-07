/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180003D30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180003D90 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000474C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CVisual::UpdateOffset(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xD8u, 0LL);
  else
    CButton::UpdateAtlasPositionAndSize(this);
  return v3;
}
