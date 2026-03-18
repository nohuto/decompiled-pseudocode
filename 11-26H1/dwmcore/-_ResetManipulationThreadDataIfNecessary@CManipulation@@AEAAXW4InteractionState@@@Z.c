/*
 * XREFs of ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180109064
 * Callers:
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180108B40 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x180108D00 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 * Callees:
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801090D8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

void __fastcall CManipulation::_ResetManipulationThreadDataIfNecessary(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 244);
  v3 = a2;
  if ( a2 != v2 )
  {
    if ( (*(_BYTE *)(a1 + 456) & 4) != 0 )
      goto LABEL_4;
    if ( (unsigned int)(v2 - 2) <= 2 && (unsigned int)(a2 - 2) > 2 )
      CManipulation::_UpdateCaptureState((CManipulation *)a1, 0);
    if ( (*(_BYTE *)(a1 + 456) & 4) != 0 )
    {
LABEL_4:
      v4 = *(_DWORD *)(a1 + 244);
      if ( v4 != 2 && (unsigned int)(v4 - 3) > 1 && (unsigned int)(v3 - 2) <= 2 )
        ManipulationData::Reset((ManipulationData *)(a1 + 88));
    }
  }
}
