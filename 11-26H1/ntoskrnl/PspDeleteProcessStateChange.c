/*
 * XREFs of PspDeleteProcessStateChange @ 0x1407F86C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 */

LONG_PTR __fastcall PspDeleteProcessStateChange(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    PsThawMultiProcess(*(_QWORD *)a1, 0, *(unsigned int *)(a1 + 16), a4);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
