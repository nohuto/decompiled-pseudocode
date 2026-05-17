/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1800774FC
 * Callers:
 *     EtwpFlushUmLogger @ 0x18007654C (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180076BBC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 316) |= a2;
  ZwSetEvent(*(_QWORD *)(a1 + 112), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 120), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 316) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
