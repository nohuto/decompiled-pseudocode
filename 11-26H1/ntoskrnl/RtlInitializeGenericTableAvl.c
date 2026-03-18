/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14048F5B0
 * Callers:
 *     PiDmObjectManagerInit @ 0x1407A7754 (PiDmObjectManagerInit.c)
 *     PopDirectedDripsUmInitialize @ 0x1407E26CC (PopDirectedDripsUmInitialize.c)
 *     EtwpEnableKeyProviders @ 0x14082D8CC (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x14082DCE0 (EtwpInitializeAutoLoggers.c)
 *     PiDqQueryCreate @ 0x140990174 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     SshpCacheInitializeLibraryCache @ 0x140B43D74 (SshpCacheInitializeLibraryCache.c)
 *     VfAvlInitializeTreeEx @ 0x140C220CC (VfAvlInitializeTreeEx.c)
 *     ViPtInitAvlTrees @ 0x140C2A5E0 (ViPtInitAvlTrees.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset_0(Table, 0, sizeof(RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
