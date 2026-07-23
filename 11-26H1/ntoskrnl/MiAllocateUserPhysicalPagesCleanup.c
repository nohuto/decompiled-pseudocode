/*
 * XREFs of MiAllocateUserPhysicalPagesCleanup @ 0x14087DF90
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnProcessCommitment @ 0x14047EE9C (MiReturnProcessCommitment.c)
 */

LONG_PTR __fastcall MiAllocateUserPhysicalPagesCleanup(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v8; // rbp
  LONG_PTR result; // rax
  void *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 14);
  v8 = (void *)*((_QWORD *)a1 + 15);
  if ( v6 )
  {
    if ( (*a1 & 2) != 0 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, *((_QWORD *)a1 + 14), a3, a4);
      MiReturnProcessCommitment(v7, v6);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v7);
    }
    if ( (*a1 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 1392), -v6);
  }
  if ( (*a1 & 1) != 0 )
    KiUnstackDetachProcess((__int64)(a1 + 12), 0);
  result = *a1;
  if ( (result & 8) != 0 )
  {
    v10 = v8;
    if ( !v8 )
      v10 = (void *)v7;
    return ObfDereferenceObjectWithTag(v10, 0x68506D4Du);
  }
  return result;
}
