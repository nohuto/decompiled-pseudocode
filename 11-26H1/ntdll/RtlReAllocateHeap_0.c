/*
 * XREFs of RtlReAllocateHeap_0 @ 0x180001CF0
 * Callers:
 *     _SafeReallocBlob @ 0x180001008 (_SafeReallocBlob.c)
 *     RtlAllocateHandle @ 0x1800018E0 (RtlAllocateHandle.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180018190 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x18001D2F0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlReAllocateHeap_0(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( RtlpHpExportType == 1 )
    return (PVOID)RtlReAllocateHeapFast((int)HeapHandle);
  if ( RtlpHpExportType )
    return (PVOID)RtlReAllocateHeapExport(HeapHandle, Flags, BaseAddress, Size);
  return (PVOID)RtlReAllocateHeapFull((int)HeapHandle);
}
