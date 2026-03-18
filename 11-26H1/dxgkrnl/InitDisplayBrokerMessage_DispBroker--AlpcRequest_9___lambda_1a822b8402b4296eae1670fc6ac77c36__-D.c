/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x14006DF40
 * Callers:
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401C7600 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSampleDisplayState @ 0x14041665C (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36___DxgkSampleDisplayState_(
        _WORD *a1,
        const void *a2,
        __int64 a3,
        __int16 a4)
{
  __int64 result; // rax

  memset(a1, 0, 0x68uLL);
  *((_DWORD *)a1 + 10) = 9;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 30, a2, 0x10uLL);
    a1[2] = 0x8000;
    a1[1] = a4 + 104;
    *a1 = a4 + 64;
    memmove(a1 + 52, **(const void ***)a3, **(unsigned int **)(a3 + 8));
    *((_DWORD *)a1 + 20) = 0;
    *((_DWORD *)a1 + 21) = 2;
    result = 0LL;
    *((_DWORD *)a1 + 22) = **(_DWORD **)(a3 + 8);
    *(_QWORD *)(a1 + 46) = 0LL;
  }
  return result;
}
