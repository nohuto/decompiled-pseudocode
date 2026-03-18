/*
 * XREFs of MiLockAweVadsShared @ 0x1405139B8
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiProtectAwePrepare @ 0x140879020 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140879900 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B39FC0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140277AD0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiUnlockAweVadsShared @ 0x1404FA958 (MiUnlockAweVadsShared.c)
 */

ULONG_PTR __fastcall MiLockAweVadsShared(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1040);
  --*(_WORD *)(a1 + 486);
  while ( 1 )
  {
    result = ExAcquireAutoExpandPushLockShared(v3 + 1312, 0LL);
    if ( !*(_QWORD *)(v1 + 624) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1024, -1073740748, 0LL);
    --*(_WORD *)(a1 + 486);
  }
  return result;
}
