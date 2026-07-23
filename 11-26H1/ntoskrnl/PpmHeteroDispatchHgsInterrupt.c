/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1404E5250
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 PpmHeteroDispatchHgsInterrupt()
{
  __int64 result; // rax

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE) )
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE, 0LL, 0, 0LL, 0LL, 0, 0LL);
  result = (unsigned int)_InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc((ULONG_PTR)&PpmHeteroHgsUpdateDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
