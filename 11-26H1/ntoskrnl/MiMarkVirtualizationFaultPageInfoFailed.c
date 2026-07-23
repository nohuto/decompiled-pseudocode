/*
 * XREFs of MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiAllowReadInProgress @ 0x14038D138 (MiAllowReadInProgress.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1407041B8 (MiCheckAndSkipVirtualizationFaultIo.c)
 * Callees:
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 */

_QWORD *__fastcall MiMarkVirtualizationFaultPageInfoFailed(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)MiGetVirtualFaultPageInfo(a1, a2 & 0xFFFFFFFFFFFFF000uLL, 2LL);
  if ( result )
    *result |= 0x100000000000000uLL;
  return result;
}
