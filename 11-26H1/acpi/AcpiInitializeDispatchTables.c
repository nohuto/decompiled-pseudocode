/*
 * XREFs of AcpiInitializeDispatchTables @ 0x1400D98DC
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *AcpiInitializeDispatchTables())(__int64 a1)
{
  unsigned int v0; // ecx
  __int64 (__fastcall **v1)(ULONG_PTR, IRP *); // rdx
  __int64 (__fastcall *v2)(ULONG_PTR, IRP *); // rax
  unsigned int v3; // ecx
  __int64 (__fastcall **v4)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v5)(PVOID, PIRP); // rax
  unsigned int v6; // ecx
  __int64 (__fastcall **v7)(ULONG_PTR, PIRP); // rdx
  __int64 (__fastcall *v8)(ULONG_PTR, PIRP); // rax
  unsigned int v9; // ecx
  __int64 (__fastcall **v10)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v11)(PVOID, PIRP); // rax
  unsigned int v12; // ecx
  __int64 (__fastcall **v13)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v14)(PVOID, PIRP); // rax
  unsigned int v15; // ecx
  __int64 (__fastcall **v16)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v17)(PVOID, PIRP); // rax
  unsigned int v18; // ecx
  __int64 (__fastcall **v19)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v20)(PVOID, PIRP); // rax
  unsigned int v21; // ecx
  __int64 (__fastcall **v22)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v23)(PVOID, PIRP); // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  unsigned int v28; // ecx
  _QWORD *v29; // rdx
  void *v30; // rax
  unsigned int v31; // eax
  _QWORD *v32; // rdx
  void *v33; // rcx
  unsigned int v34; // ecx
  __int64 (__fastcall **v35)(PVOID, PIRP); // rdx
  __int64 (__fastcall *v36)(PVOID, PIRP); // rax
  __int64 (__fastcall *result)(__int64); // rax

  v0 = 0;
  v1 = (__int64 (__fastcall **)(ULONG_PTR, IRP *))&ACPIDispatchFdoPnpTable;
  do
  {
    if ( v0 > 6 )
    {
      switch ( v0 )
      {
        case 7u:
          v2 = ACPIRootIrpQueryDeviceRelations;
          break;
        case 8u:
          v2 = ACPIRootIrpQueryInterface;
          break;
        case 9u:
          v2 = ACPIRootIrpQueryCapabilities;
          break;
        case 0x16u:
          v2 = ACPIFilterIrpDeviceUsageNotification;
          break;
        case 0x19u:
          v2 = (__int64 (__fastcall *)(ULONG_PTR, IRP *))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v2 = ACPIDispatchForwardIrp;
          break;
      }
    }
    else
    {
      if ( v0 == 6 )
        goto LABEL_11;
      if ( v0 )
      {
        switch ( v0 )
        {
          case 1u:
            goto LABEL_9;
          case 2u:
            v2 = (__int64 (__fastcall *)(ULONG_PTR, IRP *))ACPIRootIrpRemoveDevice;
            break;
          case 3u:
LABEL_11:
            v2 = ACPIRootIrpCancelRemoveOrStopDevice;
            break;
          case 4u:
            v2 = ACPIRootIrpStopDevice;
            break;
          default:
LABEL_9:
            v2 = ACPIRootIrpQueryRemoveOrStopDevice;
            break;
        }
      }
      else
      {
        v2 = 0LL;
      }
    }
    *v1 = v2;
    ++v0;
    ++v1;
  }
  while ( v0 <= 0x1A );
  v3 = 0;
  v4 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchPdoPnpTable;
  do
  {
    if ( v3 > 0xA )
    {
      switch ( v3 )
      {
        case 0xBu:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResourceRequirements;
          break;
        case 0x11u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpEject;
          break;
        case 0x12u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSetLock;
          break;
        case 0x13u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
          break;
        case 0x14u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
          break;
        case 0x15u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformation;
          break;
        case 0x16u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
          break;
        case 0x19u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v3 == 10 )
    {
      v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResources;
    }
    else if ( v3 > 5 )
    {
      switch ( v3 )
      {
        case 6u:
          goto LABEL_36;
        case 7u:
          v5 = ACPIBusIrpQueryDeviceRelations;
          break;
        case 8u:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
          break;
        default:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryCapabilities;
          break;
      }
    }
    else
    {
      if ( v3 == 5 )
        goto LABEL_38;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
LABEL_38:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
          goto LABEL_66;
        }
        if ( v3 != 2 )
        {
          if ( v3 != 3 )
          {
            v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpStopDevice;
            goto LABEL_66;
          }
LABEL_36:
          v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          goto LABEL_66;
        }
        v5 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpRemoveDevice;
      }
      else
      {
        v5 = 0LL;
      }
    }
LABEL_66:
    *v4 = v5;
    ++v3;
    ++v4;
  }
  while ( v3 <= 0x1A );
  v6 = 0;
  v7 = (__int64 (__fastcall **)(ULONG_PTR, PIRP))&ACPIDispatchFilterPnpTable;
  do
  {
    if ( v6 > 9 )
    {
      switch ( v6 )
      {
        case 0xBu:
          v8 = ACPIFilterIrpQueryResourceRequirements;
          break;
        case 0xDu:
          v8 = ACPIFilterIrpFilterResourceRequirements;
          break;
        case 0x11u:
          v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIFilterIrpEject;
          break;
        case 0x12u:
          v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIFilterIrpSetLock;
          break;
        case 0x13u:
          v8 = ACPIFilterIrpQueryId;
          break;
        case 0x14u:
          v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIFilterIrpQueryPnpDeviceState;
          break;
        case 0x16u:
          v8 = ACPIFilterIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v8 = ACPIFilterIrpSurpriseRemoval;
          break;
        case 0x19u:
          v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v8 = ACPIDispatchForwardIrp;
          break;
      }
    }
    else if ( v6 == 9 )
    {
      v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIFilterIrpQueryCapabilities;
    }
    else if ( v6 )
    {
      switch ( v6 )
      {
        case 1u:
          goto LABEL_83;
        case 2u:
          v8 = ACPIFilterIrpRemoveDevice;
          break;
        case 3u:
          goto LABEL_81;
        case 4u:
          v8 = ACPIFilterIrpStopDevice;
          break;
        case 5u:
LABEL_83:
          v8 = ACPIRootIrpQueryRemoveOrStopDevice;
          break;
        case 6u:
LABEL_81:
          v8 = ACPIRootIrpCancelRemoveOrStopDevice;
          break;
        case 7u:
          v8 = ACPIFilterIrpQueryDeviceRelations;
          break;
        default:
          v8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIFilterIrpQueryInterface;
          break;
      }
    }
    else
    {
      v8 = 0LL;
    }
    *v7 = v8;
    ++v6;
    ++v7;
  }
  while ( v6 <= 0x1A );
  v9 = 0;
  v10 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchBusFilterPnpTable;
  do
  {
    if ( v9 > 0xA )
    {
      switch ( v9 )
      {
        case 0xBu:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResourceRequirements;
          break;
        case 0x11u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpEject;
          break;
        case 0x12u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSetLock;
          break;
        case 0x13u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
          break;
        case 0x14u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
          break;
        case 0x15u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformation;
          break;
        case 0x16u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
          break;
        case 0x19u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v9 == 10 )
    {
      v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResources;
    }
    else if ( v9 > 5 )
    {
      switch ( v9 )
      {
        case 6u:
          goto LABEL_116;
        case 7u:
          v11 = ACPIBusIrpQueryDeviceRelations;
          break;
        case 8u:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
          break;
        default:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryCapabilities;
          break;
      }
    }
    else
    {
      if ( v9 == 5 )
        goto LABEL_118;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
LABEL_118:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
          goto LABEL_146;
        }
        if ( v9 != 2 )
        {
          if ( v9 != 3 )
          {
            v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpStopDevice;
            goto LABEL_146;
          }
LABEL_116:
          v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          goto LABEL_146;
        }
        v11 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpRemoveDevice;
      }
      else
      {
        v11 = 0LL;
      }
    }
LABEL_146:
    *v10 = v11;
    ++v9;
    ++v10;
  }
  while ( v9 <= 0x1A );
  v12 = 0;
  v13 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchRawDevicePnpTable;
  do
  {
    if ( v12 > 9 )
    {
      switch ( v12 )
      {
        case 0xAu:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResources;
          break;
        case 0xBu:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResourceRequirements;
          break;
        case 0x12u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSetLock;
          break;
        case 0x13u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
          break;
        case 0x14u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
          break;
        case 0x15u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformation;
          break;
        case 0x16u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
          break;
        case 0x19u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v12 == 9 )
    {
      v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIInternalDeviceQueryCapabilities;
    }
    else if ( v12 )
    {
      switch ( v12 )
      {
        case 1u:
          goto LABEL_163;
        case 2u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpRemoveDevice;
          break;
        case 3u:
          goto LABEL_161;
        case 4u:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpStopDevice;
          break;
        case 5u:
LABEL_163:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
          break;
        case 6u:
LABEL_161:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          break;
        case 7u:
          v14 = ACPIInternalDeviceQueryDeviceRelations;
          break;
        default:
          v14 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
          break;
      }
    }
    else
    {
      v14 = 0LL;
    }
    *v13 = v14;
    ++v12;
    ++v13;
  }
  while ( v12 <= 0x1A );
  v15 = 0;
  v16 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchInternalDevicePnpTable;
  do
  {
    if ( v15 > 8 )
    {
      switch ( v15 )
      {
        case 9u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIInternalDeviceQueryCapabilities;
          break;
        case 0xBu:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIInternalDeviceQueryResourceRequirements;
          break;
        case 0x13u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
          break;
        case 0x14u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
          break;
        case 0x15u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformation;
          break;
        case 0x16u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
          break;
        case 0x19u:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v15 == 8 )
    {
      v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
    }
    else if ( v15 )
    {
      if ( v15 != 1 )
      {
        switch ( v15 )
        {
          case 2u:
            v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpRemoveDevice;
            goto LABEL_220;
          case 3u:
            goto LABEL_198;
          case 4u:
            v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpStopDevice;
            goto LABEL_220;
        }
        if ( v15 != 5 )
        {
          if ( v15 != 6 )
          {
            v17 = ACPIInternalDeviceQueryDeviceRelations;
            goto LABEL_220;
          }
LABEL_198:
          v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          goto LABEL_220;
        }
      }
      v17 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
    }
    else
    {
      v17 = 0LL;
    }
LABEL_220:
    *v16 = v17;
    ++v15;
    ++v16;
  }
  while ( v15 <= 0x1A );
  v18 = 0;
  v19 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchEIOBusPnpTable;
  do
  {
    if ( v18 > 0xA )
    {
      switch ( v18 )
      {
        case 0xBu:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResourceRequirements;
          break;
        case 0x11u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpEject;
          break;
        case 0x12u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSetLock;
          break;
        case 0x13u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
          break;
        case 0x14u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
          break;
        case 0x15u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformationEIO;
          break;
        case 0x16u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
          break;
        case 0x17u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
          break;
        case 0x19u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v18 == 10 )
    {
      v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResources;
    }
    else if ( v18 > 5 )
    {
      switch ( v18 )
      {
        case 6u:
          goto LABEL_231;
        case 7u:
          v20 = ACPIBusIrpQueryDeviceRelations;
          break;
        case 8u:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
          break;
        default:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryCapabilities;
          break;
      }
    }
    else
    {
      if ( v18 == 5 )
        goto LABEL_233;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
LABEL_233:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
          goto LABEL_261;
        }
        if ( v18 != 2 )
        {
          if ( v18 != 3 )
          {
            v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpStopDevice;
            goto LABEL_261;
          }
LABEL_231:
          v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          goto LABEL_261;
        }
        v20 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpRemoveDevice;
      }
      else
      {
        v20 = 0LL;
      }
    }
LABEL_261:
    *v19 = v20;
    ++v18;
    ++v19;
  }
  while ( v18 <= 0x1A );
  v21 = 0;
  v22 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchDockPnpTable;
  do
  {
    if ( v21 > 8 )
    {
      switch ( v21 )
      {
        case 9u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpQueryCapabilities;
          break;
        case 0x11u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpEject;
          break;
        case 0x12u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpSetLock;
          break;
        case 0x13u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpQueryID;
          break;
        case 0x14u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpQueryPnpDeviceState;
          break;
        case 0x16u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDispatchIrpInvalid;
          break;
        case 0x17u:
          goto LABEL_274;
        case 0x19u:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
          break;
        default:
          v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
          break;
      }
    }
    else if ( v21 == 8 )
    {
      v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpQueryInterface;
    }
    else
    {
      if ( v21 )
      {
        if ( v21 != 1 )
        {
          if ( v21 == 2 )
          {
            v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDockIrpRemoveDevice;
            goto LABEL_293;
          }
          if ( v21 != 3 && v21 != 4 && v21 != 5 && v21 != 6 )
          {
            v23 = ACPIDockIrpQueryDeviceRelations;
            goto LABEL_293;
          }
        }
LABEL_274:
        v23 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIDispatchIrpSuccess;
        goto LABEL_293;
      }
      v23 = 0LL;
    }
LABEL_293:
    *v22 = v23;
    ++v21;
    ++v22;
  }
  while ( v21 <= 0x1A );
  v24 = 0;
  v25 = 0LL;
  do
  {
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        v26 = ACPIDispatchIrpDepRemoveDevice;
      }
      else
      {
        v26 = ACPIDispatchIrpDepPdoQueryID;
        if ( v24 != 19 )
          v26 = ACPIDispatchIrpBlockedOnDep;
      }
    }
    else
    {
      v26 = 0LL;
    }
    *(_QWORD *)((char *)&ACPIDepPdoPnpTable + v25) = v26;
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        v27 = ACPIDispatchIrpDepFilterRemoveDevice;
      }
      else if ( v24 == 8 || v24 == 19 )
      {
        v27 = ACPIDispatchIrpDepFilterQueryID;
      }
      else
      {
        v27 = ACPIDispatchIrpBlockedOnDep;
      }
    }
    else
    {
      v27 = 0LL;
    }
    *(_QWORD *)((char *)&ACPIDepFilterPnpTable + v25) = v27;
    ++v24;
    v25 += 8LL;
  }
  while ( v24 <= 0x1A );
  v28 = 0;
  v29 = &ACPISurpriseRemovedFilterPnPTable;
  while ( 2 )
  {
    if ( v28 )
    {
      switch ( v28 )
      {
        case 1u:
          goto LABEL_322;
        case 2u:
          v30 = ACPIFilterIrpRemoveDevice;
          break;
        case 3u:
        case 5u:
        case 6u:
LABEL_322:
          v30 = ACPIDispatchIrpSuccess;
          break;
        case 0x17u:
          v30 = ACPIFilterIrpSurpriseRemoval;
          break;
        default:
          v30 = ACPIDispatchIrpSurpriseRemoved;
          break;
      }
    }
    else
    {
      v30 = 0LL;
    }
    *v29 = v30;
    ++v28;
    ++v29;
    if ( v28 <= 0x1A )
      continue;
    break;
  }
  v31 = 0;
  v32 = &ACPIDispatchSurpriseRemovedBusPnpTable;
  do
  {
    if ( v31 )
    {
      v33 = ACPIBusIrpRemoveDevice;
      if ( v31 != 2 )
        v33 = ACPIDispatchIrpSurpriseRemoved;
    }
    else
    {
      v33 = 0LL;
    }
    *v32 = v33;
    ++v31;
    ++v32;
  }
  while ( v31 <= 0x1A );
  v34 = 0;
  v35 = (__int64 (__fastcall **)(PVOID, PIRP))&ACPIDispatchEcDevicePnpTable;
  while ( 2 )
  {
    if ( v34 <= 9 )
    {
      if ( v34 == 9 )
      {
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIInternalDeviceQueryCapabilities;
        goto LABEL_370;
      }
      if ( !v34 )
      {
        v36 = 0LL;
        goto LABEL_370;
      }
      if ( v34 != 1 )
      {
        switch ( v34 )
        {
          case 2u:
            v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIEcRemoveDevice;
            goto LABEL_370;
          case 3u:
            goto LABEL_346;
          case 4u:
            v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIEcStopDevice;
            goto LABEL_370;
        }
        if ( v34 != 5 )
        {
          if ( v34 != 6 )
          {
            if ( v34 == 7 )
              v36 = ACPIBusIrpQueryDeviceRelations;
            else
              v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryInterface;
            goto LABEL_370;
          }
LABEL_346:
          v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpCancelRemoveOrStopDevice;
          goto LABEL_370;
        }
      }
      v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryRemoveOrStopDevice;
      goto LABEL_370;
    }
    switch ( v34 )
    {
      case 0xAu:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResources;
        break;
      case 0xBu:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryResourceRequirements;
        break;
      case 0x12u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSetLock;
        break;
      case 0x13u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryId;
        break;
      case 0x14u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryPnpDeviceState;
        break;
      case 0x15u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpQueryBusInformation;
        break;
      case 0x16u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceUsageNotification;
        break;
      case 0x17u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpSurpriseRemoval;
        break;
      case 0x19u:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpDeviceEnumerated;
        break;
      default:
        v36 = (__int64 (__fastcall *)(PVOID, PIRP))ACPIBusIrpUnhandled;
        break;
    }
LABEL_370:
    *v35 = v36;
    ++v34;
    ++v35;
    if ( v34 <= 0x1A )
      continue;
    break;
  }
  off_14008AC78 = ACPIDispatchIrpSurpriseRemoved;
  off_14008ADC8 = ACPIDispatchPowerIrpUnhandled;
  off_14008ADE0 = ACPIDispatchPowerIrpUnhandled;
  off_14008ADA0 = ACPIDispatchPowerIrpUnhandled;
  ACPIDispatchBusPowerTable = ACPIWakeWaitIrp;
  off_14008ADD0 = (__int64 (__fastcall *)())ACPIBusIrpSetPower;
  off_14008ADB8 = ACPIDispatchPowerIrpUnhandled;
  off_14008ADD8 = ACPIBusIrpQueryPower;
  ACPIDispatchButtonPowerTable = ACPIWakeWaitIrp;
  off_14008ADA8 = (__int64 (__fastcall *)())ACPIDockIrpSetPower;
  off_14008ADB0 = ACPIDockIrpQueryPower;
  off_14008AD80 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPICMButtonSetPower;
  off_14008AD58 = ACPIFilterIrpSetPower;
  off_14008AD60 = ACPIFilterIrpQueryPower;
  off_14008AD30 = (__int64 (__fastcall *)())ACPIRootIrpSetPower;
  off_14008AD38 = ACPIRootIrpQueryPower;
  off_14008ACE0 = (__int64 (__fastcall *)())ACPICMLidSetPower;
  ACPIDepPdoPowerTable = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008ACB0 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008ACB8 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008ACC0 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008ACC8 = ACPIDispatchPowerIrpBlockedOnDep;
  ACPIDepFilterPowerTable = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008AC88 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008AC90 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008AC98 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008ACA0 = ACPIDispatchPowerIrpBlockedOnDep;
  off_14008AD78 = ACPIDispatchPowerIrpUnhandled;
  off_14008AD88 = ACPIDispatchPowerIrpSuccess;
  off_14008AD90 = ACPIDispatchPowerIrpUnhandled;
  ACPIDispatchFilterPowerTable = ACPIWakeWaitIrp;
  ACPIDispatchFdoPowerTable = ACPIWakeWaitIrp;
  off_14008AD00 = ACPIDispatchPowerIrpUnhandled;
  off_14008AD08 = ACPIDispatchPowerIrpSuccess;
  off_14008AD10 = ACPIDispatchPowerIrpSuccess;
  off_14008AD18 = ACPIDispatchPowerIrpUnhandled;
  ACPIDispatchLidPowerTable = ACPIWakeWaitIrp;
  off_14008ACD8 = ACPIDispatchPowerIrpUnhandled;
  off_14008ACE8 = ACPIDispatchPowerIrpSuccess;
  off_14008ACF0 = ACPIDispatchPowerIrpUnhandled;
  off_14008AC68 = ACPIDispatchPowerIrpSuccess;
  off_14008AC70 = ACPIDispatchPowerIrpSuccess;
  ACPIDispatchSurpriseRemovedBusPowerTable = ACPIDispatchPowerIrpSurpriseRemoved;
  off_14008AC60 = ACPIDispatchPowerIrpSurpriseRemoved;
  ACPIDispatchDockPowerTable = ACPIDispatchPowerIrpInvalid;
  off_14008AD50 = ACPIDispatchForwardPowerIrp;
  off_14008AD68 = ACPIDispatchForwardPowerIrp;
  off_14008AD28 = ACPIDispatchForwardPowerIrp;
  off_14008AD40 = ACPIDispatchForwardPowerIrp;
  ACPIDispatchInternalDevicePowerTable = ACPIDispatchPowerIrpInvalid;
  ACPIDispatchSurpriseRemovedFilterPowerTable = ACPIDispatchForwardPowerIrp;
  off_14008AC38 = ACPIDispatchForwardPowerIrp;
  off_14008AC40 = ACPIDispatchForwardPowerIrp;
  off_14008AC48 = ACPIDispatchForwardPowerIrp;
  off_14008AC50 = ACPIDispatchForwardPowerIrp;
  AcpiBusFilterIrpDispatch = ACPIDispatchIrpCreateClose;
  off_14008A738 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008A740 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008A758[0] = ACPIDispatchForwardIrp;
  off_14008A760 = ACPIDispatchForwardIrpWithExceptions;
  AcpiBusFilterIrpDispatchSucceedCreate = ACPIDispatchIrpSuccess;
  off_14008ABC0 = ACPIDockIrpStartDevice;
  off_14008ABF8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008AB38 = ACPIFanDeviceControl;
  off_14008AB40 = ACPIFanStartDevice;
  off_14008AB68 = (__int64 (__fastcall *)())ACPIFanWorker;
  off_14008AB00 = (__int64 (__fastcall *)())ACPIEcStartDevice;
  off_14008AB20 = (__int64 (__fastcall *)())ACPIEcOtherIrpDispatch;
  off_14008AAC0 = ACPIRootIrpStartDevice;
  off_14008AAD8[0] = ACPIDispatchWmiLog;
  off_14008AAE8 = (__int64 (__fastcall *)())ACPIRootWorker;
  off_14008A800 = (__int64 (__fastcall *)())ACPIFilterIrpStartDevice;
  off_14008AA80 = ACPIButtonStartDevice;
  off_14008AA00 = (__int64 (__fastcall *)())ACPICMLidStart;
  off_14008AA28 = (__int64 (__fastcall *)())ACPICMLidWorker;
  off_14008A6A8 = (__int64 (__fastcall *)())ACPIPepWorker;
  off_14008AC00 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008AC18[0] = ACPIDispatchForwardIrp;
  off_14008AC20 = ACPIDispatchForwardIrp;
  AcpiDockPdoIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008ABB8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008ABD8 = ACPIBusIrpUnhandled;
  off_14008ABE0 = ACPIDispatchIrpInvalid;
  AcpiEIOBusIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008AB78 = ACPIDispatchIrpInvalid;
  off_14008AB80 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008AB98 = ACPIDispatchForwardIrp;
  off_14008ABA0 = ACPIDispatchIrpInvalid;
  AcpiFanIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008AB58 = ACPIBusIrpUnhandled;
  off_14008AB60 = ACPIDispatchIrpInvalid;
  AcpiEmbeddedControllerIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008AAF8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008AB18 = ACPIDispatchForwardIrp;
  AcpiFdoIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008AAB8[0] = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008AAE0 = ACPIDispatchForwardIrp;
  AcpiFilterIrpDispatch[0] = ACPIDispatchForwardIrp;
  off_14008A7F8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008A818[0] = ACPIDispatchForwardIrp;
  off_14008A820 = ACPIDispatchForwardIrp;
  AcpiFixedButtonIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008AA78 = ACPIButtonDeviceControl;
  off_14008AA98 = ACPIBusIrpUnhandled;
  off_14008AAA0 = ACPIDispatchIrpInvalid;
  AcpiGenericBusIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008AA38 = ACPIDispatchIrpInvalid;
  off_14008AA40 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008AA58 = ACPIDispatchForwardIrp;
  off_14008AA60 = ACPIDispatchIrpInvalid;
  AcpiLidIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A9F8 = ACPIButtonDeviceControl;
  off_14008AA18 = ACPIBusIrpUnhandled;
  off_14008AA20 = ACPIDispatchIrpInvalid;
  AcpiPdoIrpDispatch = ACPIDispatchIrpCreateClose;
  off_14008A778 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008A780 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008A798 = ACPIBusIrpUnhandled;
  off_14008A7A0 = ACPIDispatchIrpInvalid;
  AcpiPepIrpDispatch = ACPIDispatchIrpCreateClose;
  off_14008A678 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIIrpDispatchDeviceControl;
  off_14008A680 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008A698 = ACPIBusIrpUnhandled;
  off_14008A6A0 = ACPIDispatchIrpInvalid;
  AcpiPowerButtonIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A9C0 = (__int64 (__fastcall *)())ACPICMPowerButtonStart;
  off_14008A9B8 = ACPIButtonDeviceControl;
  off_14008A6F8 = ACPIProcessorDeviceControl;
  off_14008A700 = (__int64 (__fastcall *)())ACPIProcessorStartDevice;
  off_14008A980 = (__int64 (__fastcall *)())ACPIProcessorContainerStartDevice;
  off_14008A900 = (__int64 (__fastcall *)())ACPIInternalDeviceClockIrpStartDevice;
  off_14008A8C0 = (__int64 (__fastcall *)())ACPICMSleepButtonStart;
  off_14008A6B8 = ACPIThermalDeviceControl;
  off_14008A6C0 = ACPIThermalStartDevice;
  off_14008A6D8 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIThermalWmi;
  off_14008A6E8 = (__int64 (__fastcall *)())ACPIThermalWorker;
  off_14008A880 = (__int64 (__fastcall *)())ACPICMExperienceButtonStart;
  off_14008A8A8 = (__int64 (__fastcall *)())ACPICMExperienceButtonWorker;
  off_14008A840 = (__int64 (__fastcall *)(ULONG_PTR, PIRP))ACPIPccInterruptDeviceStart;
  off_14008A9D8 = ACPIBusIrpUnhandled;
  off_14008A9E0 = ACPIDispatchIrpInvalid;
  AcpiProcessorIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008A718 = ACPIBusIrpUnhandled;
  off_14008A720 = ACPIDispatchIrpInvalid;
  AcpiProcessorContainerIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008A978 = ACPIDispatchIrpInvalid;
  off_14008A998 = ACPIDispatchForwardIrp;
  off_14008A9A0 = ACPIDispatchIrpInvalid;
  AcpiRawDeviceIrpDispatch = ACPIDispatchIrpInvalid;
  off_14008A938 = ACPIDispatchIrpInvalid;
  off_14008A940 = (__int64 (__fastcall *)(PDEVICE_OBJECT))ACPIBusIrpStartDevice;
  off_14008A958 = ACPIBusIrpUnhandled;
  off_14008A960 = ACPIDispatchIrpInvalid;
  AcpiRealTimeClockIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A8F8 = ACPIDispatchIrpInvalid;
  off_14008A918 = ACPIBusIrpUnhandled;
  off_14008A920 = ACPIDispatchIrpInvalid;
  AcpiSleepButtonIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A8B8 = ACPIButtonDeviceControl;
  off_14008A8D8 = ACPIBusIrpUnhandled;
  off_14008A8E0 = ACPIDispatchIrpInvalid;
  AcpiDepFilterIrpDispatch[0] = ACPIDispatchForwardIrp;
  off_14008A7B8 = ACPIDispatchForwardIrp;
  off_14008A7C0 = ACPIDispatchIrpBlockedOnDep;
  off_14008A7D8[0] = ACPIDispatchForwardIrp;
  off_14008A7E0 = ACPIDispatchForwardIrp;
  AcpiDepPdoIrpDispatch = ACPIDispatchIrpBlockedOnDep;
  off_14008A638 = ACPIDispatchIrpBlockedOnDep;
  off_14008A640 = ACPIDispatchIrpBlockedOnDep;
  off_14008A658 = ACPIDispatchIrpBlockedOnDep;
  off_14008A660 = ACPIDispatchIrpInvalid;
  AcpiSurpriseRemovedFilterIrpDispatch[0] = ACPIDispatchForwardIrp;
  off_14008A5F8 = ACPIDispatchForwardIrp;
  off_14008A600 = ACPIDispatchIrpSurpriseRemoved;
  off_14008A618[0] = ACPIDispatchForwardIrp;
  off_14008A620 = ACPIDispatchForwardIrp;
  AcpiSurpriseRemovedPdoIrpDispatch = ACPIDispatchIrpSurpriseRemoved;
  off_14008A5B8 = ACPIDispatchIrpSurpriseRemoved;
  off_14008A5C0 = ACPIDispatchIrpSurpriseRemoved;
  off_14008A5D8 = ACPIDispatchIrpSurpriseRemoved;
  off_14008A5E0 = ACPIDispatchIrpSurpriseRemoved;
  AcpiThermalZoneIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A6E0 = ACPIDispatchIrpInvalid;
  AcpiExperienceButtonIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A878 = ACPIDispatchIrpInvalid;
  off_14008A898 = ACPIBusIrpUnhandled;
  off_14008A8A0 = ACPIDispatchIrpInvalid;
  AcpiPccIntIrpDispatch = ACPIDispatchIrpSuccess;
  off_14008A838 = ACPIDispatchIrpInvalid;
  off_14008A858 = ACPIBusIrpUnhandled;
  off_14008A860 = ACPIDispatchIrpInvalid;
  AcpiBuildDeviceDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  off_14008A4E0 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A480 = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessDeviceFailure;
  off_14008A488 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePep;
  off_14008A490 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseDep;
  off_14008A498 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseAdr;
  off_14008A4A0 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseUidOrHid;
  off_14008A4A8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseHid;
  off_14008A4B0 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseUid;
  off_14008A4C0 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseSub;
  off_14008A4C8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseHrv;
  off_14008A4D0 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseCls;
  off_14008A4B8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseCid;
  off_14008A4D8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseSta;
  off_14008A4E8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseEjd;
  off_14008A4F8 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrw;
  off_14008A508 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrx;
  off_14008A518 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrx;
  off_14008A528 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrx;
  off_14008A538 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePr3;
  off_14008A548 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhaseCrs;
  off_14008A558 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrs;
  off_14008A568 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePsc;
  off_14008A578 = (__int64 (__fastcall *)())ACPIBuildProcessDevicePhasePrr;
  off_14008A420 = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessPowerResourceFailure;
  off_14008A428[0] = (__int64 (__fastcall *)())ACPIBuildProcessPowerResourcePhasePep;
  off_14008A430[0] = (__int64 (__fastcall *)())ACPIBuildProcessPowerResourcePhaseDep;
  off_14008A438[0] = (__int64 (__fastcall *)())ACPIBuildProcessPowerResourcePhaseSetupOnOff;
  off_14008A440 = (__int64 (__fastcall *)())ACPIBuildProcessPowerResourcePhaseSta;
  off_14008A3D8[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseCheckPep;
  off_14008A3E0[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseCheckDep;
  off_14008A3E8[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseCheckSta;
  off_14008A3F0[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseCheckBridge;
  off_14008A3F8[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseRunMethod;
  off_14008A4F0 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A500 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A510 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A520 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A530 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEvalStrict;
  off_14008A400[0] = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhasePostProcessResult;
  off_14008A540 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEval;
  off_14008A550 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEval;
  off_14008A560 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEval;
  off_14008A570 = (__int64 (__fastcall *)())ACPIBuildProcessDeviceGenericEval;
  AcpiBuildOperationRegionDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  AcpiBuildPowerResourceDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  AcpiBuildRunMethodDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  off_14008A408 = (__int64 (__fastcall *)())ACPIBuildProcessRunMethodPhaseRecurse;
  AcpiBuildThermalZoneDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  off_14008A380 = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessThermalZoneFailure;
  off_14008A388[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZonePep;
  off_14008A390[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneDep;
  off_14008A398[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneCheckType;
  off_14008A3A0[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneUid;
  off_14008A3A8[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneHid;
  off_14008A3B0[0] = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneSub;
  off_14008A3B8 = (__int64 (__fastcall *)())ACPIBuildProcessThermalZoneHrv;
  off_14008A358[0] = (__int64 (__fastcall *)())ACPIBuildProcessDelayedDependencyPhase0;
  off_14008A360 = (__int64 (__fastcall *)())ACPIBuildProcessDelayedDependencyPhase1;
  AcpiDevicePowerProcessPhase0Table1[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase0DeviceSubPhase1;
  off_14008BC20[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase0SystemSubPhase1;
  AcpiDevicePowerProcessPhase0Table2[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase0DeviceSubPhase2;
  AcpiDevicePowerProcessPhase1Table1[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase1DeviceSubPhase1;
  AcpiDevicePowerProcessPhase1Table2[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase1DeviceSubPhase2;
  AcpiDevicePowerProcessPhase1Table3[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase1DeviceSubPhase3;
  AcpiDevicePowerProcessPhase1Table4[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase1DeviceSubPhase4;
  *(__m128 *)off_14008BBC0 = _mm_movelh_ps(
                               (__m128)(unsigned __int64)ACPIDevicePowerProcessForward,
                               (__m128)(unsigned __int64)ACPIDevicePowerProcessForward);
  AcpiBuildDelayedDependencyDispatch = (__int64 (__fastcall *)(PVOID))ACPIBuildProcessGenericComplete;
  *(_OWORD *)off_14008BBD0 = *(_OWORD *)off_14008BBC0;
  off_14008BB00[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase2SystemSubPhase1;
  off_14008BAD0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase2SystemSubPhase2;
  off_14008BC28[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BC30[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BC38[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BC40 = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBF0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBF8[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BC00[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BC08[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BC10[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBE0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB90[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB98[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBA0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBA8[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BBB0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB60[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB68[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB70[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB78[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB80[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB30[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB38[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB40[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB48[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BB50[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  AcpiDevicePowerProcessPhase2Table1[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BB08[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BB10[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BB18[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BB20[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  AcpiDevicePowerProcessPhase2Table2[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  *(__m128 *)off_14008BAD8 = _mm_movelh_ps(
                               (__m128)(unsigned __int64)ACPIDevicePowerProcessInvalid,
                               (__m128)(unsigned __int64)ACPIDevicePowerProcessInvalid);
  off_14008BAA0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase2SystemSubPhase3;
  off_14008BA70[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase2SystemSubPhase4;
  AcpiDevicePowerProcessPhase5Table1[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase1;
  off_14008BA40[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase1;
  off_14008BA50[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5WarmEjectSubPhase1;
  AcpiDevicePowerProcessPhase5Table2[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase2;
  *(_OWORD *)off_14008BAE8 = *(_OWORD *)off_14008BAD8;
  off_14008BA10[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase2;
  off_14008BA20[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5WarmEjectSubPhase2;
  *(_OWORD *)off_14008BAA8 = *(_OWORD *)off_14008BAD8;
  AcpiDevicePowerProcessPhase5Table3[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase3;
  *(_OWORD *)off_14008BAB8 = *(_OWORD *)off_14008BAD8;
  off_14008B9E0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase3;
  AcpiDevicePowerProcessPhase5Table4[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase4;
  *(_OWORD *)off_14008B9E8 = *(_OWORD *)off_14008BAD8;
  off_14008B9B0[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase4;
  *(_OWORD *)off_14008B9F8 = *(_OWORD *)off_14008BAD8;
  AcpiDevicePowerProcessPhase5Table5[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase5;
  off_14008B980[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase5;
  *(_OWORD *)off_14008B9B8 = *(_OWORD *)off_14008BAD8;
  AcpiDevicePowerProcessPhase5Table6[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5DeviceSubPhase6;
  result = ACPIDevicePowerProcessPhase5SystemSubPhase6;
  *(_OWORD *)off_14008B9C8 = *(_OWORD *)off_14008BAD8;
  off_14008B950[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessPhase5SystemSubPhase6;
  AcpiDevicePowerProcessPhase2Table3[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  *(_OWORD *)off_14008B988 = *(_OWORD *)off_14008BAD8;
  AcpiDevicePowerProcessPhase2Table4[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  *(_OWORD *)off_14008B998 = *(_OWORD *)off_14008BAD8;
  off_14008BA78[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BA80[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BA88[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BA90[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BA48[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BA58[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessForward;
  off_14008BA60[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BA18[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BA28[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  off_14008BA30[0] = (__int64 (__fastcall *)())ACPIDevicePowerProcessInvalid;
  *(_OWORD *)off_14008B958 = *(_OWORD *)off_14008BAD8;
  *(_OWORD *)off_14008B968 = *(_OWORD *)off_14008BAD8;
  return result;
}
