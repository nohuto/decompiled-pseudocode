/*
 * XREFs of MiMarkHotPatchesForHiberPhase @ 0x140C017D4
 * Callers:
 *     MmMarkImageForHiberPhase @ 0x140C014C8 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403F3B30 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C00CD0 (MiMarkNonPagedHiberPhasePages.c)
 *     MiEnumerateBasePatches @ 0x140C016F8 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140C01770 (MiMarkHotPatchForHiberPhase.c)
 */

__int64 __fastcall MiMarkHotPatchesForHiberPhase(__int64 a1)
{
  __int64 v1; // rdi
  __int64 BaseLoaderPortion; // rax
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rbx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v5 = 0;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) != 0 )
  {
    v1 = *(_QWORD *)(BaseLoaderPortion + 248);
    LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(v1, &v5);
    MiMarkNonPagedHiberPhasePages(
      *(_QWORD *)(v1 + 48),
      *(_QWORD *)(v1 + 48) + (unsigned int)(*(_DWORD *)(v1 + 64) - 1),
      0);
    MiMarkNonPagedHiberPhasePages(
      LoadedModuleImageAdditionalTablesAddress,
      LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v5 - 1),
      0);
  }
  result = MiEnumerateBasePatches(v1, (__int64)MiMarkHotPatchForHiberPhase, 0LL);
  if ( stru_140E36558.Header.WaitListHead.Blink == (struct _LIST_ENTRY *)v1 )
    return MiMarkHotPatchForHiberPhase((__int64)stru_140E36558.Header.WaitListHead.Flink);
  return result;
}
