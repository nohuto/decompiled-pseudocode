/*
 * XREFs of MiGetActiveProcessorFlushList @ 0x1404739F0
 * Callers:
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR MiGetActiveProcessorFlushList()
{
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *MmInternal; // rdx
  int v2; // eax
  struct _KTHREAD *BugCheckParameter4; // rcx
  ULONG_PTR result; // rax
  ULONG_PTR v5; // r9

  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = CurrentPrcb->MmInternal;
  v2 = MmInternal[85];
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x441uLL, (ULONG_PTR)CurrentPrcb, 0LL, 0LL);
  BugCheckParameter4 = KeGetCurrentThread();
  result = (ULONG_PTR)&MmInternal[5150 * (v2 - 1) + 992];
  v5 = *(_QWORD *)(result + 20592);
  if ( (struct _KTHREAD *)v5 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x442uLL, result, v5, (ULONG_PTR)BugCheckParameter4);
  return result;
}
