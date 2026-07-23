/*
 * XREFs of AlpcSectionDestroyProcedure @ 0x140AACFB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcDeleteBlobByHandle @ 0x140A73588 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x140A73664 (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcSectionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // rcx

  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    AlpcDeleteBlobByHandle(v5, *(_QWORD *)(a1 + 24), a1, a4);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    AlpcpRemoveResourcePort(v6, a1, a3, a4);
    ObfDereferenceObject(*(PVOID *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObject(*(PVOID *)a1);
  return 0LL;
}
