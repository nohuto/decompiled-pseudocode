/*
 * XREFs of MiFinishUnlinkBatch @ 0x140298600
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 * Callees:
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     MiUnlinkPageListUpdateCounts @ 0x140298700 (MiUnlinkPageListUpdateCounts.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPagesUpdateCounts @ 0x1402DAF00 (MiUnlinkPagesUpdateCounts.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiFinishUnlinkBatch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax

  MiUnlinkPageListUpdateCounts();
  if ( (*(_DWORD *)v6 & 1) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v6 + 48) + 32LL));
    *(_DWORD *)a1 &= ~1u;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  MiUnlinkPagesUpdateCounts(a1, v5, v7);
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 && *(_WORD *)(a1 + 128) == 0xFFFF && (*(_DWORD *)a1 & 0x100) == 0 )
    {
      qsort((void *)(a1 + 648), *(_QWORD *)(a1 + 120), 8uLL, MiTbFlushSort);
      *(_DWORD *)a1 |= 0x80u;
    }
    v9 = guard_dispatch_icall_no_overrides(a1, a3, *(_QWORD *)(a1 + 120));
    *(_DWORD *)a1 &= 0xFFFFFE7F;
    v8 = v9;
    *(_WORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  else
  {
    MiUnlockAllBatchPages(a1, 0LL);
  }
  *(_DWORD *)a1 &= ~4u;
  return v8;
}
