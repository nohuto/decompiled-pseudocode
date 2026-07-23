/*
 * XREFs of KiCheckForSListAddress @ 0x140419940
 * Callers:
 *     KiRollbackSlistPops @ 0x1404FAE20 (KiRollbackSlistPops.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1407318A0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140731C30 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140731FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140732350 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1407326E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1407386C0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14073CC80 (KiMcheckAbort.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
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
    result = stru_140FC11F0.KernelShadowStack;
    if ( v2 > stru_140FC11F0.KernelShadowStack
      && (unsigned __int64)v2 <= stru_140FC11F0.InGlobalUpdateVpThreadPriorityList )
    {
      *(_QWORD *)(a1 + 360) = stru_140FC11F0.KernelShadowStack;
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
