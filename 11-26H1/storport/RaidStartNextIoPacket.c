/*
 * XREFs of RaidStartNextIoPacket @ 0x140018C10
 * Callers:
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x140049A40 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidNormalizeDeviceQueue @ 0x140022D20 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     RiFlushDeviceLists @ 0x1400232C0 (RiFlushDeviceLists.c)
 *     RaidAdapterRestartGateway @ 0x14002F760 (RaidAdapterRestartGateway.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x140074034 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidStartNextIoPacket(__int64 a1, int a2, int a3)
{
  int v3; // r12d
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  KIRQL v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // cx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  char v20; // bl
  signed __int64 v21; // rax
  char v22; // r14
  char v23; // r12
  signed __int64 v24; // r8
  PSLIST_ENTRY v25; // rcx
  signed __int64 v26; // rax
  char v27; // si
  signed __int64 v28; // r8
  PSLIST_ENTRY v29; // rcx
  signed __int64 v30; // rsi
  signed __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  signed __int64 v34; // rbx
  char v35; // r8
  __int64 v36; // rdx
  signed __int64 v37; // rcx
  signed __int64 v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  __int64 v41; // rdx
  bool v42; // zf
  KSPIN_LOCK *v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rcx
  char v46; // dl
  bool v47; // zf
  unsigned __int8 v49; // [rsp+58h] [rbp-59h]
  KIRQL v50; // [rsp+59h] [rbp-58h]
  __int128 v52; // [rsp+68h] [rbp-49h] BYREF
  __int64 v53; // [rsp+78h] [rbp-39h]
  int v54; // [rsp+80h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v56[2]; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v57; // [rsp+C0h] [rbp+Fh]
  __int64 v58; // [rsp+D0h] [rbp+1Fh]

  v53 = 0LL;
  v3 = a2;
  v54 = 0;
  v5 = 0;
  v52 = 0LL;
  if ( a3 )
  {
    v6 = RaidNormalizeDeviceQueue(a1 + 720);
    goto LABEL_114;
  }
  v7 = *(_QWORD *)(a1 + 24);
  v49 = 0;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 560);
    if ( v8 )
    {
      if ( *(_QWORD *)(v7 + 4960) )
      {
        v9 = 0;
        v10 = -1LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( *(_DWORD *)(v8 + 8) )
        {
          do
          {
            v11 = (unsigned __int64)v9 << 6;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + v8 + 104), &LockHandle);
            v12 = v11 + v8 + 64;
            if ( *(_QWORD *)v12 != v12 && *(_QWORD *)(*(_QWORD *)v12 + 40LL) < v10 )
              v10 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            ++v9;
          }
          while ( v9 < *(_DWORD *)(v8 + 8) );
        }
        v13 = 0LL;
        if ( v10 != -1LL )
          v13 = v10;
        if ( v13 )
        {
          LOBYTE(v5) = KeQueryUnbiasedInterruptTime() - v13 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4960LL);
          v49 = v5;
        }
        else
        {
          LOBYTE(v5) = 0;
        }
      }
    }
  }
  if ( v3 )
  {
    memset(v56, 0, sizeof(v56));
    v58 = 0LL;
    v57 = 0LL;
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x100u;
        v15 = *(_QWORD *)(a1 + 32);
        if ( (*(_DWORD *)(v15 + 80) & 0x1E0) == 0 && *(int *)(v15 + 84) <= 0 )
        {
          *(_QWORD *)&v56[0] = 0x3800000038LL;
          DWORD2(v56[0]) = 3;
          if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
          {
            v16 = *(_QWORD *)(a1 + 24);
            WORD4(v57) = 1;
            HIDWORD(v57) = 4;
            v17 = *(_WORD *)(v16 + 56);
            LOWORD(v58) = *(_WORD *)(a1 + 104);
            BYTE2(v58) = *(_BYTE *)(a1 + 106);
            WORD5(v57) = v17;
          }
          v18 = *(_DWORD **)(a1 + 24);
          if ( *v18 == 1094997074 )
          {
            v19 = v18 + 94;
          }
          else if ( *v18 == 1314275652 )
          {
            v19 = v18 + 42;
          }
          else
          {
            v19 = 0LL;
          }
          RaCallMiniportUnitControl(v19, 31LL, v56);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v14);
      }
    }
  }
  v6 = 0LL;
  v50 = KfRaiseIrql(2u);
  v20 = 0;
  v21 = *(_QWORD *)(a1 + 808);
  v22 = 0;
  v23 = 0;
  if ( (v21 & 1) != 0 )
    goto LABEL_59;
  while ( 1 )
  {
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)v21;
    v24 = v21;
    if ( (unsigned int)(v21 / 0x100000000LL) )
      break;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v21 - 4, v21);
    if ( v24 == v21 )
      goto LABEL_52;
LABEL_49:
    if ( (v21 & 1) != 0 )
      goto LABEL_53;
    LOBYTE(v5) = v49;
  }
  if ( (_BYTE)v5 )
    goto LABEL_53;
  if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 832)) )
  {
    if ( !v22 && !v20 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 800)) )
        goto LABEL_59;
      v20 = 1;
    }
  }
  else
  {
    if ( !v22 )
    {
      if ( v20 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
        v20 = 0;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 792));
      v22 = 1;
LABEL_48:
      v21 = *(_QWORD *)(a1 + 808);
      goto LABEL_49;
    }
    RiFlushDeviceLists(a1 + 720);
  }
  v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 832));
  if ( v25 )
    v6 = (__int64)(&v25[-1].Next + 1);
  if ( !v6 )
    goto LABEL_48;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 808), 0xFFFFFFFF00000000uLL);
  *(_BYTE *)(v6 + 20) &= 0xFCu;
LABEL_52:
  v23 = 1;
LABEL_53:
  if ( v20 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
  if ( v22 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 792));
  if ( v23 )
  {
    KeLowerIrql(v50);
    goto LABEL_113;
  }
LABEL_59:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 792));
  v26 = *(_QWORD *)(a1 + 808);
  v27 = 0;
  if ( (v26 & 1) != 0 )
    goto LABEL_76;
  while ( 2 )
  {
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)v26;
    v28 = v26;
    if ( !(unsigned int)(v26 / 0x100000000LL) )
    {
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v26 - 4, v26);
      if ( v28 == v26 )
        goto LABEL_74;
      goto LABEL_71;
    }
    if ( v49 )
      goto LABEL_75;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 832)) )
      RiFlushDeviceLists(a1 + 720);
    if ( !v6 )
    {
      v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 832));
      if ( v29 )
        v6 = (__int64)(&v29[-1].Next + 1);
      if ( !v6 )
      {
        v26 = *(_QWORD *)(a1 + 808);
LABEL_71:
        if ( (v26 & 1) != 0 )
          goto LABEL_75;
        continue;
      }
    }
    break;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 808), 0xFFFFFFFF00000000uLL);
  *(_BYTE *)(v6 + 20) &= 0xFCu;
LABEL_74:
  v27 = 1;
LABEL_75:
  if ( !v27 )
  {
LABEL_76:
    v30 = *(_QWORD *)(a1 + 808);
    if ( (v30 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
      ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
      do
      {
        v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v30 | 1, v30);
        v42 = v30 == v31;
        v30 = v31;
      }
      while ( !v42 && (v31 & 1) == 0 );
    }
    if ( a2 )
      *(_BYTE *)(a1 + 758) = 0;
    v32 = *(_DWORD *)(a1 + 748);
    if ( v32 )
      *(_DWORD *)(a1 + 748) = v32 - 1;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 808), 0xFFFFFFFFFFFFFFFCuLL);
    if ( (((__int64)*(unsigned int *)(a1 + 808) >> 2) & 0x3FFFFFFF) == 0 && *(_DWORD *)(a1 + 760) )
      KeSetEvent((PRKEVENT)(a1 + 768), 0, 0);
    v33 = RiNormalizeDeviceQueue(a1 + 720, v49);
    v34 = *(_QWORD *)(a1 + 808);
    v35 = 0;
    v6 = v33;
    if ( (v34 & 3) != 0 )
    {
      while ( !*(_DWORD *)(a1 + 748)
           && !*(_DWORD *)(a1 + 736)
           && !*(_DWORD *)(a1 + 752)
           && !*(_BYTE *)(a1 + 757)
           && !*(_BYTE *)(a1 + 759)
           && !*(_BYTE *)(a1 + 756)
           && *(int *)(a1 + 744) <= 0
           && !*(_BYTE *)(a1 + 758) )
      {
        v36 = v34;
        if ( (v34 & 1) != 0 )
        {
          if ( !v35 )
          {
            ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
            v35 = 1;
          }
          v36 = v34 ^ 1;
        }
        v37 = v36 ^ 2;
        if ( (v34 & 2) == 0 )
          v37 = v36;
        v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v37, v34);
        v42 = v34 == v38;
        v34 = v38;
        if ( v42 )
        {
          if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
          {
            v39 = *(_QWORD *)(a1 + 808);
            if ( (v39 & 3) == 0 )
            {
              do
              {
                v40 = v39;
                v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v39 | 2, v39);
              }
              while ( v40 != v39 && (v39 & 3) == 0 );
            }
          }
          break;
        }
        if ( (v38 & 3) == 0 )
          break;
      }
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v50);
LABEL_113:
  v3 = a2;
  v5 = 0;
LABEL_114:
  if ( v6 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( byte_140173442 < 0 )
      {
        LockHandle.LockQueue = 0LL;
        IoGetActivityIdIrp(v6 - 120, &LockHandle);
        if ( byte_140173442 < 0 )
          McTemplateK0pquuqqd_EtwWriteTransfer(
            ((*(_BYTE *)(v6 + 22) & 6) != 0) + 1,
            *(__int64 *)(a1 + 808) >> 63,
            (unsigned int)&LockHandle,
            a1 + 720,
            ((*(_BYTE *)(v6 + 22) & 6) != 0) + 1,
            5,
            0,
            *(_BYTE *)(a1 + 736)
          + (((unsigned __int64)(unsigned int)(*(__int64 *)(a1 + 808) >> 63) + *(_QWORD *)(a1 + 808)) >> 32),
            *(__int64 *)(a1 + 808) >> 2);
      }
    }
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v6, &v52) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v6 - 120,
        &v52,
        0LL);
      v5 = 1;
      goto LABEL_131;
    }
    v41 = *(_QWORD *)(a1 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(v41 + 48) + 112LL) & 4) == 0 )
      goto LABEL_131;
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( *(_DWORD *)(v41 + 40) == 1699901262 && *(_DWORD *)(v41 + 24) )
      {
        v42 = *(_DWORD *)(v41 + 192) == 0;
LABEL_129:
        if ( v42 )
        {
          v43 = *(KSPIN_LOCK **)(a1 + 728);
          *(_DWORD *)(v41 + 40) = 0;
          RaidAdapterRestartGateway(v43);
        }
      }
    }
    else if ( *(_DWORD *)(v41 + 40) == 1699901262 && *(_DWORD *)(v41 + 24) )
    {
      v42 = *(_DWORD *)(v41 + 192) == 0;
      goto LABEL_129;
    }
  }
LABEL_131:
  if ( v3 )
  {
    v44 = RaidNormalizeDeviceQueue(a1 + 720);
    if ( v44 )
    {
      while ( 2 )
      {
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v44, &v52) )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
            *(_QWORD *)(a1 + 704),
            v44 - 120,
            &v52,
            0LL);
          goto LABEL_146;
        }
        v45 = *(_QWORD *)(a1 + 728);
        v46 = *(_BYTE *)(*(_QWORD *)(v45 + 48) + 112LL);
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( (v46 & 4) != 0 && *(_DWORD *)(v45 + 40) == 1699901262 && *(_DWORD *)(v45 + 24) )
          {
            v47 = *(_DWORD *)(v45 + 192) == 0;
LABEL_144:
            if ( v47 )
            {
              *(_DWORD *)(v45 + 40) = 0;
              RaidAdapterRestartGateway((PKSPIN_LOCK)v45);
            }
          }
        }
        else if ( (v46 & 4) != 0 && *(_DWORD *)(v45 + 40) == 1699901262 && *(_DWORD *)(v45 + 24) )
        {
          v47 = *(_DWORD *)(v45 + 192) == 0;
          goto LABEL_144;
        }
LABEL_146:
        v44 = RaidNormalizeDeviceQueue(a1 + 720);
        if ( !v44 )
          return v5;
        continue;
      }
    }
  }
  return v5;
}
