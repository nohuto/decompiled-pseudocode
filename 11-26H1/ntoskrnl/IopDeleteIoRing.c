/*
 * XREFs of IopDeleteIoRing @ 0x140797E10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     IopIoRingCleanupRegBufferArray @ 0x140797E80 (IopIoRingCleanupRegBufferArray.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteIoRing(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)(a1 + 184) )
    IopIoRingCleanupRegBufferArray(*(unsigned int *)(a1 + 176));
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x46527249u);
  v3 = *(struct _MDL **)(a1 + 72);
  if ( v3 )
    IopUnlockAndFreeMdl(v3);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    MiRemoveFromSystemSpace(v4);
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    ObfDereferenceObject(v5);
}
