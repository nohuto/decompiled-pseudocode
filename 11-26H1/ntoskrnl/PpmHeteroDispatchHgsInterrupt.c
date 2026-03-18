/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x1404EBC70
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 PpmHeteroDispatchHgsInterrupt()
{
  __int64 result; // rax

  if ( PpmEtwRegistered
    && EtwEventEnabled(
         (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
         &PPM_ETW_WPS_DYNAMIC_UPDATE) )
  {
    EtwWriteEx(
      (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
      &PPM_ETW_WPS_DYNAMIC_UPDATE,
      0LL,
      0,
      0LL,
      0LL,
      0,
      0LL);
  }
  result = (unsigned int)_InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc((ULONG_PTR)&PpmHeteroHgsUpdateDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
