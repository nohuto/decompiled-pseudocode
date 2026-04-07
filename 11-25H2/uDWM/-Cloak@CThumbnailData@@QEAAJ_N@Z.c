/*
 * XREFs of ?Cloak@CThumbnailData@@QEAAJ_N@Z @ 0x18008AC4C
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 */

__int64 __fastcall CThumbnailData::Cloak(CThumbnailData *this, char a2)
{
  CThumbnailVisual *v2; // rcx
  int updated; // eax

  if ( a2 != *((_BYTE *)this + 35) )
  {
    *((_BYTE *)this + 35) = a2;
    v2 = (CThumbnailVisual *)*((_QWORD *)this + 11);
    if ( v2 )
    {
      updated = CThumbnailVisual::UpdateProperties(v2, 4u);
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x5Bu, 0LL);
    }
  }
  return 0LL;
}
