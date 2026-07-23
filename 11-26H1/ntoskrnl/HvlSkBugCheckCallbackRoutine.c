/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1405C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlSkBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink;
    *((_DWORD *)ReasonSpecificData + 10) = *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] << 12;
  }
}
