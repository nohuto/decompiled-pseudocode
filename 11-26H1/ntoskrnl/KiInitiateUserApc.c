/*
 * XREFs of KiInitiateUserApc @ 0x1407317C0
 * Callers:
 *     NtContinueEx @ 0x14072BFC0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14072C480 (NtRaiseException.c)
 *     KxStartUserThread @ 0x14072DEE0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140735DF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C63200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 */

_KTRAP_FRAME *__fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  struct _LIST_ENTRY v2; // [rsp+0h] [rbp-138h] BYREF

  return KiDeliverApc(1, &v2, (_KTRAP_FRAME *)(v0 - 128));
}
