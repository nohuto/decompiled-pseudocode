/*
 * XREFs of KzSetIrqlUnsafe @ 0x1405EBBF0
 * Callers:
 *     KiIdleLoop @ 0x140728DB0 (KiIdleLoop.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140729D60 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140729EA0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140729F50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140729FF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x14072E690 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14072E740 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14072FE70 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140738080 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140BE9640 (KiSystemStartup.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a1);
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    if ( v3 != (_BYTE)v1 )
      __writecr8(v1);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v3, (unsigned __int8)v1);
  }
  return CurrentIrql;
}
