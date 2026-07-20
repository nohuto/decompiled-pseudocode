/*
 * XREFs of SmpEventWrite @ 0x14000D668
 * Callers:
 *     SmpNtSerializeBoot @ 0x14000D628 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
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
