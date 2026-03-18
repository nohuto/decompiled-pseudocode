/*
 * XREFs of RegFreeInfo @ 0x14007FD5C
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x14007F824 (TelemetryData_pInitWerContext.c)
 *     RegRetrieveValueInfo @ 0x14007FD84 (RegRetrieveValueInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RegFreeInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
