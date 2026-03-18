/*
 * XREFs of EtwpCovSampCaptureUserAddresses @ 0x140A23904
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140261700 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x1406C8944 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x1404AB614 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140501780 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A23970 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureUserStack @ 0x140A24190 (EtwpCovSampCaptureUserStack.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserAddresses(__int64 a1, unsigned __int64 a2)
{
  PSLIST_ENTRY v4; // rax
  unsigned int v5; // ebx
  PSLIST_ENTRY v6; // rdi

  v4 = EtwpCovSampCaptureBufferGet(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    EtwpCovSampCaptureBufferAddIP((__int64)v4, a2);
    EtwpCovSampCaptureUserStack();
    EtwpCovSampCaptureBufferMapAddressesAndQueue(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
