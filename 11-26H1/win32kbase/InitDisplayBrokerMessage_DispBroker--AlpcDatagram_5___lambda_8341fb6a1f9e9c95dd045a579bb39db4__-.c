/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x14007EB18
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___ @ 0x14007EA4C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4___DrvSampleDisplayState_(
        _DWORD *a1,
        const void *a2,
        _DWORD **a3)
{
  __int64 result; // rax

  memset(a1, 0, 0x60uLL);
  a1[10] = 5;
  a1[11] = 1;
  result = DrvSampleDisplayState(a1 + 12);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 15, a2, 0x10uLL);
    *a1 = 6291512;
    *((_WORD *)a1 + 2) = 0x8000;
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      a1[20] = **a3;
    a1[21] = *a3[1];
    result = 0LL;
    a1[22] = *a3[2];
  }
  return result;
}
