/*
 * XREFs of IopDeleteDevice @ 0x14090E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x1404E4DE8 (IopCleanupNotifications.c)
 *     PnpDeleteAllDependencyRelations @ 0x14090EA44 (PnpDeleteAllDependencyRelations.c)
 *     IopDestroyDeviceNode @ 0x14090EAA8 (IopDestroyDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  void *v4; // rcx
  void *v5; // rcx

  PnpDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(struct _LIST_ENTRY **)(a1 + 8), (void *)a1, v2, v3);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    ObfDereferenceObject(v5);
}
