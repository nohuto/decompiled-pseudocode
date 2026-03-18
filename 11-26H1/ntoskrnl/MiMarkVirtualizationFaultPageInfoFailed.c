/*
 * XREFs of MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F9184
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402D5420 (MiResolvePrivateZeroFault.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiAllowReadInProgress @ 0x14038B388 (MiAllowReadInProgress.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1406FF4E8 (MiCheckAndSkipVirtualizationFaultIo.c)
 * Callees:
 *     MiGetVirtualFaultPageInfo @ 0x140525BB8 (MiGetVirtualFaultPageInfo.c)
 */

_QWORD *__fastcall MiMarkVirtualizationFaultPageInfoFailed(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)MiGetVirtualFaultPageInfo(a1, a2 & 0xFFFFFFFFFFFFF000uLL, 2LL);
  if ( result )
    *result |= 0x100000000000000uLL;
  return result;
}
