/*
 * XREFs of RtlpFreeHandleForAtom @ 0x140AC2020
 * Callers:
 *     RtlpFreeAllAtom @ 0x14049E990 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1408098A0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExDestroyHandle @ 0x140907B60 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14092A190 (ExMapHandleToPointer.c)
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
