/*
 * XREFs of MiGetAweInfoPartition @ 0x1403BC1DC
 * Callers:
 *     MiGetAweVadPartition @ 0x1403BC184 (MiGetAweVadPartition.c)
 *     MiFreePhysicalPageChain @ 0x1403C73D4 (MiFreePhysicalPageChain.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesMdl @ 0x140877C6C (MiAllocateUserPhysicalPagesMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x140878888 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(stru_140E2EB88.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
}
