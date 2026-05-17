/*
 * XREFs of RtlReAllocateHeap_0 @ 0x180038020
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     RtlAllocateHandle @ 0x180037C10 (RtlAllocateHandle.c)
 *     _SafeReallocBlob @ 0x18003826C (_SafeReallocBlob.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 * Callees:
 *     <none>
 */

__int64 RtlReAllocateHeap_0()
{
  if ( RtlpHpExportType == 1 )
    return RtlReAllocateHeapFast();
  if ( RtlpHpExportType )
    return RtlReAllocateHeapExport();
  return RtlReAllocateHeapFull();
}
