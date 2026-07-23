/*
 * XREFs of TtmpTerminalInactivityWorkerRoutine @ 0x140760A70
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 TtmpTerminalInactivityWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    ZwUpdateWnfStateData(&WNF_PO_TERMINAL_INACTIVITY, 0LL, 0, 0LL, 0LL, 0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&TtmpTerminalInactivityWorkCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
