/*
 * XREFs of HalpCreateInterrupt @ 0x140596DA0
 * Callers:
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeInitializeInterruptEx @ 0x140516588 (KeInitializeInterruptEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpAllocateKInterrupt @ 0x140596C54 (HalpAllocateKInterrupt.c)
 *     KeConnectInterruptForHal @ 0x1405F31D0 (KeConnectInterruptForHal.c)
 */

_DWORD *__fastcall HalpCreateInterrupt(
        __int64 (__fastcall *a1)(struct _KINTERRUPT *a1, void *a2),
        int a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int Number; // ebp
  _DWORD *KInterrupt; // rbx
  int v11; // [rsp+68h] [rbp-20h]

  Number = KeGetPcr()->Prcb.Number;
  KInterrupt = HalpAllocateKInterrupt(Number, a2);
  if ( !KInterrupt )
    KeBugCheckEx(0xACu, 0x120uLL, 3uLL, (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x1B9uLL);
  KeInitializeInterruptEx(KInterrupt, a1, 0LL, 0LL, 0, a5, 0LL, a2, a3, a3, 1, 0, Number, v11, 0, 0LL);
  KeConnectInterruptForHal(KInterrupt);
  return KInterrupt;
}
