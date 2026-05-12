/*
 * XREFs of RaWmiPassToMiniPort @ 0x1401B8A40
 * Callers:
 *     RaWmiIrpNormalRequest @ 0x1401B8994 (RaWmiIrpNormalRequest.c)
 *     RaWmiIrpRegisterRequest @ 0x1401B9580 (RaWmiIrpRegisterRequest.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x14002A810 (RaidUnitPoFxActivateComponent.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x140042A54 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  char v3; // bl
  char *Srb; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r13
  int v13; // ecx
  char *v14; // r15
  int v15; // esi
  ULONG v16; // ecx
  ULONG v17; // eax
  ULONG v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v22; // rdx
  __int64 v23; // r11
  char *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rcx
  char v28; // al
  char v29; // al
  char v30; // al
  _BYTE *v31; // rcx
  char v32; // al
  char v33; // dl
  PDEVICE_OBJECT v34; // rcx
  int v35; // eax
  unsigned __int16 v36; // dx
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  ULONG v46; // [rsp+30h] [rbp-68h]
  __int64 v47; // [rsp+38h] [rbp-60h]
  char *v48; // [rsp+40h] [rbp-58h]
  __int64 v50; // [rsp+A0h] [rbp+8h]
  char v53; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  Srb = 0LL;
  v53 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_DWORD *)v6;
  v14 = 0LL;
  if ( *(_DWORD *)v6 == 1094997074 )
  {
    v7 = v6;
  }
  else if ( v13 == 1314275652 )
  {
    v8 = v6;
  }
  else if ( v13 == 1431193940 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    v9 = v6;
  }
  if ( v8 )
  {
    v15 = -1073741637;
    goto LABEL_96;
  }
  if ( a2 == 9 )
  {
    v16 = **(_DWORD **)(a3 + 24);
    v18 = *(_DWORD *)(a3 + 16);
    v17 = v18;
    if ( v18 <= v16 )
      v18 = v16;
  }
  else
  {
    v17 = *(_DWORD *)(a3 + 16);
    v18 = v17;
  }
  v46 = v17;
  if ( *(_DWORD *)v7 == 1314275652 )
  {
    v12 = v7 + 176;
  }
  else if ( *(_DWORD *)v7 == 1094997074 )
  {
    v12 = v7 + 384;
  }
  Srb = (char *)RaidAllocateSrb(*(_QWORD *)(v7 + 8), 23, *(_BYTE *)(v12 + 98), 0);
  if ( !Srb )
  {
    v15 = -1073741801;
    v11 = 0LL;
    goto LABEL_96;
  }
  v20 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v20 = 524LL;
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)(v20 + v7) + 7) & 0xFFFFFFF8) + 1200,
                            v19,
                            (_QWORD *)v7);
  v47 = ContiguousIoResources;
  v11 = ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
    v15 = -1073741801;
    goto LABEL_96;
  }
  v10 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v22, 0, 0LL);
  *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v10 + 168) = Srb;
  v15 = RaidBuildMdlAndLockPagesForXrb(v10, *(void **)(a3 + 24), v18);
  if ( v15 >= 0 )
  {
    if ( *(_BYTE *)(v12 + 98) == 1 )
    {
      v14 = &Srb[*((unsigned int *)Srb + 13)];
      *((_DWORD *)Srb + 5) = 23;
      v23 = *((unsigned int *)Srb + 30);
      *((_QWORD *)Srb + 12) = v10;
      v24 = &Srb[v23];
      *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v46;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v24[8] = a2;
      *(_DWORD *)v24 = 96;
      *((_DWORD *)v24 + 1) = 16;
      *((_QWORD *)v24 + 2) = *(_QWORD *)(a3 + 8);
      v25 = *((_QWORD *)Srb + 8);
      v48 = Srb;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v10;
      Srb[2] = 23;
      v25 = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 4) = v46;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v25;
      *(_WORD *)Srb = 88;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v10 + 184) = v25;
    RaSrbSetMiniportContext((int *)v7, (__int64)Srb, v47 + 1200);
    v27 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v27 == 1431193940 )
    {
      v28 = *(_BYTE *)(v27 + 104);
      if ( *(_BYTE *)(v12 + 98) == 1 )
      {
        v14[8] = v28;
        v14[9] = *(_BYTE *)(v27 + 105);
        v29 = *(_BYTE *)(v27 + 106);
LABEL_31:
        v14[10] = v29;
        goto LABEL_44;
      }
      Srb[5] = v28;
      Srb[6] = *(_BYTE *)(v27 + 105);
      v30 = *(_BYTE *)(v27 + 106);
    }
    else
    {
      v31 = *(_BYTE **)(v7 + 144);
      if ( *(_BYTE *)(v12 + 98) == 1 )
        *(_BYTE *)(v26 + 9) = 1;
      else
        Srb[9] = 1;
      v32 = *(_BYTE *)(v12 + 98);
      if ( v31 == (_BYTE *)(v7 + 144) )
      {
        if ( v32 == 1 )
        {
          *((_WORD *)v14 + 4) = 0;
          v14[10] = 0;
          goto LABEL_44;
        }
        v30 = 0;
        *(_WORD *)(Srb + 5) = 0;
      }
      else
      {
        v33 = v31[40];
        if ( v32 == 1 )
        {
          v14[8] = v33;
          v14[9] = v31[41];
          v29 = v31[42];
          goto LABEL_31;
        }
        Srb[5] = v33;
        Srb[6] = v31[41];
        v30 = v31[42];
      }
    }
    Srb[7] = v30;
LABEL_44:
    KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
    RaidXrbSetCompletionRoutine(v10, (__int64)RaidXrbSignalCompletion);
    if ( Srb[2] == 40 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_qqq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xBu,
            (__int64)&WPP_83491b0a8e35394f9ae62345ae9f178a_Traceguids,
            v10,
            v48,
            *((_QWORD *)v48 + 13));
        v34 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v35 = (unsigned __int8)v14[10];
          v36 = 12;
          v37 = (unsigned __int8)v14[9];
          v38 = (unsigned __int8)v14[8];
LABEL_61:
          LODWORD(v45) = v35;
          LODWORD(Timeout) = v37;
          WPP_SF_DDD(
            (__int64)v34->AttachedDevice,
            v36,
            (__int64)&WPP_83491b0a8e35394f9ae62345ae9f178a_Traceguids,
            v38,
            Timeout,
            v45);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_83491b0a8e35394f9ae62345ae9f178a_Traceguids,
          v10,
          Srb,
          *((_QWORD *)Srb + 7));
      v34 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v35 = (unsigned __int8)Srb[7];
        v36 = 14;
        v37 = (unsigned __int8)Srb[6];
        v38 = (unsigned __int8)Srb[5];
        goto LABEL_61;
      }
    }
    if ( v9 )
    {
      RaidUnitPoFxActivateComponent(v9, 0, 1LL, &v53);
      v3 = v53;
    }
    else if ( *(_QWORD *)(v7 + 5024) )
    {
      RaidAdapterPoFxActivateComponent(v7, 0LL, 1LL);
    }
    if ( *(_BYTE *)(v7 + 4434) )
      v39 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, (_QWORD *)v10);
    else
      v39 = RaidAdapterPostScatterGatherExecute(v7, v10);
    v15 = v39;
    if ( v39 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
      v15 = RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( v9 )
    {
      if ( (*(_BYTE *)(v10 + 17) & 2) != 0 )
      {
        RaidUnitPoFxIdleComponentFromMiniport(v9, *(_DWORD *)(v10 + 748));
        *(_BYTE *)(v10 + 17) &= ~2u;
      }
      v40 = *(_QWORD *)(v9 + 24);
      v50 = v40;
      if ( (v3 & 1) != 0 )
      {
        if ( RaidUnitCheckAndAcquirePoFx(v9) )
        {
          PoFxIdleComponent(**(_QWORD **)(v9 + 1872), 0LL, 0LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 1864));
        }
        v40 = v50;
      }
      if ( (v3 & 2) == 0 || !*(_QWORD *)(v40 + 5024) )
        goto LABEL_86;
      v41 = v40;
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 5024) )
      {
LABEL_86:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v15;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_83491b0a8e35394f9ae62345ae9f178a_Traceguids,
            v10,
            Timeout);
        }
        goto LABEL_90;
      }
      if ( (*(_BYTE *)(v10 + 17) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(v10 + 748));
        *(_BYTE *)(v10 + 17) &= ~1u;
      }
      v41 = v7;
    }
    RaidAdapterPoFxIdleComponent(v41, 0LL, 0LL);
    goto LABEL_86;
  }
LABEL_90:
  if ( v15 >= 0 )
  {
    if ( Srb[2] == 40 )
      v42 = *((_DWORD *)v48 + 15);
    else
      v42 = *((_DWORD *)Srb + 4);
    *(_DWORD *)(a3 + 16) = v42;
    goto LABEL_97;
  }
  v11 = v47;
LABEL_96:
  v47 = v11;
  *(_DWORD *)(a3 + 16) = 0;
  if ( v11 )
  {
LABEL_97:
    RaidXrbDeallocateResources(v10, 0);
    StorFreeContiguousIoResources(v7, v47);
  }
  if ( Srb && v12 )
  {
    if ( *(_BYTE *)(v12 + 98) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return (unsigned int)v15;
}
