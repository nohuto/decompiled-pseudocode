/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1404E5108
 * Callers:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     IoTransferActivityId @ 0x1404E50A0 (IoTransferActivityId.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IopPerfIoTrackingLock.NpxState )
    return EtwEventEnabled(IopPerfIoTrackingLock.NpxState, EventDescriptor) != 0;
  return v1;
}
