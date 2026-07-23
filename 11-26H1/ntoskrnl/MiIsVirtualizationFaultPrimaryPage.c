/*
 * XREFs of MiIsVirtualizationFaultPrimaryPage @ 0x1404EFB1C
 * Callers:
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiAllowReadInProgress @ 0x14038D138 (MiAllowReadInProgress.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1407041B8 (MiCheckAndSkipVirtualizationFaultIo.c)
 * Callees:
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 */

_BOOL8 __fastcall MiIsVirtualizationFaultPrimaryPage(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 56) & 0x80u) != 0
      && MiGetVirtualFaultPageInfo(a1, a2 & 0xFFFFFFFFFFFFF000uLL, 2LL) == *(_QWORD *)(a1 + 40);
}
