/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x1409B5A28
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     IopRemoveRelationFromList @ 0x1407B5784 (IopRemoveRelationFromList.c)
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(_QWORD *P)
{
  __int64 v1; // rax
  unsigned int v3; // r14d
  unsigned int ***v4; // rbx
  __int64 v6; // rbp
  bool v7; // si
  __int64 v8; // rcx

  v1 = P[7];
  if ( v1 && (v6 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL)) != 0 )
  {
    v7 = 0;
    if ( (*(_DWORD *)(v6 + 396) & 0x10) == 0 )
      v7 = *(_QWORD *)(v6 + 16) != 0LL;
    v4 = (unsigned int ***)(P + 8);
    v3 = IopSortRelationListForRemove(P[8]);
    PnpDeleteLockedDeviceNodes(P[7], (unsigned int)*v4, 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v7 )
    {
      if ( *(_DWORD *)(v6 + 300) == 784 )
        IopRemoveRelationFromList(*v4, P[7]);
      PnpUnlinkDeviceRemovalRelations(v8, (__int64)*v4);
    }
  }
  else
  {
    v3 = -1073741823;
    v4 = (unsigned int ***)(P + 8);
  }
  IopFreeRelationList(*v4);
  ExFreePoolWithTag(P, 0);
  return v3;
}
