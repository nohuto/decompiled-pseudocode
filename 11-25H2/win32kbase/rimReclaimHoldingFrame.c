/*
 * XREFs of rimReclaimHoldingFrame @ 0x14002EF5C
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x14002EEF0 (rimFindAndReclaimHoldingFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1401562A4 (RIMRemoveHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140182330 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     rimFreePointerRawDataListWorker @ 0x14002EFB4 (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  __int64 result; // rax

  v3 = *(char **)(a3 + 72);
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  result = rimFreePointerRawDataListWorker(*(PVOID *)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}
