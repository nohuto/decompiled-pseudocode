/*
 * XREFs of AlpcpFreeCompletionList @ 0x140B2392C
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1408EA5C4 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140A8D1F0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140B2398C (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
  *(_QWORD *)(a1 + 360) = 0LL;
}
