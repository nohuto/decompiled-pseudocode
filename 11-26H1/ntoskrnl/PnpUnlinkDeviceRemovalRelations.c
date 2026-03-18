/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x14091129C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x140911010 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x140913948 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140431900 (ExConvertExclusiveToSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14043CCB0 (ExIsResourceAcquiredSharedLite.c)
 *     PpDevNodeRemoveFromTree @ 0x1404DACE8 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404E42C0 (PnpSetDeviceInstanceRemovalEvent.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopIsDescendantNode @ 0x140911550 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140912C40 (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     IopRemoveCurrentRelationFromList @ 0x140B5A038 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG IsResourceAcquiredSharedLite; // ebx
  ULONG v5; // edi
  unsigned int v6; // r12d
  unsigned int v7; // edi
  _QWORD *v8; // r15
  unsigned int *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rsi
  int v15; // eax
  struct _KTHREAD *v16; // rax
  __int64 v17; // r13
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF
  PVOID P; // [rsp+98h] [rbp+48h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a1;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --CurrentThread->KernelApcDisable;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
  v5 = IsResourceAcquiredSharedLite;
  if ( IsResourceAcquiredSharedLite )
  {
    do
    {
      ExReleaseResourceLite(&IopDeviceTreeLock);
      --v5;
    }
    while ( v5 );
    do
    {
      ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
      --IsResourceAcquiredSharedLite;
    }
    while ( IsResourceAcquiredSharedLite );
  }
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v6 = 1;
    v7 = 0;
    LODWORD(v21) = 1;
    while ( 1 )
    {
      v8 = 0LL;
      if ( v6 )
      {
        if ( !*(_BYTE *)(a2 + 8) )
          break;
      }
      v9 = *(unsigned int **)a2;
      v10 = **(_DWORD **)a2;
      if ( v7 >= v10 )
        break;
      if ( v6 > 1 )
      {
        if ( v6 != 2 )
          break;
        v11 = v10 - v7 - 1;
      }
      else
      {
        v11 = v7;
      }
      if ( v9 && (unsigned int)v11 < v10 )
      {
        _mm_lfence();
        v12 = 3 * v11;
        v13 = 1;
        v8 = *(_QWORD **)&v9[2 * v12 + 4];
      }
      else
      {
        v13 = 0;
      }
      HIDWORD(v21) = ++v7;
      if ( !v13 )
        break;
      v14 = *(_QWORD *)(v8[39] + 40LL);
      IopIsDescendantNode(a2);
      v15 = *(_DWORD *)(v14 + 300);
      if ( v15 == 789 || v15 == 790 )
      {
        v16 = KeGetCurrentThread();
        v17 = *(_QWORD *)(v14 + 16);
        --v16->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v14 + 40);
        v18 = PpDevNodeRemoveFromTree((_QWORD *)v14);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v18 )
        {
          *(_QWORD *)(v14 + 648) = v17;
          if ( *(_QWORD *)(v14 + 48) )
          {
            PiPnpRtlBeginOperation(&P, v19);
            v23 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v14 + 48),
              1,
              0,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v23,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v20, *(_QWORD *)(v14 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v14);
            if ( P )
            {
              PiPnpRtlEndOperation(P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v14 + 300) == 790 )
          {
            IopRemoveCurrentRelationFromList(a2, v8, &v21);
            ObfDereferenceObject(v8);
            v7 = HIDWORD(v21);
            v6 = v21;
          }
          else
          {
            ObfDereferenceObject(v8);
          }
        }
      }
    }
  }
  ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
