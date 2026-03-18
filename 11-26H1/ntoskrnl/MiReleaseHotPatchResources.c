/*
 * XREFs of MiReleaseHotPatchResources @ 0x140B55540
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140874C50 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406FC1A4 (MiFinishHoldingDirtyFaults.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseHotPatchResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 *PteAddress; // rax
  unsigned int v6; // r8d
  struct _MDL *v7; // rdi
  struct _MDL *v8; // rax
  void *v9; // rcx
  void *v10; // rcx

  if ( (*(_DWORD *)(a1 + 156) & 2) != 0 )
    MiFinishHoldingDirtyFaults((__int64 *)(a1 + 88), a2, a3);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    PteAddress = (unsigned __int64 *)MiGetPteAddress(*(_QWORD *)(v4 + 24));
    MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, v6);
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) &= ~1u;
    IoFreeMdl(*(PMDL *)(a1 + 64));
  }
  v7 = *(struct _MDL **)(a1 + 56);
  if ( v7 )
  {
    v8 = *(struct _MDL **)(a1 + 56);
    do
    {
      *(_QWORD *)(a1 + 56) = v8->Next;
      MmUnlockPages(v7);
      IoFreeMdl(v7);
      v7 = *(struct _MDL **)(a1 + 56);
      v8 = v7;
    }
    while ( v7 );
  }
  v9 = *(void **)(a1 + 40);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v10 = *(void **)(a1 + 48);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
