/*
 * XREFs of IoTransferActivityId @ 0x1404E50A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404E5108 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteEx(
             IopPerfIoTrackingLock.NpxState,
             &IoTrace_ActivityIdTransfer,
             0LL,
             0,
             ActivityId,
             RelatedActivityId,
             0,
             0LL);
  return result;
}
