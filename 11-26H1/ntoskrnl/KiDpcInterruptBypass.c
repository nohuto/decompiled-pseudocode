/*
 * XREFs of KiDpcInterruptBypass @ 0x140734290
 * Callers:
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
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
