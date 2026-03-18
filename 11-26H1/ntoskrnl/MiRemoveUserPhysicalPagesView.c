/*
 * XREFs of MiRemoveUserPhysicalPagesView @ 0x1407028D4
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiLockAweVadsExclusive @ 0x1404FEF8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405251E0 (MiUnlockAweVadsExclusive.c)
 */

_QWORD *__fastcall MiRemoveUserPhysicalPagesView(__int64 a1)
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // r14
  volatile _KAFFINITY_EX *ActiveProcessors; // rdi
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // r9
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  volatile LONG *v11; // rdi
  KIRQL v12; // bp

  if ( (*(_DWORD *)(a1 + 48) & 0x880000) == 0x880000 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  ActiveProcessors = CurrentThread->ApcState.Process[2].ActiveProcessors;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = *(unsigned int *)(a1 + 24);
  v6 = &ActiveProcessors[4].StaticBitmap[30];
  v7 = *(unsigned __int8 *)(a1 + 32);
  v8 = (_QWORD *)ActiveProcessors[4].StaticBitmap[30];
  v9 = v5 | (v7 << 32);
  while ( v8 )
  {
    v10 = v8[3];
    if ( v9 > (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
    {
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      if ( v9 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) )
        break;
      v8 = (_QWORD *)*v8;
    }
  }
  v11 = (volatile LONG *)&ActiveProcessors[5].8;
  v12 = ExAcquireSpinLockExclusive(v11);
  RtlAvlRemoveNode(v6, (__int64)v8);
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockExclusive(v11, v12);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
  result = v8 - 2;
  v8[2] = 0LL;
  return result;
}
