/*
 * XREFs of NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400D3D60 (NvmeAdapterConnectControllerInternal.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterAllocateControllerIoQueues @ 0x1400E46F0 (NvmeAdapterAllocateControllerIoQueues.c)
 *     NvmeAdapterAllocateControllerQueueResources @ 0x1400E47BC (NvmeAdapterAllocateControllerQueueResources.c)
 *     NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands @ 0x1400E4910 (NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterConfigureFabricController @ 0x1400E5C6C (NvmeAdapterConfigureFabricController.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E829C (NvmeAdapterEnableFabricControllerAsyncEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerNvmSetData @ 0x1400E98FC (NvmeAdapterGetControllerNvmSetData.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterInitializeControllerQueue @ 0x1400E9F68 (NvmeAdapterInitializeControllerQueue.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterSetControllerArbitrationBurst @ 0x1400ED658 (NvmeAdapterSetControllerArbitrationBurst.c)
 *     NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400ED958 (NvmeAdapterSetFabricControllerIoQueueCount.c)
 *     NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400EDA88 (NvmeAdapterSetFabricControllerKeepAliveTimeout.c)
 *     NvmeControllerCreatePendingIoQueueContext @ 0x1400F2460 (NvmeControllerCreatePendingIoQueueContext.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 */

__int64 __fastcall NvmeAdapterConnectFabricNvmeController(
        _QWORD *DeferredContext,
        const wchar_t *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  __int64 v6; // r13
  const wchar_t *v8; // rsi
  int FabricControllerQueue; // edi
  __int64 v11; // rcx
  _DWORD *v12; // r15
  unsigned int v13; // ecx
  int v14; // r8d
  char *v15; // r14
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // ecx
  unsigned __int16 v20; // di
  __int64 Pool; // rax
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // eax
  unsigned __int16 i; // di
  __int64 v26; // r8
  int v27; // eax
  char v28; // r9
  char v29; // al
  char v30; // cl
  __int64 v31; // rcx
  const wchar_t *v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  wchar_t *Dpc; // [rsp+20h] [rbp-B8h]
  int v37; // [rsp+28h] [rbp-B0h]
  int v38; // [rsp+28h] [rbp-B0h]
  int v39; // [rsp+28h] [rbp-B0h]
  wchar_t *v40; // [rsp+30h] [rbp-A8h]
  __int16 v41; // [rsp+38h] [rbp-A0h]
  wchar_t *v42; // [rsp+40h] [rbp-98h]
  unsigned __int64 v43; // [rsp+48h] [rbp-90h]

  v6 = DeferredContext[16];
  v8 = a2;
  if ( a4 || a5 )
  {
    if ( *((_DWORD *)DeferredContext + 143) != 1 )
    {
      FabricControllerQueue = -1073741637;
      *a6 = 34;
LABEL_95:
      *((_DWORD *)DeferredContext + 142) = 3;
      NvmeAdapterCleanupFabricNvmeController((__int64)DeferredContext, (__int64)a2);
      return (unsigned int)FabricControllerQueue;
    }
    if ( a4 )
      *((_WORD *)DeferredContext + 10) = a4;
    if ( a5 )
    {
      if ( a5 < 2u )
      {
        FabricControllerQueue = -1073741811;
        *a6 = 35;
        goto LABEL_95;
      }
      *((_DWORD *)DeferredContext + 2) = a5;
    }
  }
  *((_DWORD *)DeferredContext + 142) = 1;
  *((_WORD *)DeferredContext + 11) = 0;
  FabricControllerQueue = NvmeAdapterCreateFabricControllerQueue(DeferredContext[89]);
  if ( FabricControllerQueue < 0 )
  {
    *a6 = 8;
    goto LABEL_95;
  }
  FabricControllerQueue = NvmeAdapterAllocateControllerQueueResources(DeferredContext[89]);
  if ( FabricControllerQueue < 0 )
  {
    *a6 = 9;
    goto LABEL_95;
  }
  FabricControllerQueue = NvmeAdapterNvmeConnectFabricControllerQueue(DeferredContext[89]);
  if ( FabricControllerQueue < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 7;
    *a6 = 10;
    goto LABEL_95;
  }
  if ( (DeferredContext[17] & 0x40) != 0 )
  {
    if ( !v8 )
    {
      FabricControllerQueue = -1073741715;
      *a6 = 11;
      goto LABEL_95;
    }
    v11 = DeferredContext[89];
    DeferredContext[208] = v8;
    DeferredContext[209] = a3;
    FabricControllerQueue = NvmeFabricControllerQueueAuthenticate(v11);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 11;
      goto LABEL_95;
    }
  }
  v12 = DeferredContext + 72;
  *(_DWORD *)(DeferredContext[89] + 120LL) = 5;
  *((_DWORD *)DeferredContext + 142) = 2;
  FabricControllerQueue = NvmeAdapterGetFabricControllerProperty(DeferredContext, 8LL, DeferredContext + 72);
  if ( FabricControllerQueue < 0 )
  {
    *a6 = 13;
    goto LABEL_95;
  }
  v13 = HIWORD(*v12);
  if ( !v13 || v13 <= 1 && (*v12 & 0xFF00u) < 0x300 )
  {
    FabricControllerQueue = -1073741735;
    *a6 = 14;
    goto LABEL_95;
  }
  FabricControllerQueue = NvmeAdapterGetFabricControllerProperty(DeferredContext, 0LL, DeferredContext + 73);
  if ( FabricControllerQueue < 0 )
  {
    *a6 = 15;
    goto LABEL_95;
  }
  FabricControllerQueue = NvmeAdapterConfigureFabricController((__int64)DeferredContext, a6);
  if ( FabricControllerQueue < 0 )
    goto LABEL_95;
  FabricControllerQueue = NvmeAdapterEnableFabricController(DeferredContext, a6);
  if ( FabricControllerQueue < 0 )
  {
    *((_DWORD *)DeferredContext + 298) = 8;
    goto LABEL_95;
  }
  v15 = (char *)(DeferredContext + 74);
  LOBYTE(v14) = 1;
  FabricControllerQueue = NvmeAdapterGetControllerIdentifyData(
                            (_DWORD)DeferredContext,
                            0,
                            v14,
                            0,
                            0,
                            (__int64)(DeferredContext + 74));
  if ( FabricControllerQueue < 0 )
  {
    *a6 = 20;
    *((_DWORD *)DeferredContext + 298) = 30;
    goto LABEL_95;
  }
  LOBYTE(v16) = 4;
  if ( (int)NvmeAdapterGetFabricControllerFeature((_DWORD)DeferredContext, (_DWORD)a2, v16, v17, 0, v37) >= 0 )
    *((_WORD *)DeferredContext + 28) = 0;
  v18 = *((_DWORD *)DeferredContext + 143);
  a2 = &word_140152E7C;
  FabricControllerQueue = 0;
  if ( v18 == 1 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)v15 + 516LL);
    if ( !v19 )
    {
      *a6 = 21;
      FabricControllerQueue = -1073741637;
      goto LABEL_95;
    }
    v20 = 255;
    if ( v19 > 0xFF )
      StorEtwNvmeControllerEvent(
        (__int64)DeferredContext,
        1,
        3LL,
        (__int64)L"NN exceeds limit",
        L"NN",
        v19,
        L"Limit",
        255,
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
    if ( *(_DWORD *)(*(_QWORD *)v15 + 516LL) < 0xFFu )
      v20 = *(_DWORD *)(*(_QWORD *)v15 + 516LL);
    *((_WORD *)DeferredContext + 12) = v20;
    Pool = RaidAllocatePool(64LL, 4LL * v20, 1380147538LL, *(_QWORD *)(v6 + 8));
    DeferredContext[76] = Pool;
    if ( !Pool )
    {
      FabricControllerQueue = -1073741801;
      goto LABEL_95;
    }
    if ( (*v12 & 0xFFFF0000) >= 0x20000 )
    {
      LOBYTE(v22) = 6;
      FabricControllerQueue = NvmeAdapterGetControllerIdentifyData(
                                (_DWORD)DeferredContext,
                                -1,
                                v22,
                                0,
                                0,
                                (__int64)(DeferredContext + 75));
      if ( FabricControllerQueue < 0 )
      {
        *a6 = 22;
        goto LABEL_95;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)v15 + 525LL) & 1) != 0 )
    {
      LOBYTE(v22) = 6;
      FabricControllerQueue = NvmeAdapterGetFabricControllerFeature(
                                (_DWORD)DeferredContext,
                                (_DWORD)a2,
                                v22,
                                v23,
                                0,
                                v38);
      if ( FabricControllerQueue < 0 )
      {
        *a6 = 23;
        goto LABEL_95;
      }
      DeferredContext[17] &= ~0x80000uLL;
    }
    v24 = *((_DWORD *)DeferredContext + 2);
    if ( v24 >= (unsigned int)(unsigned __int16)*((_DWORD *)DeferredContext + 146) + 1 )
      v24 = (unsigned __int16)*((_DWORD *)DeferredContext + 146) + 1;
    *((_DWORD *)DeferredContext + 2) = v24;
    FabricControllerQueue = NvmeAdapterSetFabricControllerIoQueueCount(DeferredContext);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 24;
      goto LABEL_95;
    }
    FabricControllerQueue = NvmeAdapterAllocateControllerIoQueues((__int64)DeferredContext);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 25;
      goto LABEL_95;
    }
    for ( i = 1; i <= *((_WORD *)DeferredContext + 10); ++i )
      NvmeAdapterInitializeControllerQueue(DeferredContext, i, 0LL);
    v26 = *(_QWORD *)v15;
    v27 = 0x200000;
    v28 = *(_BYTE *)(*(_QWORD *)v15 + 77LL);
    if ( v28 && 1 << ((*((_BYTE *)DeferredContext + 590) & 0xF) + 12) << v28 < 0x200000 )
      v27 = 1 << ((*((_BYTE *)DeferredContext + 590) & 0xF) + 12) << v28;
    *((_DWORD *)DeferredContext + 155) = v27;
    if ( (*(_DWORD *)(v26 + 96) & 4) != 0 )
    {
      if ( *(_WORD *)(v26 + 338) )
      {
        FabricControllerQueue = NvmeAdapterGetControllerNvmSetData(DeferredContext);
        if ( FabricControllerQueue < 0 )
        {
          *a6 = 26;
          goto LABEL_95;
        }
      }
    }
    NvmeAdapterSetControllerArbitrationBurst(DeferredContext);
    DeferredContext[17] &= ~0x4000uLL;
    FabricControllerQueue = NvmeControllerCreatePendingIoQueueContext(DeferredContext);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 27;
      goto LABEL_95;
    }
    v29 = 4;
    if ( (unsigned int)*(unsigned __int8 *)(DeferredContext[74] + 259LL) + 1 < 4 )
      v29 = *(_BYTE *)(DeferredContext[74] + 259LL) + 1;
    *((_BYTE *)DeferredContext + 742) = v29;
  }
  else if ( v18 == 2 )
  {
    if ( *((_DWORD *)DeferredContext + 269) && *(_WORD *)(*(_QWORD *)v15 + 320LL) )
    {
      v30 = 4;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v15 + 259LL) + 1 < 4 )
        v30 = *(_BYTE *)(*(_QWORD *)v15 + 259LL) + 1;
      *((_BYTE *)DeferredContext + 742) = v30;
    }
    else
    {
      *((_DWORD *)DeferredContext + 269) = 0;
      *((_BYTE *)DeferredContext + 742) = 0;
    }
  }
  *(_WORD *)(DeferredContext[89] + 150LL) += *((unsigned __int8 *)DeferredContext + 742);
  v31 = (__int64)DeferredContext;
  if ( *(_WORD *)(DeferredContext[74] + 320LL) )
  {
    FabricControllerQueue = NvmeAdapterSetFabricControllerKeepAliveTimeout(DeferredContext, &word_140152E7C);
    v33 = DeferredContext[74];
    if ( FabricControllerQueue < 0 )
    {
      StorEtwNvmeControllerEvent(
        (__int64)DeferredContext,
        1,
        2LL,
        (__int64)L"KATO set failed",
        L"Status",
        FabricControllerQueue,
        L"KeepAliveTimeout msecs",
        *((_DWORD *)DeferredContext + 269),
        L"KAS",
        *(_WORD *)(v33 + 320),
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
      *a6 = 31;
      goto LABEL_95;
    }
    v32 = L"KATO set";
    v43 = ((unsigned __int64)*(unsigned int *)(v33 + 96) >> 6) & 1;
    v42 = L"TBKAS";
    v31 = (__int64)DeferredContext;
    v41 = *(_WORD *)(v33 + 320);
    v40 = L"KAS";
    v39 = *((_DWORD *)DeferredContext + 269);
    Dpc = L"KeepAliveTimeout msecs";
  }
  else
  {
    LOBYTE(v43) = 0;
    v42 = (wchar_t *)&word_140152E7C;
    LOBYTE(v41) = 0;
    v40 = (wchar_t *)&word_140152E7C;
    LOBYTE(v39) = 0;
    Dpc = (wchar_t *)&word_140152E7C;
    if ( *((_DWORD *)DeferredContext + 269) )
    {
      StorEtwNvmeControllerEvent(
        (__int64)DeferredContext,
        1,
        2LL,
        (__int64)L"Keep Alive inconsistency",
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
      FabricControllerQueue = -1073741637;
      *a6 = 30;
      goto LABEL_95;
    }
    v32 = L"Keep Alive not supported";
  }
  StorEtwNvmeControllerEvent(
    v31,
    1,
    4LL,
    (__int64)v32,
    Dpc,
    v39,
    v40,
    v41,
    v42,
    v43,
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
  if ( *((_BYTE *)DeferredContext + 742) )
  {
    FabricControllerQueue = NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands((__int64)DeferredContext);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 32;
      goto LABEL_95;
    }
    FabricControllerQueue = NvmeAdapterEnableFabricControllerAsyncEvent(DeferredContext);
    if ( FabricControllerQueue < 0 )
    {
      *a6 = 33;
      goto LABEL_95;
    }
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 192LL), 1, 0) )
    KeSetCoalescableTimer(
      (PKTIMER)(*(_QWORD *)(DeferredContext[161] + 40LL) + 128LL),
      (LARGE_INTEGER)-50000000LL,
      0x7D0u,
      0x12Cu,
      (PKDPC)(*(_QWORD *)(DeferredContext[161] + 40LL) + 64LL));
  v34 = DeferredContext[121] | 1LL;
  *((_DWORD *)DeferredContext + 298) = 0;
  DeferredContext[121] = v34;
  return (unsigned int)FabricControllerQueue;
}
