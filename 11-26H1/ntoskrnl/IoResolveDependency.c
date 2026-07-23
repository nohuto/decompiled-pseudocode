/*
 * XREFs of IoResolveDependency @ 0x1404EF2D0
 * Callers:
 *     <none>
 * Callees:
 *     PipAddBindingId @ 0x1407A2680 (PipAddBindingId.c)
 *     PipDeleteBindingId @ 0x1407A2984 (PipDeleteBindingId.c)
 *     PipIsProviderStarted @ 0x1407A2A5C (PipIsProviderStarted.c)
 *     PipLinkDeviceObjectAndDependencyNode @ 0x1407A2ABC (PipLinkDeviceObjectAndDependencyNode.c)
 *     PipMergeDependencyNodes @ 0x1407A2C34 (PipMergeDependencyNodes.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409B0E50 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409B367C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x140B0A564 (PipQueryBindingResolution.c)
 *     PipAttemptDependentsStart @ 0x140B2B1DC (PipAttemptDependentsStart.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140B33D14 (PipUnlinkDeviceObjectAndDependencyNode.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140B48FD4 (PipCreateDependencyNode.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v18 = 1LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  v19 = v2;
  v4 = PipQueryBindingResolution(&v18);
  v6 = v4;
  if ( v4 )
  {
    v13 = *(_QWORD *)(v4 + 48);
    if ( !v13 )
    {
      v11 = 0;
      if ( a2 )
      {
        v14 = *(_QWORD *)(a2 + 312);
        if ( *(_QWORD *)(v14 + 80) )
        {
          PipMergeDependencyNodes(*(_QWORD *)(v14 + 80), v6);
          goto LABEL_17;
        }
      }
      PipLinkDeviceObjectAndDependencyNode(a2, v6);
LABEL_9:
      if ( !a2 )
      {
LABEL_10:
        PipAddtoRebuildPowerRelationsQueue(a2);
        PipAddDependentsToRebuildPowerRelationsQueue(a2);
        PnpReleaseDependencyRelationsLock();
        PipProcessRebuildPowerRelationsQueue();
        return (unsigned int)v11;
      }
LABEL_17:
      v15 = *(_QWORD *)(a2 + 312);
      v16 = *(_QWORD *)(v15 + 40);
      if ( v16
        && (*(_DWORD *)(v16 + 396) & 0x20000) == 0
        && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v15 + 40)) )
      {
        PipAttemptDependentsStart(v17);
      }
      goto LABEL_10;
    }
    if ( v13 == a2 )
    {
      v11 = 0;
      goto LABEL_6;
    }
    PipDeleteBindingId(v6, v2);
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 312);
    if ( *(_QWORD *)(v7 + 80) )
    {
      v11 = PipAddBindingId(*(_QWORD *)(v7 + 80), v2, v6);
      if ( v11 < 0 )
        goto LABEL_6;
      goto LABEL_17;
    }
  }
  LODWORD(v18) = 0;
  v19 = a2;
  v8 = PipCreateDependencyNode(&v18, v5, v6);
  v10 = v8;
  if ( v8 )
  {
    v11 = PipAddBindingId(v8, v2, v9);
    if ( v11 < 0 )
    {
      PipUnlinkDeviceObjectAndDependencyNode(a2, v10);
      PipDereferenceDependencyNode(v10);
      goto LABEL_6;
    }
    PipDereferenceDependencyNode(v10);
    goto LABEL_9;
  }
  v11 = -1073741670;
LABEL_6:
  PnpReleaseDependencyRelationsLock();
  return (unsigned int)v11;
}
