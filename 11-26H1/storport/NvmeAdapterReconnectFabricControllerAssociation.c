/*
 * XREFs of NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterConfigureFabricController @ 0x1400E5C6C (NvmeAdapterConfigureFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E829C (NvmeAdapterEnableFabricControllerAsyncEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterSetControllerArbitrationBurst @ 0x1400ED658 (NvmeAdapterSetControllerArbitrationBurst.c)
 *     NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400ED958 (NvmeAdapterSetFabricControllerIoQueueCount.c)
 *     NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400EDA88 (NvmeAdapterSetFabricControllerKeepAliveTimeout.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 */

__int64 __fastcall NvmeAdapterReconnectFabricControllerAssociation(__int64 a1)
{
  __int64 v2; // rcx
  int FabricControllerProperty; // ebx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+48h] [rbp-80h]
  int v19; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+D8h] [rbp+10h] BYREF

  v19 = 0;
  v20 = 0;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4LL,
    (__int64)L"Reconnecting association",
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 96) + 32LL) & 4) != 0 )
    *(_WORD *)(a1 + 4) = -1;
  v2 = *(_QWORD *)(a1 + 712);
  *(_DWORD *)(a1 + 568) = 1;
  *(_WORD *)(a1 + 22) = 0;
  FabricControllerProperty = NvmeAdapterNvmeConnectFabricControllerQueue(v2);
  if ( FabricControllerProperty < 0 )
  {
    v4 = 10;
LABEL_38:
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2LL,
      (__int64)L"Reconnecting association failed",
      L"Status",
      FabricControllerProperty,
      L"FailureCode",
      v4,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    return (unsigned int)FabricControllerProperty;
  }
  if ( (*(_BYTE *)(a1 + 136) & 0x40) != 0 )
  {
    FabricControllerProperty = NvmeFabricControllerQueueAuthenticate(*(_QWORD *)(a1 + 712));
    if ( FabricControllerProperty < 0 )
    {
      v4 = 11;
      goto LABEL_38;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 712) + 120LL) = 5;
  *(_DWORD *)(a1 + 568) = 2;
  FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 0, (_QWORD *)(a1 + 584));
  if ( FabricControllerProperty < 0 )
  {
    v4 = 15;
    goto LABEL_38;
  }
  FabricControllerProperty = NvmeAdapterConfigureFabricController(a1, &v19);
  if ( FabricControllerProperty < 0
    || (FabricControllerProperty = NvmeAdapterEnableFabricController(a1, &v19), FabricControllerProperty < 0) )
  {
    v4 = v19;
    goto LABEL_38;
  }
  v5 = a1 + 592;
  ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0x52436152u);
  *(_QWORD *)(a1 + 592) = 0LL;
  FabricControllerProperty = NvmeAdapterGetControllerIdentifyData(a1, 0, 1, 0, 0, (_QWORD *)(a1 + 592));
  if ( FabricControllerProperty < 0 )
  {
    v4 = 20;
    goto LABEL_38;
  }
  FabricControllerProperty = 0;
  if ( *(_DWORD *)(a1 + 572) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)v5 + 516LL) )
    {
      v4 = 21;
      FabricControllerProperty = -1073741637;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(a1 + 576) & 0xFFFF0000) >= 0x20000 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0x52436152u);
      *(_QWORD *)(a1 + 600) = 0LL;
      FabricControllerProperty = NvmeAdapterGetControllerIdentifyData(a1, -1, 6, 0, 0, (_QWORD *)(a1 + 600));
      if ( FabricControllerProperty < 0 )
      {
        v4 = 22;
        goto LABEL_38;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)v5 + 525LL) & 1) != 0 )
    {
      FabricControllerProperty = NvmeAdapterGetFabricControllerFeature(a1, v6, 6, v7, 0, v14, v15, v16, v17, v18, &v20);
      if ( FabricControllerProperty < 0 )
      {
        v4 = 23;
        goto LABEL_38;
      }
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)v20 << 19) ^ (*(_QWORD *)(a1 + 136) ^ ((unsigned __int64)v20 << 19)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
    FabricControllerProperty = NvmeAdapterSetFabricControllerIoQueueCount(a1);
    if ( FabricControllerProperty < 0 )
    {
      v4 = 24;
      goto LABEL_38;
    }
    NvmeAdapterSetControllerArbitrationBurst(a1);
    v5 = a1 + 592;
  }
  if ( *(_WORD *)(*(_QWORD *)v5 + 320LL) )
  {
    FabricControllerProperty = NvmeAdapterSetFabricControllerKeepAliveTimeout(a1, v6);
    v11 = *(_QWORD *)v5;
    if ( FabricControllerProperty < 0 )
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2LL,
        (__int64)L"KATO set failed",
        L"Status",
        FabricControllerProperty,
        L"KeepAliveTimeout msecs",
        *(_DWORD *)(a1 + 1076),
        L"KAS",
        *(_WORD *)(v11 + 320),
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      v4 = 31;
      goto LABEL_38;
    }
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"KATO set",
      L"KeepAliveTimeout msecs",
      *(_DWORD *)(a1 + 1076),
      L"KAS",
      *(_WORD *)(v11 + 320),
      L"TBKAS",
      (*(_DWORD *)(v11 + 96) & 0x40LL) != 0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
  else
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"Keep Alive not supported",
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
  if ( *(_BYTE *)(a1 + 742) )
  {
    FabricControllerProperty = NvmeAdapterEnableFabricControllerAsyncEvent(a1, v8, v9, v10);
    if ( FabricControllerProperty < 0 )
    {
      v4 = 33;
      goto LABEL_38;
    }
  }
  v12 = *(_QWORD *)(a1 + 968) | 1LL;
  *(_DWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 968) = v12;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4LL,
    (__int64)L"Reconnecting association succeeded",
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  return (unsigned int)FabricControllerProperty;
}
