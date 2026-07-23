/*
 * XREFs of AlpcpFreeCompletionList @ 0x140B25D2C
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1408F0B84 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140A91EC0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140B25D8C (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
