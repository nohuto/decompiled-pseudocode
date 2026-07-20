/*
 * XREFs of SmpEventWrite @ 0x14000D280
 * Callers:
 *     SmpNtSerializeBoot @ 0x14000D240 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpEventWrite(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
      EtwEventWrite(SmpTraceHandle, EventDescriptor, 0LL, 0LL);
  }
}
