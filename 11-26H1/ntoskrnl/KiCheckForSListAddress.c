/*
 * XREFs of KiCheckForSListAddress @ 0x140422100
 * Callers:
 *     KiRollbackSlistPops @ 0x140501630 (KiRollbackSlistPops.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x14072CCD0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14072D060 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14072D3F0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14072D780 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14072DB10 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140738080 (KiMcheckAbort.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 * Callees:
 *     <none>
 */

void *__fastcall KiCheckForSListAddress(__int64 a1)
{
  void *result; // rax
  void *v2; // rdx

  result = (void *)*(unsigned __int16 *)(a1 + 368);
  v2 = *(void **)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = stru_140FC01F0.KernelShadowStack;
    if ( v2 > stru_140FC01F0.KernelShadowStack
      && (unsigned __int64)v2 <= stru_140FC01F0.InGlobalUpdateVpThreadPriorityList )
    {
      *(_QWORD *)(a1 + 360) = stru_140FC01F0.KernelShadowStack;
    }
  }
  else if ( (_WORD)result == 16 )
  {
    result = &ExpInterlockedPopEntrySListResume;
    if ( v2 > &ExpInterlockedPopEntrySListResume )
    {
      result = &ExpInterlockedPopEntrySListEnd;
      if ( v2 <= &ExpInterlockedPopEntrySListEnd )
        *(_QWORD *)(a1 + 48) |= 0x10000uLL;
    }
  }
  return result;
}
