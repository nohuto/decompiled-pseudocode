/*
 * XREFs of TtmpTerminalInactivityWorkerRoutine @ 0x1407F24F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 TtmpTerminalInactivityWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    ZwUpdateWnfStateData(&WNF_PO_TERMINAL_INACTIVITY, 0LL, 0, 0LL, 0LL, 0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ReadTransferCount,
                             0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
