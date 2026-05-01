/*
 * XREFs of CrmStateRoutineSebLevel @ 0x18001CFAC
 * Callers:
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x18001CF00 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x180076880 (CrmStateMonitorDelayedInternetLossCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateRoutineSebLevel(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return (*(unsigned __int8 *)(a1 + 8) >> 1) & 1;
  return result;
}
