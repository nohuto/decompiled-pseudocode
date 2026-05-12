/*
 * XREFs of RaidSrbFunctionFromIrp @ 0x140070658
 * Callers:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     RaUnitCheckRemoveState @ 0x140021C30 (RaUnitCheckRemoveState.c)
 *     NvmeNamespaceCheckRemoveState @ 0x1400416C8 (NvmeNamespaceCheckRemoveState.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x14005AEB8 (RaUnitCheckRemoveStateForDisabled.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidSrbFunctionFromIrp(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    return *(_BYTE *)(v1 + 20);
  else
    return *(_BYTE *)(v1 + 2);
}
