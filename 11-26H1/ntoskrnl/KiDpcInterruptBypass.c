/*
 * XREFs of KiDpcInterruptBypass @ 0x14072F6C0
 * Callers:
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140223290 (KiDispatchInterrupt.c)
 */

__int64 __fastcall KiDpcInterruptBypass(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax

  __writecr8(2uLL);
  _enable();
  result = KiDispatchInterrupt(*(_QWORD *)(v4 - 87), v4 - 128, a3, a4);
  _disable();
  return result;
}
