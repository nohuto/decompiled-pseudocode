/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180108B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180109064 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801090D8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801092C8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  CManipulation *v7; // r11
  char v9; // dl
  int v10; // eax

  v2 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 80), (*((_BYTE *)a2 + 16) & 4) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v4, *v3);
  *(_QWORD *)(v5 + 20) = 0LL;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 44) = 1065353216;
  *(_DWORD *)(v5 + 48) = 1065353216;
  *(_DWORD *)(v5 + 52) = 1065353216;
  if ( __PAIR64__(*(_DWORD *)(v5 + 176), *(_DWORD *)(v5 + 164)) != *(_QWORD *)v6
    || *(_DWORD *)(v5 + 180) != *(_DWORD *)(v6 + 8)
    || *(_DWORD *)(v5 + 184) != *(_DWORD *)(v6 + 12)
    || ((*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 1) != 0
    || ((*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 2) != 0 )
  {
    *(_QWORD *)(v5 + 136) = 0LL;
    *(_QWORD *)(v5 + 144) = 0LL;
    *(_QWORD *)(v5 + 152) = 0LL;
    *(_DWORD *)(v5 + 160) = 0;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)v6;
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v5 + 180) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v5 + 184) = *(_DWORD *)(v6 + 12);
    v9 = *(_BYTE *)(v5 + 188) ^ (*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 1;
    *(_BYTE *)(v5 + 188) = v9;
    *(_BYTE *)(v5 + 188) = v9 ^ (*(_BYTE *)(v6 + 16) ^ v9) & 2;
    v10 = CManipulation::_SendUpdateToRenderThread(v7, 0, 0LL, 0LL);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xAAu, 0LL);
  }
  return v2;
}
