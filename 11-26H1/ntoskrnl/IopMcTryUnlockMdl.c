/*
 * XREFs of IopMcTryUnlockMdl @ 0x1405D9F78
 * Callers:
 *     IoTryReleasePages @ 0x140410F40 (IoTryReleasePages.c)
 *     IopMcDereferenceMdl @ 0x1404111E8 (IopMcDereferenceMdl.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4 (IopMcWaitAndCleanupBufferEntry.c)
 * Callees:
 *     IopMcRemoveMdlPagesFromTable @ 0x1402EF90C (IopMcRemoveMdlPagesFromTable.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
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
