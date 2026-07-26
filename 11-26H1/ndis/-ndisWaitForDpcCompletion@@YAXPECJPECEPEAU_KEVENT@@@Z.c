/*
 * XREFs of ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C80C4
 * Callers:
 *     NdisMDeregisterInterrupt @ 0x1400DC730 (NdisMDeregisterInterrupt.c)
 *     NdisMDeregisterInterruptEx @ 0x1401748F0 (NdisMDeregisterInterruptEx.c)
 *     NdisMRegisterInterruptEx @ 0x14017DC00 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140168CE0 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 */

void __fastcall ndisWaitForDpcCompletion(volatile int *a1, volatile unsigned __int8 *a2, struct _KEVENT *a3)
{
  int i; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  *a2 = 1;
  _InterlockedOr(v6, 0);
  for ( i = *a1; i > 0; i = *a1 )
    ndisWaitForKernelObject(a3, 1000LL);
}
