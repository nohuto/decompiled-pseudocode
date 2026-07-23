/*
 * XREFs of MiFreeUnusedPfnPages @ 0x1406ED570
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 */

void __fastcall MiFreeUnusedPfnPages(ULONG *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG *v5; // rsi
  _BYTE *v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  if ( !a1 )
    v5 = &MiSystemPartition;
  MiLockDynamicMemoryExclusive((__int64)v5, (__int64)CurrentThread, a3, a4);
  v7 = v5 + 69;
  if ( a1 )
    goto LABEL_6;
  if ( !*v7 )
  {
    *v7 = 1;
LABEL_6:
    KeGenericCallDpcEx((__int64)MiFreeUnusedPfnPagesDpc, 0LL);
    *v7 = 0;
    *((_QWORD *)v5 + 9) = 0LL;
  }
  MiUnlockDynamicMemoryExclusive((__int64)v5, (__int64)CurrentThread);
}
