/*
 * XREFs of MiDeletePxeSharedLocks @ 0x1404CC9A4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePxeSharedLocks(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 1584);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
}
