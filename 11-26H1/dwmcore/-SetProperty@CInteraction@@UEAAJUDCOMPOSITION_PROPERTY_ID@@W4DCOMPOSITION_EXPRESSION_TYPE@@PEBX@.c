/*
 * XREFs of ?SetProperty@CInteraction@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D4DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1801B12E8 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801BBCD0 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::SetProperty(__int64 a1, int a2, __int64 a3, char *a4)
{
  __int64 v4; // rbx
  int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  char v9; // dl
  char v10; // di

  v4 = a1;
  v5 = a2 - 13;
  if ( !v5 )
  {
    v10 = *a4;
    if ( v10 == CInteractionProcessor::GetRailsEnabled(a1 + 360, 0) )
      return 0;
    v6 = 0;
    v9 = v10;
    a1 = v4;
LABEL_10:
    CInteraction::SetRailsEnabled_RenderThread(a1, v9, v6);
    return 0;
  }
  if ( v5 != 1 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x24Du, 0LL);
    return v7;
  }
  v6 = 1;
  if ( *a4 != ((*(_BYTE *)(a1 + 508) & 0x20) != 0) )
  {
    v9 = *a4;
    goto LABEL_10;
  }
  return 0;
}
