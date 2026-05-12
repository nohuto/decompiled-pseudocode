/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1401855B0
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x140185A14 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  unsigned __int16 v8; // bx
  _QWORD *v9; // r13
  _QWORD *v10; // rax
  int v11; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 Pool; // rax
  _DWORD *v15; // rsi
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // r9d
  _QWORD *v19; // rcx
  _BYTE *v20; // r8
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  _QWORD *Srb; // rdi
  __int64 v25; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v30; // rbp
  int v31; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  unsigned int v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  _DWORD *v35; // [rsp+40h] [rbp-58h]
  _DWORD *v36; // [rsp+48h] [rbp-50h]
  char v37; // [rsp+A8h] [rbp+10h]

  v5 = (_QWORD *)(a2 + 24);
  v8 = 0;
  v34 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD **)(a2 + 24);
  v35 = 0LL;
  v37 = 0;
  while ( v10 != v5 )
  {
    if ( v10[6] == a3 && ++v8 == 0xFFFF )
      return (unsigned int)-1073741637;
    v10 = (_QWORD *)*v10;
  }
  if ( v8 > 4u )
    return (unsigned int)-1073741637;
  *(_DWORD *)(a3 + 72) = v8 << 16;
  v12 = 16 * v8 + (a4 != 0 ? 16 : 24);
  v13 = 24;
  if ( v12 > 0x18 )
    v13 = 16 * v8 + (a4 != 0 ? 16 : 24);
  v33 = v13;
  Pool = RaidAllocatePool(64LL, v13, 1145266514LL, *(_QWORD *)(a1 + 8));
  v36 = (_DWORD *)Pool;
  v15 = (_DWORD *)Pool;
  if ( Pool )
  {
    if ( a4 )
    {
      v12 = 32;
      *(_DWORD *)(Pool + 12) = v8;
      v34 = Pool;
      v16 = 1196246089;
      v17 = 32;
    }
    else
    {
      *(_WORD *)(Pool + 12) = v8;
      *(_WORD *)(Pool + 14) = 1;
      *(_DWORD *)(Pool + 16) = 16;
      v16 = 1196246085;
      v35 = v15;
      v17 = 28;
    }
    *v15 = v17;
    v18 = 0;
    v15[1] = v12;
    v15[2] = v16;
    v19 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      do
      {
        if ( v19[6] == a3 )
        {
          v20 = (_BYTE *)v19[5];
          v21 = (_DWORD *)(v34 + 16);
          if ( !a4 )
            v21 = v35 + 6;
          v22 = &v21[v18];
          v18 += 4;
          *(_WORD *)v22 = 1;
          v22[1] = 4;
          *((_BYTE *)v22 + 8) = v20[48];
          *((_BYTE *)v22 + 9) = v20[49];
          *((_BYTE *)v22 + 10) = v20[50];
        }
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v5 );
      v15 = v36;
      v9 = 0LL;
    }
    Srb = (_QWORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 42, *(_BYTE *)(a1 + 482), 0);
    if ( !Srb )
    {
      v11 = -1073741670;
      goto LABEL_30;
    }
    v25 = 316LL;
    if ( *(_DWORD *)a1 != 1314275652 )
      v25 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v25 + a1) + 7) & 0xFFFFFFF8) + 1200,
                              v23,
                              (_QWORD *)a1);
    v28 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v30 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v27, 0, 0LL);
      *(_BYTE *)(v30 + 17) |= 8u;
      *(_QWORD *)(v30 + 176) = 0LL;
      *(_QWORD *)(v30 + 184) = v15;
      *(_QWORD *)(v30 + 168) = Srb;
      if ( *(_BYTE *)(a1 + 482) == 1 )
      {
        Srb[10] = 0LL;
        v9 = Srb;
        Srb[12] = v30;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 5) = 42;
        Srb[8] = v15;
        *((_DWORD *)Srb + 15) = v33;
        *((_DWORD *)Srb + 10) = 10;
        v37 = 1;
        if ( !*(_BYTE *)(a1 + 4434) )
          *((_DWORD *)Srb + 6) = 192;
      }
      else
      {
        Srb[6] = v30;
        *((_DWORD *)Srb + 3) = 256;
        *((_BYTE *)Srb + 2) = 42;
        Srb[3] = v15;
        *((_DWORD *)Srb + 4) = v33;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4434) )
          *((_DWORD *)Srb + 3) = 192;
      }
      RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v28 + 1200);
      KeInitializeEvent((PRKEVENT)(v30 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v30, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x43u,
          (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
          v30,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4434) )
        v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v30);
      else
        v31 = RaidAdapterPostScatterGatherExecute(a1, v30);
      v11 = v31;
      if ( v31 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v30 + 664), Executive, 0, 0, 0LL);
        v11 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x44u,
          (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
          v11,
          Timeout);
      }
      if ( v11 >= 0 )
      {
        if ( *v15 >= 0x18u && v15[2] == 1297105993 )
        {
          *a5 = v15;
          v15 = 0LL;
        }
        else
        {
          v11 = -1073739509;
        }
      }
      RaidXrbDeallocateResources(v30, 0);
      StorFreeContiguousIoResources(a1, v28);
      if ( v37 == 1 )
      {
        if ( !v9 )
          v9 = Srb;
        v9[10] = 0LL;
        v9[13] = 0LL;
LABEL_29:
        RaidFreeSrb(Srb);
        if ( !v15 )
          return (unsigned int)v11;
LABEL_30:
        ExFreePoolWithTag(v15, 0x44436152u);
        return (unsigned int)v11;
      }
    }
    else
    {
      v11 = -1073741670;
    }
    Srb[6] = 0LL;
    Srb[7] = 0LL;
    goto LABEL_29;
  }
  return (unsigned int)-1073741670;
}
