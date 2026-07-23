/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1402031F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140203FD0 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14021B998 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&PopFxBlockingDeviceListLock.SListFaultAddress, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopFxArmResidentTimer(v1);
  }
  return result;
}
