/*
 * XREFs of MiAllocateCombineBlock @ 0x140488D08
 * Callers:
 *     MiSharePagePrepare @ 0x1402E9990 (MiSharePagePrepare.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiInsertNewCombineBlocks @ 0x1404CADD8 (MiInsertNewCombineBlocks.c)
 */

__int64 __fastcall MiAllocateCombineBlock(__int64 a1)
{
  volatile LONG *v1; // rdi
  __int64 inserted; // rbx
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG_PTR ProtoPool; // rax
  void *v10; // rdi

  v1 = (volatile LONG *)(a1 + 88);
  inserted = 0LL;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v5 = (_QWORD *)(a1 + 72);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 != a1 + 72 )
  {
    if ( *(_QWORD **)(v7 + 8) != v5 || (v8 = *(_QWORD *)v7, *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v8;
    inserted = v7;
    *(_QWORD *)(v8 + 8) = v5;
    ++*(_DWORD *)((v7 & 0xFFFFFFFFFFFFF000uLL) + 8);
  }
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v6);
  if ( !inserted )
  {
    ProtoPool = MiAllocateProtoPool(64LL, 0x1000uLL, 1836405581LL);
    v10 = (void *)ProtoPool;
    if ( !ProtoPool )
      return 0LL;
    *(_DWORD *)(ProtoPool + 8) = 1;
    *(_QWORD *)(ProtoPool + 16) = a1;
    inserted = MiInsertNewCombineBlocks(a1, ProtoPool + 72);
    if ( !inserted )
    {
      MiFreeProtoPool(v10, 4096LL);
      return 0LL;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 388));
  return inserted;
}
