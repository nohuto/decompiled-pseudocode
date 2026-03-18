/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C
 * Callers:
 *     IoResolveDependency @ 0x1404F5D10 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14079FA70 (IoSetDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14090EA44 (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A8AB88 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404ED6E8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404F4038 (PnpReleasePowerRelationsQueueLock.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140771D30 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140911614 (PipIsDeviceReadyForPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140B31B68 (PipDereferenceDependencyNode.c)
 *     PiQueryPowerRelations @ 0x140B35658 (PiQueryPowerRelations.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rbx
  __int64 *v1; // rax
  __int64 *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rdx
  __int64 **v8; // rcx

LABEL_1:
  PnpAcquireDependencyRelationsLock(1);
  PnpAcquirePowerRelationsQueueLock();
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    v1 = v0;
    v2 = v0;
    if ( v0 == &PiRebuildPowerRelationsQueue )
      goto LABEL_3;
    v3 = (__int64)(v0 - 9);
    v0 = (__int64 *)*v0;
    v4 = *(_QWORD **)(v3 + 48);
    if ( !v4 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(*(_QWORD *)(v3 + 48))
      && PipCheckIfAllProvidersHaveDevnodes(v3) )
    {
      v5 = *v2;
      if ( *(__int64 **)(*v2 + 8) != v2 )
        goto LABEL_10;
      v6 = (__int64 **)v2[1];
      if ( *v6 != v2 )
        goto LABEL_10;
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      v2[1] = (__int64)v2;
      *v2 = (__int64)v2;
      PipDereferenceDependencyNode(v3);
      PnpReleasePowerRelationsQueueLock();
      PnpReleaseDependencyRelationsLock();
      LOBYTE(v7) = 1;
      PiQueryPowerRelations(*(_QWORD *)(v4[39] + 40LL), v7);
      ObfDereferenceObjectWithTag(v4, 0x44706E50u);
      goto LABEL_1;
    }
  }
  if ( (__int64 *)v0[1] != v1 || (v8 = (__int64 **)v1[1], *v8 != v1) )
LABEL_10:
    __fastfail(3u);
  *v8 = v0;
  v0[1] = (__int64)v8;
  v1[1] = (__int64)v1;
  *v1 = (__int64)v1;
  PipDereferenceDependencyNode(v3);
LABEL_3:
  PnpReleasePowerRelationsQueueLock();
  PnpReleaseDependencyRelationsLock();
}
