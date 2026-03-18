/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x140075CAC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator() @ 0x1401C698C (_lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_--operator().c)
 *     DxgkSampleDisplayState @ 0x14041665C (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823___DxgkSampleDisplayState_(
        _WORD *a1,
        const void *a2,
        __int64 a3,
        __int16 a4)
{
  __int64 result; // rax

  memset(a1, 0, 0x60uLL);
  *((_DWORD *)a1 + 10) = 7;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 30, a2, 0x10uLL);
    a1[2] = 0x8000;
    a1[1] = a4 + 96;
    *a1 = a4 + 56;
    return lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator()(a3, a1);
  }
  return result;
}
