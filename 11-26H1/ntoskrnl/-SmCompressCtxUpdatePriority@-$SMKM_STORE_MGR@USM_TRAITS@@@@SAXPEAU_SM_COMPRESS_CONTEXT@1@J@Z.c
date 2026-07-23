/*
 * XREFs of ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404D6108
 * Callers:
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404D6000 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640230 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority(PEX_SPIN_LOCK SpinLock, unsigned int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 **v6; // rdi
  KIRQL v7; // bp

  if ( *((_DWORD *)SpinLock + 38) != a2 )
  {
    v4 = ExAcquireSpinLockExclusive(SpinLock);
    *((_DWORD *)SpinLock + 38) = a2;
    v6 = (__int64 **)*((_QWORD *)SpinLock + 13);
    v7 = v4;
    while ( v6 != (__int64 **)(SpinLock + 26) )
    {
      KeSetActualBasePriorityThread((__int64)v6[2], a2, v5);
      v6 = (__int64 **)*v6;
    }
    ExReleaseSpinLockExclusive(SpinLock, v7);
  }
}
