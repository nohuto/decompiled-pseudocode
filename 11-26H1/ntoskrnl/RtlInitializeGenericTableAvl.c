/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x140488F70
 * Callers:
 *     PiDmObjectManagerInit @ 0x1407AA304 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x1407E775C (PopDirectedDripsUmInitialize.c)
 *     EtwpEnableKeyProviders @ 0x140833B0C (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 *     PiDqQueryCreate @ 0x140950BD4 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     SshpCacheInitializeLibraryCache @ 0x140B45C64 (SshpCacheInitializeLibraryCache.c)
 *     VfAvlInitializeTreeEx @ 0x140C280DC (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140C305F0 (ViPtInitAvlTrees.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset_0(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
