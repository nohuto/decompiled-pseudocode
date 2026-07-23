/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x14050CBD4
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14057F70C (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 244);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
