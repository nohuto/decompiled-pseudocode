/*
 * XREFs of PoSetPowerRequest @ 0x1404A61A0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 */

NTSTATUS __stdcall PoSetPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return PopPowerRequestReferenceAcquire(PowerRequest);
}
