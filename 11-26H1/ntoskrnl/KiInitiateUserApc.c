/*
 * XREFs of KiInitiateUserApc @ 0x14072CBF0
 * Callers:
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140731220 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C5D200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 */

_KTRAP_FRAME *__fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  struct _LIST_ENTRY v2; // [rsp+0h] [rbp-138h] BYREF

  return KiDeliverApc(1, &v2, (_KTRAP_FRAME *)(v0 - 128));
}
