/*
 * XREFs of ExLockHandleTableEntry @ 0x140444160
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PspClearProcessThreadCidRefs @ 0x1409FF230 (PspClearProcessThreadCidRefs.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     ExQueryProcessHandleInformation @ 0x140A4DD2C (ExQueryProcessHandleInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) == 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(a2, v4 - 1, v4) )
        return 1;
    }
    if ( !v4 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2, v4);
  }
  return 0;
}
