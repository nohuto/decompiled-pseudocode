/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x140075D54
 * Callers:
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401C74F4 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSampleDisplayState @ 0x14041665C (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116___DxgkSampleDisplayState_(
        _DWORD *a1,
        const void *a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x68uLL);
  a1[10] = 9;
  a1[11] = 1;
  result = DxgkSampleDisplayState(a1 + 12);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 15, a2, 0x10uLL);
    *a1 = 6815808;
    result = 0LL;
    *((_WORD *)a1 + 2) = 0x8000;
    a1[20] = 1;
    *((_QWORD *)a1 + 11) = 0LL;
    a1[24] = 0;
  }
  return result;
}
