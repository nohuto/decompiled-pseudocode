/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x1409B337C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x1409B30F0 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x14041E930 (ExConvertExclusiveToSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14042F560 (ExIsResourceAcquiredSharedLite.c)
 *     PpDevNodeRemoveFromTree @ 0x1404D43C8 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404DD860 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopIsDescendantNode @ 0x1409B3630 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     IopRemoveCurrentRelationFromList @ 0x140B5D354 (IopRemoveCurrentRelationFromList.c)
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
  __int64 v19; // rcx
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  PVOID P; // [rsp+98h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v20 = a1;
  v22 = 0LL;
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
    LODWORD(v20) = 1;
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
      HIDWORD(v20) = ++v7;
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
            PiPnpRtlBeginOperation(&P);
            v22 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v14 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v22,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(v14 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v14);
            if ( P )
            {
              PiPnpRtlEndOperation((char *)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v14 + 300) == 790 )
          {
            IopRemoveCurrentRelationFromList(a2, v8, &v20);
            ObfDereferenceObject(v8);
            v7 = HIDWORD(v20);
            v6 = v20;
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
