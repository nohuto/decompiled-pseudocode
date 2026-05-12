/*
 * XREFs of DlrmHandlePowerStateAction @ 0x14012D0B4
 * Callers:
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     DlrmClearIdleStateAndUpdateTelemetry @ 0x14012CF58 (DlrmClearIdleStateAndUpdateTelemetry.c)
 *     DlrmGetActionFromPowerMode @ 0x14012D084 (DlrmGetActionFromPowerMode.c)
 *     DlrmRecordPciGenerationTime @ 0x14012D358 (DlrmRecordPciGenerationTime.c)
 *     DlrmUpdateLinkInformation @ 0x14012D438 (DlrmUpdateLinkInformation.c)
 *     StorDlrmSetLinkToDesiredSpeed @ 0x14012E0A4 (StorDlrmSetLinkToDesiredSpeed.c)
 */

void __fastcall DlrmHandlePowerStateAction(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // r9d

  if ( !a1 )
    return;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return;
  if ( (int)DlrmUpdateLinkInformation() < 0 )
    return;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)DlrmGetActionFromPowerMode(*(_DWORD *)(a1 + 76)) == a2 )
    return;
  switch ( a2 )
  {
    case 4:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 1;
      break;
    case 5:
      v6 = *(_DWORD *)(a1 + 56);
      v7 = 2;
      *(_DWORD *)(a1 + 76) = 2;
      if ( v6 < 2 )
        v7 = v6;
      *(_DWORD *)(a1 + 60) = v7;
      break;
    case 6:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 12), 0);
      DlrmClearIdleStateAndUpdateTelemetry(a1);
      goto LABEL_14;
    default:
      return;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 0);
LABEL_14:
  v8 = *(_DWORD *)(a1 + 60);
  if ( v5 != v8 && (int)StorDlrmSetLinkToDesiredSpeed(a1, *(_QWORD *)(v2 + 6280), a2, v8, *(_WORD *)(a1 + 4)) >= 0 )
    DlrmRecordPciGenerationTime(a1, v5);
}
