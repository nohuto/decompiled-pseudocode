/*
 * XREFs of RtlpInsertStringAtom @ 0x140AAEF58
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14092C030 (ExDestroyHandle.c)
 *     ExCreateHandleEx @ 0x14092C1A0 (ExCreateHandleEx.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  __int64 Handle; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rax
  struct _KLOCK_ENTRIES *v10; // r9

  Handle = ExCreateHandleEx(*(unsigned int **)(a1 + 16), a2, 0, 0LL, 0LL);
  v5 = Handle;
  if ( Handle )
  {
    v6 = (unsigned int)Handle >> 2;
    if ( v6 <= 0xFFFF && v6 + 49152 >= v6 && v6 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 10) = v6 - 0x4000;
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v9, v10);
    KeLeaveCriticalRegion();
  }
  return 0;
}
