/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180015AA0
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180015540 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180015EE0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CContainerVisual::UpdateLayout(this, 1);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x79u, 0LL);
  else
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return v3;
}
