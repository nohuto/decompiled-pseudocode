/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1405C0680
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
  if ( VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink;
    *((_DWORD *)ReasonSpecificData + 10) = *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[112] << 12;
  }
}
