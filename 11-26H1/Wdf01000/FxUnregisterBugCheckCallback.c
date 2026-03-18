/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x14007D854
 * Callers:
 *     FxDestroy @ 0x1400820E0 (FxDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUnregisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rbx
  unsigned int i; // ecx

  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  if ( FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&FxDriverGlobals->BugCheckCallbackRecord);
    p_BugCheckCallbackRecord->CallbackRoutine = 0LL;
    if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    {
      if ( P )
      {
        for ( i = 0; i < unk_1400C9084; ++i )
        {
          if ( *(_FX_DRIVER_GLOBALS **)(unk_1400C9080 * i + unk_1400C9070) == FxDriverGlobals )
            *(_QWORD *)(unk_1400C9080 * i + unk_1400C9070) = 0LL;
        }
      }
    }
  }
}
