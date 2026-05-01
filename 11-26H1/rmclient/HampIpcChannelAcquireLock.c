/*
 * XREFs of HampIpcChannelAcquireLock @ 0x1800053B0
 * Callers:
 *     HamIpcChannelRundown @ 0x18000532C (HamIpcChannelRundown.c)
 *     HamCreateExtendedExecution @ 0x18000C490 (HamCreateExtendedExecution.c)
 *     HamAssociateActivityContext @ 0x180018A30 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall HampIpcChannelAcquireLock(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1 + 8);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
