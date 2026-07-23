/*
 * XREFs of MiLockAweVadsShared @ 0x14050D428
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140277040 (ExAcquireAutoExpandPushLockShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
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
