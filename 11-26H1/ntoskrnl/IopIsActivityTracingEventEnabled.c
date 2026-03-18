/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1404EBB28
 * Callers:
 *     IoReuseIrp @ 0x140268650 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 *     IoTransferActivityId @ 0x1404EBAC0 (IoTransferActivityId.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
