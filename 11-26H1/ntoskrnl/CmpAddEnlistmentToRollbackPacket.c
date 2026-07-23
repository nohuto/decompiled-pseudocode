/*
 * XREFs of CmpAddEnlistmentToRollbackPacket @ 0x140863E9C
 * Callers:
 *     CmSnapshotRMTxArray @ 0x1408B31C4 (CmSnapshotRMTxArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     CmpAddPointerToRollbackPacket @ 0x140863EF0 (CmpAddPointerToRollbackPacket.c)
 */

__int64 __fastcall CmpAddEnlistmentToRollbackPacket(__int64 a1, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  PsReferenceSiloContext(a2);
  v4 = CmpAddPointerToRollbackPacket(a1, a2);
  v5 = v4;
  if ( v4 == -1073740008 )
  {
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    return 0;
  }
  ObfDereferenceObject(a2);
  return v5;
}
