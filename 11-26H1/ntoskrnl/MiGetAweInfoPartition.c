/*
 * XREFs of MiGetAweInfoPartition @ 0x1403C604C
 * Callers:
 *     MiGetAweVadPartition @ 0x1403C5FF4 (MiGetAweVadPartition.c)
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesMdl @ 0x14087E04C (MiAllocateUserPhysicalPagesMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x14087EC68 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(stru_140E2ED08.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
}
