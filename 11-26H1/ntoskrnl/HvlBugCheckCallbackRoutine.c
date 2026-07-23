/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1405C29F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink )
  {
    if ( (HIDWORD(VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink->Flink) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink;
      *((_DWORD *)ReasonSpecificData + 10) = *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] << 12;
    }
  }
}
