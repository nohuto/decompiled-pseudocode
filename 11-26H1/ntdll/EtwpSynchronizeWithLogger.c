/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x180065D1C
 * Callers:
 *     EtwpFlushUmLogger @ 0x180064D6C (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800653DC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800654B8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 316) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 112), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 120), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 316) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
