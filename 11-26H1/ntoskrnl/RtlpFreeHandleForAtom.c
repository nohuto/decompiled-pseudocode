/*
 * XREFs of RtlpFreeHandleForAtom @ 0x140ABFF80
 * Callers:
 *     RtlpFreeAllAtom @ 0x1404A5300 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x140803E00 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14092C030 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // [rsp+30h] [rbp+8h]

  v6 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v6);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v6, v4, v5);
  KeLeaveCriticalRegion();
}
