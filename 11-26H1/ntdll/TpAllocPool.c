/*
 * XREFs of TpAllocPool @ 0x1800854F0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return TpAllocPoolInternal(PoolReturn, 0LL);
    }
  }
  TppRaiseInvalidParameter(PoolReturn, Reserved);
  return -1073741811;
}
