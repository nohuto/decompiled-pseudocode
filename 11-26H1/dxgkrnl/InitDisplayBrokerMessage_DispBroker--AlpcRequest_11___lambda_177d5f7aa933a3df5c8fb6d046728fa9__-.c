/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x140075DF0
 * Callers:
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401C7320 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSampleDisplayState @ 0x14041665C (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9___DxgkSampleDisplayState_(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  __int64 result; // rax
  unsigned int v8; // ecx

  memset(a1, 0, 0x58uLL);
  *((_DWORD *)a1 + 10) = 11;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    a1[2] = 0x8000;
    a1[1] = a4 + 88;
    *a1 = a4 + 48;
    *((_DWORD *)a1 + 20) = **(_DWORD **)a3;
    *((_DWORD *)a1 + 21) = **(_DWORD **)(a3 + 8);
    v8 = **(_DWORD **)(a3 + 8);
    if ( v8 )
      memmove(a1 + 44, **(const void ***)(a3 + 16), v8);
    return 0LL;
  }
  return result;
}
