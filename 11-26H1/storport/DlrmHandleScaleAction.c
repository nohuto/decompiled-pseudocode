/*
 * XREFs of DlrmHandleScaleAction @ 0x14012D1A8
 * Callers:
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     DlrmRecordPciGenerationTime @ 0x14012D358 (DlrmRecordPciGenerationTime.c)
 *     DlrmUpdateLinkInformation @ 0x14012D438 (DlrmUpdateLinkInformation.c)
 *     StorDlrmSetLinkToDesiredSpeed @ 0x14012E0A4 (StorDlrmSetLinkToDesiredSpeed.c)
 */

void __fastcall DlrmHandleScaleAction(__int64 a1, int a2)
{
  int v2; // edi
  __int64 v5; // r14
  int v6; // esi

  if ( a1 )
  {
    v2 = 1;
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        if ( (int)DlrmUpdateLinkInformation() >= 0 )
        {
          v6 = *(_DWORD *)(a1 + 8);
          if ( a2 == 1 )
          {
            v2 = *(_DWORD *)(a1 + 60);
            if ( v6 == v2 )
              return;
            goto LABEL_13;
          }
          if ( a2 == 2 )
          {
            if ( v6 <= 1 )
              return;
            goto LABEL_13;
          }
          if ( a2 == 3 && v6 > 1 )
          {
            v2 = v6 - 1;
LABEL_13:
            if ( (int)StorDlrmSetLinkToDesiredSpeed(a1, *(_QWORD *)(v5 + 6280), a2, v2, *(_WORD *)(a1 + 4)) >= 0 )
              DlrmRecordPciGenerationTime(a1, (unsigned int)v6);
          }
        }
      }
    }
  }
}
