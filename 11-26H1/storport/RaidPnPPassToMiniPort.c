/*
 * XREFs of RaidPnPPassToMiniPort @ 0x14001A8BC
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x14003F9A0 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     NvmeAdapterQueryCapabilitiesIrpCompletion @ 0x1400DB190 (NvmeAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x14005C878 (RaidFreeRemappedScatterGatherListMdl.c)
 *     McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer @ 0x14005EBC0 (McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     WPP_SF_qDD @ 0x14006F448 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r11
  _BYTE *v7; // rbp
  char v8; // bl
  __int64 v9; // r14
  int v10; // ecx
  __int64 v11; // rax
  unsigned int *v12; // r15
  __int64 v13; // rdi
  __int64 ContiguousIoResources; // r8
  unsigned int v15; // r13d
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 Pool2; // rax
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rbp
  volatile signed __int32 *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // ecx
  unsigned int v33; // ebp
  __int64 v34; // r8
  int v35; // eax
  int v36; // ebp
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  struct _MDL *v39; // rcx
  __int64 v41; // rax
  int v42; // ebx
  bool v43; // bl
  KIRQL v44; // si
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  void (__fastcall *v48)(__int64, _QWORD, __int64); // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  void (__fastcall *v52)(__int64, __int64, _QWORD); // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rbp
  __int64 v57; // r12
  unsigned int *v58; // rax
  int v59; // r8d
  __int64 v60; // rcx
  void *v61; // r12
  int v62; // r8d
  char v63; // r13
  __int128 *v64; // r10
  const int *v65; // rdx
  char v66; // r9
  const int *v67; // r11
  const int *v68; // rbx
  int v69; // esi
  void *v70; // rcx
  int Timeout; // [rsp+20h] [rbp-128h]
  int v72; // [rsp+28h] [rbp-120h]
  char *i; // [rsp+B8h] [rbp-90h]
  _QWORD *BaseAddress; // [rsp+C0h] [rbp-88h]
  unsigned int v76; // [rsp+C8h] [rbp-80h]
  unsigned int *v77; // [rsp+D0h] [rbp-78h]
  __int128 v78; // [rsp+D8h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v81; // [rsp+100h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  *(_QWORD *)&v78 = a1;
  v7 = 0LL;
  *(_QWORD *)&v80 = a4;
  v8 = 0;
  v77 = 0LL;
  if ( *(_DWORD *)v5 == 1431193940 )
    v9 = *(_QWORD *)(v5 + 24);
  else
    v9 = v5;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v9 + 608) || !*(_QWORD *)(v9 + 616) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  v10 = *(_DWORD *)v9;
  v11 = 316LL;
  BaseAddress = 0LL;
  v76 = 0;
  if ( *(_DWORD *)v9 != 1314275652 )
    v11 = 524LL;
  v12 = 0LL;
  v13 = 0LL;
  ContiguousIoResources = 0LL;
  v15 = 0;
  v16 = (*(_DWORD *)(v11 + v9) + 7) & 0xFFFFFFF8;
  if ( v10 == 1314275652 )
  {
    v17 = v9 + 274;
  }
  else
  {
    v17 = v9 + 482;
    if ( v10 != 1094997074 )
      v17 = 98LL;
  }
  for ( i = (char *)v17; ; v17 = (__int64)i )
  {
    v18 = 88LL;
    if ( v12 )
      goto LABEL_17;
    v19 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)v17 != 1 )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
      v6 = 0LL;
      v12 = (unsigned int *)Pool2;
      if ( Pool2 || !v19 )
        goto LABEL_16;
      v59 = 88;
LABEL_161:
      RaidLogAllocationFailure(v19, 64, v59, 1918067026, 0x80000000);
      v6 = 0LL;
      goto LABEL_16;
    }
    v53 = ExAllocatePool2(64LL, 168LL, 1918067026LL);
    v6 = 0LL;
    v12 = (unsigned int *)v53;
    if ( !v53 )
    {
      if ( !v19 )
        goto LABEL_16;
      v59 = 168;
      goto LABEL_161;
    }
    *(_BYTE *)(v53 + 2) = 40;
    *(_WORD *)v53 = 8;
    *(_DWORD *)(v53 + 8) = 1397899864;
    *(_DWORD *)(v53 + 12) = 1;
    *(_DWORD *)(v53 + 16) = 168;
    *(_DWORD *)(v53 + 20) = 37;
    v18 = 2LL;
    *(_WORD *)(v53 + 36) = 2;
    *(_DWORD *)(v53 + 52) = 128;
    *(_DWORD *)(v53 + 56) = 1;
    *(_WORD *)(v53 + 128) = 1;
    *(_DWORD *)(v53 + 132) = 4;
    *(_DWORD *)(v53 + 120) = 144;
LABEL_16:
    v15 = v76;
    ContiguousIoResources = (__int64)BaseAddress;
LABEL_17:
    if ( !ContiguousIoResources )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(v16 + 1200, v18, v9);
      BaseAddress = (_QWORD *)ContiguousIoResources;
      v6 = 0LL;
    }
    if ( v12 && ContiguousIoResources )
      break;
    v32 = v15++;
    v76 = v15;
    if ( v32 >= 3 )
    {
      v33 = -1073741801;
      goto LABEL_63;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousIoResources = (__int64)BaseAddress;
    v6 = 0LL;
  }
  v13 = ContiguousIoResources + 48;
  *(_BYTE *)(ContiguousIoResources + 64) &= 0x1Cu;
  *(_BYTE *)(ContiguousIoResources + 65) &= 0x70u;
  *(_WORD *)(ContiguousIoResources + 68) = -1;
  *(_WORD *)(ContiguousIoResources + 828) = -1;
  *(_DWORD *)(ContiguousIoResources + 848) = -1;
  *(_DWORD *)(ContiguousIoResources + 48) = 523124044;
  *(_QWORD *)(ContiguousIoResources + 56) = 0LL;
  *(_BYTE *)(ContiguousIoResources + 70) = -1;
  *(_DWORD *)(ContiguousIoResources + 72) = 0;
  *(_QWORD *)(ContiguousIoResources + 152) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 160) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 184) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 200) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 192) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 240) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 208) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 264) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 272) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 168) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 744) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 752) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 760) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 768) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 792) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 808) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 816) = 0LL;
  *(_DWORD *)(ContiguousIoResources + 824) = 0;
  *(_QWORD *)(ContiguousIoResources + 832) = 0LL;
  *(_DWORD *)(ContiguousIoResources + 856) = 0;
  *(_DWORD *)(ContiguousIoResources + 864) = 0;
  *(_QWORD *)(ContiguousIoResources + 872) = 0LL;
  *(_OWORD *)(ContiguousIoResources + 880) = 0LL;
  *(_DWORD *)(ContiguousIoResources + 928) = -1;
  *(_QWORD *)(ContiguousIoResources + 896) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 904) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 912) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 920) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 216) = v12;
  *(_QWORD *)(ContiguousIoResources + 224) = *((_QWORD *)v12 + 6);
  if ( *i == 1 )
  {
    v56 = v12[13];
    *((_QWORD *)v12 + 8) = v80;
    v7 = (char *)v12 + v56;
    v12[15] = a5;
    v12[5] = 37;
    v21 = (char *)v12 + v12[30];
    *((_QWORD *)v12 + 12) = v13;
    v12[6] = 256;
    v12[10] = 10;
    v77 = v12;
    *(_DWORD *)v21 = 98;
    *((_DWORD *)v21 + 1) = 16;
    *((_DWORD *)v21 + 3) = a2;
    v21[8] = 0;
    v22 = *((_QWORD *)v12 + 8);
  }
  else
  {
    *((_QWORD *)v12 + 3) = v80;
    v21 = 0LL;
    v12[4] = a5;
    v12[2] = a2;
    v22 = v80;
    *((_QWORD *)v12 + 6) = v13;
    *((_BYTE *)v12 + 2) = 37;
    *(_WORD *)v12 = 88;
    *((_BYTE *)v12 + 4) = 0;
    v12[3] = 256;
    v12[5] = 10;
  }
  *(_QWORD *)(ContiguousIoResources + 232) = v22;
  v23 = ContiguousIoResources + 1200;
  v24 = *(_DWORD *)v9;
  if ( *((_BYTE *)v12 + 2) == 40 )
  {
    v25 = v24 == 1314275652;
    v26 = 316LL;
    if ( !v25 )
      v26 = 524LL;
    if ( ((*(_DWORD *)(v26 + v9) + 7) & 0xFFFFFFF8) != 0 )
      *((_QWORD *)v12 + 13) = v23;
  }
  else
  {
    v25 = v24 == 1314275652;
    v54 = 316LL;
    if ( !v25 )
      v54 = 524LL;
    if ( ((*(_DWORD *)(v54 + v9) + 7) & 0xFFFFFFF8) != 0 )
      *((_QWORD *)v12 + 7) = v23;
  }
  v27 = *i;
  if ( **(_DWORD **)(v78 + 64) == 1431193940 )
  {
    v55 = *(_BYTE *)(v5 + 104);
    if ( v27 == 1 )
    {
      v7[8] = v55;
      v7[9] = *(_BYTE *)(v5 + 105);
      v7[10] = *(_BYTE *)(v5 + 106);
    }
    else
    {
      *((_BYTE *)v12 + 5) = v55;
      *((_BYTE *)v12 + 6) = *(_BYTE *)(v5 + 105);
      *((_BYTE *)v12 + 7) = *(_BYTE *)(v5 + 106);
    }
  }
  else if ( v27 == 1 )
  {
    *((_DWORD *)v21 + 4) = 1;
    *((_WORD *)v7 + 4) = 0;
    v7[10] = 0;
  }
  else
  {
    v12[16] = 1;
    *(_WORD *)((char *)v12 + 5) = 0;
    *((_BYTE *)v12 + 7) = 0;
  }
  KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
  *(_QWORD *)(v13 + 656) = RaidXrbSignalCompletion;
  if ( *i == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          55LL,
          &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
          v13,
          v77,
          *((_QWORD *)v77 + 13));
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v72 = (unsigned __int8)v7[10];
        WPP_SF_DDD(
          WPP_GLOBAL_Control->AttachedDevice,
          56LL,
          &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
          (unsigned __int8)v7[8],
          (unsigned __int8)v7[9]);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        57LL,
        &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
        v13,
        v12,
        *((_QWORD *)v12 + 7));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v72 = *((unsigned __int8 *)v12 + 7);
      WPP_SF_DDD(
        WPP_GLOBAL_Control->AttachedDevice,
        58LL,
        &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
        *((unsigned __int8 *)v12 + 5),
        *((unsigned __int8 *)v12 + 6));
    }
  }
  if ( v5 )
  {
    v28 = *(_QWORD *)(v5 + 24);
    if ( *(_QWORD *)(v28 + 5024) )
    {
      RaidAdapterPoFxActivateComponent(*(_QWORD *)(v5 + 24), 0LL, 1LL);
      v8 = 2;
    }
    if ( RaidUnitCheckAndAcquirePoFx(v5) )
    {
      if ( (*(_BYTE *)(v28 + 108) & 1) != 0 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v5 + 2168), 1uLL);
        if ( (*(_BYTE *)(v28 + 108) & 2) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v5 + 2176), 1uLL);
      }
      v29 = *(volatile signed __int32 **)(v5 + 1872);
      if ( (v29[37] & 1) != 0 )
      {
        _InterlockedAdd(v29 + 36, 1u);
        v29 = *(volatile signed __int32 **)(v5 + 1872);
      }
      v30 = 5LL;
      v31 = *(_QWORD *)v29;
      if ( !*(_DWORD *)(v5 + 1036) )
        v30 = 1LL;
      PoFxActivateComponent(v31, 0LL, v30);
      v8 |= 1u;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 1864));
    }
  }
  else if ( *(_QWORD *)(v9 + 5024) )
  {
    if ( (*(_BYTE *)(v9 + 108) & 1) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v9 + 5344), 1uLL);
      if ( (*(_BYTE *)(v9 + 108) & 2) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(v9 + 5352), 1uLL);
    }
    v34 = 5LL;
    if ( !*(_DWORD *)(v9 + 92) )
      v34 = 1LL;
    PoFxActivateComponent(**(_QWORD **)(v9 + 5024), 0LL, v34);
  }
  if ( *(_BYTE *)(v9 + 4434) )
    v35 = RaidAdapterRaiseIrqlAndExecuteXrb(v9, (_QWORD *)v13);
  else
    v35 = RaidAdapterPostScatterGatherExecute(v9, v13);
  v36 = v35;
  if ( v35 >= 0 )
    KeWaitForSingleObject((PVOID)(v13 + 664), Executive, 0, 0, 0LL);
  if ( v36 == 258 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v9 + 6248), 1u);
    v33 = -1073741643;
  }
  else
  {
    v33 = 0;
  }
  if ( (*(_BYTE *)(v13 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v13 + 748));
    *(_BYTE *)(v13 + 17) &= ~1u;
  }
  v6 = 0LL;
  if ( v5 )
  {
    v57 = *(_QWORD *)(v5 + 24);
    if ( (v8 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v5) )
    {
      PoFxIdleComponent(**(_QWORD **)(v5 + 1872), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 1864));
    }
    if ( (unsigned __int8)v8 >= 2u && *(_QWORD *)(v57 + 5024) )
      RaidAdapterPoFxIdleComponent(v57, 0LL, 0LL);
    if ( (*(_BYTE *)(v13 + 17) & 2) == 0 )
    {
      v6 = 0LL;
      goto LABEL_61;
    }
    RaidUnitPoFxIdleComponentFromMiniport(v5, *(_DWORD *)(v13 + 748));
    *(_BYTE *)(v13 + 17) &= ~2u;
    goto LABEL_82;
  }
  v37 = *(_QWORD **)(v9 + 5024);
  if ( v37 )
  {
    PoFxIdleComponent(*v37, 0LL, 0LL);
LABEL_82:
    v6 = 0LL;
  }
LABEL_61:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, v9, 0, a2);
    v6 = 0LL;
  }
LABEL_63:
  if ( StorEtwLoggingEnabled && (v33 == -1073741643 || v33 == -1073741801) )
  {
    v60 = *(_QWORD *)(v9 + 16);
    v61 = *(void **)(v9 + 5144);
    v78 = 0LL;
    v80 = *(_OWORD *)(v9 + 5128);
    v81 = 0LL;
    RaidDriverGetName(v60, &v78, ContiguousIoResources);
    if ( byte_140173446 < (char)v6 )
    {
      if ( v5 )
      {
        v63 = *(_BYTE *)(v5 + 104);
        v64 = (__int128 *)(v5 + 2104);
        LOBYTE(v62) = *(_BYTE *)(v5 + 105);
        v65 = (const int *)(v5 + 168);
        v66 = *(_BYTE *)(v5 + 106);
        v67 = (const int *)(v5 + 177);
        v68 = (const int *)(v5 + 242);
        v69 = *(_DWORD *)(v5 + 504);
      }
      else
      {
        v65 = &dword_140154ADC;
        v63 = -1;
        v68 = &dword_140154ADC;
        v64 = &v81;
        v67 = &dword_140154ADC;
        v66 = -1;
        LOBYTE(v62) = -1;
        LOBYTE(v69) = 0;
      }
      v70 = &unk_140153274;
      if ( v61 )
        v70 = v61;
      McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer(
        (_DWORD)v70,
        (_DWORD)v65,
        v62,
        *(_DWORD *)(v9 + 56),
        (__int64)&v80,
        *((__int64 *)&v78 + 1),
        (__int64)v70,
        v63,
        v62,
        v66,
        (__int64)v64,
        (__int64)v65,
        (__int64)v67,
        (__int64)v68,
        v69,
        (char)v12,
        a2);
      v6 = 0LL;
    }
  }
  if ( BaseAddress )
  {
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 112) != v6 )
      {
        v41 = *(_QWORD *)(v13 + 168);
        if ( *(_BYTE *)(v41 + 2) == 40 )
          v42 = *(_DWORD *)(v41 + 24) >> 6;
        else
          LOBYTE(v42) = *(_BYTE *)(v41 + 12) >> 6;
        v43 = (v42 & 1) == 0;
        if ( RaidVerifierEnabled != (_DWORD)v6 )
          RaidFreeRemappedScatterGatherListMdl(v13);
        v44 = KfRaiseIrql(2u);
        if ( *(_QWORD *)(v13 + 216) != -896LL )
        {
          v46 = *(_QWORD *)(*(_QWORD *)(v13 + 216) + 896LL);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 8);
            if ( v47 )
            {
              v48 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v47 + 96);
              if ( v48 )
              {
                LOBYTE(v45) = v43;
                v48(v46, *(_QWORD *)(v13 + 112), v45);
              }
            }
          }
        }
        v49 = *(_QWORD *)(v13 + 152);
        *(_QWORD *)(v13 + 112) = 0LL;
        *(_QWORD *)(v13 + 144) = 0LL;
        if ( v49 )
        {
          if ( *(_QWORD *)(v13 + 216) != -896LL )
          {
            v50 = *(_QWORD *)(*(_QWORD *)(v13 + 216) + 896LL);
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 8);
              if ( v51 )
              {
                v52 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v51 + 96);
                if ( v52 )
                  v52(v50, v49, 0LL);
              }
            }
          }
          *(_QWORD *)(v13 + 152) = 0LL;
        }
        KeLowerIrql(v44);
      }
      v38 = *(_QWORD *)(v13 + 104);
      if ( v38 && (*(_BYTE *)(v13 + 16) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v38 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v38);
        IoFreeMdl(*(PMDL *)(v13 + 104));
        *(_BYTE *)(v13 + 16) &= ~1u;
        *(_QWORD *)(v13 + 104) = 0LL;
      }
      v39 = *(struct _MDL **)(v13 + 136);
      if ( v39 )
      {
        MmUnlockPages(v39);
        IoFreeMdl(*(PMDL *)(v13 + 136));
        *(_QWORD *)(v13 + 136) = 0LL;
      }
    }
    if ( (unsigned __int8)IsDmarEnabled(v9) )
    {
      LOBYTE(Timeout) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*(_QWORD *)(v9 + 896) + 8LL)
                                                                         + 24LL))(
        *(_QWORD *)(v9 + 896),
        *((unsigned int *)BaseAddress + 4),
        BaseAddress[3],
        BaseAddress,
        Timeout,
        v72);
    }
    else
    {
      MmFreeContiguousMemory(BaseAddress);
    }
    v6 = 0LL;
  }
  if ( v12 )
  {
    if ( *i == 1 )
    {
      v58 = v77;
      if ( !v77 )
        v58 = v12;
      *((_QWORD *)v58 + 10) = v6;
      *((_QWORD *)v58 + 13) = v6;
    }
    else
    {
      *((_QWORD *)v12 + 6) = v6;
      *((_QWORD *)v12 + 7) = v6;
    }
    ExFreePoolWithTag(v12, 0x72536152u);
  }
  return v33;
}
