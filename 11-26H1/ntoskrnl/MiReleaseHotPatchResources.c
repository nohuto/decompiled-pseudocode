/*
 * XREFs of MiReleaseHotPatchResources @ 0x140B57DDC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiFinishHoldingDirtyFaults @ 0x140700E74 (MiFinishHoldingDirtyFaults.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, PteAddress, v6);
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
