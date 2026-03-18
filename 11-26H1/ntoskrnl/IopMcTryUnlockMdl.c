/*
 * XREFs of IopMcTryUnlockMdl @ 0x1405D7788
 * Callers:
 *     IoTryReleasePages @ 0x140411820 (IoTryReleasePages.c)
 *     IopMcDereferenceMdl @ 0x140411AC8 (IopMcDereferenceMdl.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D77E4 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     IopMcRemoveMdlPagesFromTable @ 0x14030D88C (IopMcRemoveMdlPagesFromTable.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 */

char __fastcall IopMcTryUnlockMdl(ULONG_PTR BugCheckParameter2, signed __int64 BugCheckParameter3)
{
  ULONG_PTR v3; // rax
  struct _MDL *v4; // rdi

  if ( !BugCheckParameter3 )
    return 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), 0LL, BugCheckParameter3);
  v4 = (struct _MDL *)v3;
  if ( BugCheckParameter3 != v3 )
    return 0;
  IopMcRemoveMdlPagesFromTable(BugCheckParameter2, v3);
  if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 12), 0xFFFFFFFE);
  IopUnlockAndFreeMdl(v4);
  return 1;
}
