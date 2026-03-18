/*
 * XREFs of rimReclaimHoldingFrame @ 0x1400761B0
 * Callers:
 *     rimFindAndReclaimHoldingFrame @ 0x140077EDC (rimFindAndReclaimHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x140192634 (RIMRemoveHoldingFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     rimFreePointerRawDataListWorker @ 0x14007621C (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rcx
  __int64 result; // rax

  v4 = *(char **)(a3 + 72);
  if ( v4 )
  {
    GreDeleteFastMutex(v4, a2, a3, a4);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  result = rimFreePointerRawDataListWorker(*(PVOID *)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}
