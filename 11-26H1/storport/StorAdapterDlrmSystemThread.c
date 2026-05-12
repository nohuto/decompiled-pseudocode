/*
 * XREFs of StorAdapterDlrmSystemThread @ 0x14012DE30
 * Callers:
 *     <none>
 * Callees:
 *     DlrmClearIdleStateAndUpdateTelemetry @ 0x14012CF58 (DlrmClearIdleStateAndUpdateTelemetry.c)
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x14012D1A8 (DlrmHandleScaleAction.c)
 *     DlrmRecordPciGenerationTime @ 0x14012D358 (DlrmRecordPciGenerationTime.c)
 *     DlrmShouldTransitionToIdleState @ 0x14012D3AC (DlrmShouldTransitionToIdleState.c)
 *     DlrmUpdateLinkInformation @ 0x14012D438 (DlrmUpdateLinkInformation.c)
 */

void __fastcall StorAdapterDlrmSystemThread(char *StartContext)
{
  char v1; // di
  NTSTATUS v3; // edx
  int Flink; // eax
  PLIST_ENTRY v5; // rax
  PLIST_ENTRY v6; // rbx
  KIRQL v7; // bl
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  Timeout.QuadPart = 0LL;
  if ( StartContext )
  {
    if ( *((_QWORD *)StartContext + 2) )
    {
      Timeout.QuadPart = -50000000LL;
      v3 = KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, &Timeout);
      _InterlockedOr(v8, 0);
      while ( (*((_DWORD *)StartContext + 3) & 4) == 0 )
      {
        if ( v3 == 258 )
        {
          if ( DlrmShouldTransitionToIdleState((__int64)StartContext) )
          {
            _interlockedbittestandset((volatile signed __int32 *)StartContext + 3, 3u);
            DlrmHandleScaleAction((__int64)StartContext, 2);
            DlrmUpdateLinkInformation((__int64)StartContext);
            _InterlockedIncrement((volatile signed __int32 *)StartContext + 71);
            *((_QWORD *)StartContext + 36) = KeQueryUnbiasedInterruptTime();
          }
        }
        else
        {
          while ( 1 )
          {
            v5 = ExInterlockedRemoveHeadList((PLIST_ENTRY)StartContext + 9, (PKSPIN_LOCK)StartContext + 20);
            v6 = v5;
            if ( !v5 )
              break;
            Flink = (int)v5[1].Flink;
            switch ( LODWORD(v6[1].Flink) )
            {
              case 1:
              case 3:
                DlrmHandleScaleAction((__int64)StartContext, Flink);
                v1 = 1;
                break;
              case 4:
              case 5:
              case 6:
                DlrmHandlePowerStateAction((__int64)StartContext, Flink);
                break;
              case 7:
                DlrmRecordPciGenerationTime((__int64)StartContext, *((_DWORD *)StartContext + 2));
                break;
              case 8:
                *((_QWORD *)StartContext + 38) = KeQueryUnbiasedInterruptTime();
                break;
              case 9:
                *((_QWORD *)StartContext + 38) = 0LL;
                DlrmClearIdleStateAndUpdateTelemetry((__int64)StartContext);
                break;
            }
            if ( (BYTE4(v6[1].Flink) & 1) != 0 )
              ExFreePoolWithTag(v6, 0x4D4C6152u);
            else
              ExInterlockedInsertTailList((PLIST_ENTRY)(StartContext + 120), v6, (PKSPIN_LOCK)StartContext + 17);
          }
          DlrmUpdateLinkInformation((__int64)StartContext);
          if ( v1 )
          {
            v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)StartContext + 14);
            *((_QWORD *)StartContext + 5) = KeQueryUnbiasedInterruptTime();
            *((_QWORD *)StartContext + 6) = KeQueryUnbiasedInterruptTime();
            KeReleaseSpinLock((PKSPIN_LOCK)StartContext + 14, v7);
            _InterlockedExchange64((volatile __int64 *)StartContext + 3, 0LL);
            _InterlockedExchange64((volatile __int64 *)StartContext + 4, 0LL);
            _interlockedbittestandreset((volatile signed __int32 *)StartContext + 3, 1u);
            v1 = 0;
          }
        }
        v3 = KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, &Timeout);
        _InterlockedOr(v8, 0);
      }
    }
  }
  PsTerminateSystemThread(0);
}
