/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x14002BDC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     RaidAdapterRestartGateway @ 0x14002F760 (RaidAdapterRestartGateway.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, char a2)
{
  int v4; // r8d
  _DWORD *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r10
  unsigned int v17; // r11d
  __int64 v18; // rcx
  _DWORD *v19; // r10
  __int64 v20; // rcx
  _DWORD *v21; // r10
  __int64 v22; // rcx
  _DWORD *v23; // r10
  __int64 v24; // rcx
  _DWORD *v25; // r10
  _DWORD *v26; // rax
  _DWORD *v27; // rbx
  __int64 v28; // rcx
  _DWORD *v29; // r9
  unsigned int v30; // r11d
  __int64 v31; // rcx
  _DWORD *v32; // r9
  __int64 v33; // rcx
  _DWORD *v34; // r9
  __int64 v35; // rcx
  _DWORD *v36; // r9
  __int64 v37; // rcx
  _DWORD *v38; // r9
  __int64 v39; // rcx
  void (__fastcall *v40)(__int64, __int64, struct _KLOCK_QUEUE_HANDLE *, __int64); // rax
  KSPIN_LOCK *v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  KIRQL v51; // bl
  int v52; // r8d
  KIRQL v53; // al
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  KIRQL v57; // bl
  __int64 v58; // rdx
  __int64 v59; // rax
  __int16 v60; // cx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  KIRQL v63; // r12
  KIRQL v64; // al
  signed __int64 v65; // r14
  KIRQL v66; // r13
  signed __int64 v67; // rax
  char *v68; // rax
  signed __int64 v69; // rbx
  char v70; // r8
  char *v71; // r14
  __int64 v72; // rax
  signed __int64 v73; // rdx
  signed __int64 v74; // rax
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  __int64 v77; // rdx
  bool v78; // zf
  KSPIN_LOCK *v79; // rcx
  __int64 v80; // rcx
  KIRQL v81; // al
  __int64 v82; // rdx
  int v83; // ecx
  __int64 v84; // [rsp+20h] [rbp-59h]
  __int64 v85; // [rsp+28h] [rbp-51h]
  __int64 v86; // [rsp+30h] [rbp-49h]
  int v87; // [rsp+50h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-21h] BYREF
  __int128 v90; // [rsp+70h] [rbp-9h] BYREF
  __int128 v91; // [rsp+80h] [rbp+7h]
  __int128 v92; // [rsp+90h] [rbp+17h]
  __int64 v93; // [rsp+A0h] [rbp+27h]

  if ( (*(_DWORD *)(a1 + 504) & 0x8000) == 0
    || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    return;
  }
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      (unsigned int)&EventUnitActiveConditionStart,
      v4,
      **(_QWORD **)(a1 + 1872),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a2);
  v87 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0 )
  {
    v5 = *(_DWORD **)(a1 + 24);
    v6 = 256LL;
    v7 = 264LL;
    v8 = 272LL;
    v9 = 280LL;
    if ( *v5 == 1094997074 )
    {
      v10 = v5 + 94;
      v11 = (__int64)(v5 + 158);
      v12 = (__int64)(v5 + 160);
      v13 = (__int64)(v5 + 162);
      v14 = (__int64)(v5 + 164);
    }
    else if ( *v5 == 1314275652 )
    {
      v10 = v5 + 42;
      v11 = (__int64)(v5 + 106);
      v12 = (__int64)(v5 + 108);
      v13 = (__int64)(v5 + 110);
      v14 = (__int64)(v5 + 112);
    }
    else
    {
      v10 = 0LL;
      v11 = 256LL;
      v12 = 264LL;
      v13 = 272LL;
      v14 = 280LL;
    }
    if ( **((_DWORD **)v10 + 29) == 208 )
    {
      if ( (v10[62] & 0x10) == 0 )
      {
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)v12 = 0LL;
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)v14 = 0LL;
        v10[63] = 12;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v10, 0LL) )
          *v16 = 13;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v15, v17) )
          *v19 = 14;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v18, 4LL) )
          *v21 = 15;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v20, 11LL) )
          v10[72] = 16;
        if ( (*(_DWORD *)(*((_QWORD *)v10 + 29) + 184LL) & 0x20000) != 0 )
          *v23 = 17;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v22, 14LL) )
          *v25 = 32;
        if ( (int)RaCallMiniportUnitControl(v24, 0LL, v25) < 0 )
          goto LABEL_53;
        v10[62] |= 0x10u;
      }
      if ( !*((_BYTE *)v10 + 262) )
        goto LABEL_53;
      v26 = *(_DWORD **)(a1 + 24);
      if ( *v26 == 1094997074 )
      {
        v27 = v26 + 94;
        v6 = (__int64)(v26 + 158);
        v7 = (__int64)(v26 + 160);
        v8 = (__int64)(v26 + 162);
        v9 = (__int64)(v26 + 164);
      }
      else if ( *v26 == 1314275652 )
      {
        v27 = v26 + 42;
        v6 = (__int64)(v26 + 106);
        v7 = (__int64)(v26 + 108);
        v8 = (__int64)(v26 + 110);
        v9 = (__int64)(v26 + 112);
      }
      else
      {
        v27 = 0LL;
      }
      if ( **((_DWORD **)v27 + 29) != 208 )
        goto LABEL_53;
      if ( (v27[62] & 0x10) != 0 )
        goto LABEL_50;
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)v7 = 0LL;
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)v9 = 0LL;
      v27[63] = 12;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v27, 0LL) )
        *v29 = 13;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v28, v30) )
        *v32 = 14;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v31, 4LL) )
        *v34 = 15;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v33, 11LL) )
        v27[72] = 16;
      if ( (*(_DWORD *)(*((_QWORD *)v27 + 29) + 184LL) & 0x20000) != 0 )
        *v36 = 17;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v35, 14LL) )
        *v38 = 32;
      if ( (int)RaCallMiniportUnitControl(v37, 0LL, v38) >= 0 )
      {
        v27[62] |= 0x10u;
LABEL_50:
        if ( *((_BYTE *)v27 + 262) )
        {
          v39 = *(_QWORD *)(a1 + 24);
          *(_WORD *)(&LockHandle.OldIrql + 5) = 0;
          *(&LockHandle.OldIrql + 7) = 0;
          LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)0x1800000001LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
          *(_DWORD *)&LockHandle.OldIrql = 0;
          *(&LockHandle.OldIrql + 4) = 1;
          v40 = *(void (__fastcall **)(__int64, __int64, struct _KLOCK_QUEUE_HANDLE *, __int64))(*(_QWORD *)(v39 + 608)
                                                                                               + 200LL);
          if ( v40 )
          {
            v40(*(_QWORD *)(v39 + 616) + 16LL, 6LL, &LockHandle, v14);
            Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
          }
        }
      }
    }
  }
LABEL_53:
  v41 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1872) + 96LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v41, &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) |= 2u;
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    while ( 1 )
    {
      v42 = (_QWORD *)(*(_QWORD *)(a1 + 1872) + 80LL);
      if ( (_QWORD *)*v42 == v42 )
        break;
      v43 = *(_QWORD **)(*(_QWORD *)(a1 + 1872) + 88LL);
      if ( (_QWORD *)*v43 != v42 || (v44 = (_QWORD *)v43[1], (_QWORD *)*v44 != v43) )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 88LL) = v44;
      *v44 = v42;
      v45 = v43[2];
      v46 = *(_QWORD *)(*(_QWORD *)(v45 + 184) + 8LL);
      if ( *(_BYTE *)(v46 + 2) == 40 )
        v47 = *(_DWORD *)(v46 + 20);
      else
        v47 = *(unsigned __int8 *)(v46 + 2);
      v48 = v47 - 16;
      if ( !v48 || (v49 = v48 - 2) == 0 || (v50 = v49 - 1) == 0 || v50 == 13 )
      {
        v51 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v45, a1 + 1824);
        KeLowerIrql(v51);
      }
      ExFreePoolWithTag(v43, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 759) )
    goto LABEL_134;
  *(_BYTE *)(a1 + 759) = 0;
  v90 = 0LL;
  v93 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    v56 = *(_QWORD *)(a1 + 32);
    v57 = v53;
    *(_DWORD *)(v56 + 80) &= ~0x40u;
    v58 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v58 + 80) & 0x1E0) == 0 && *(int *)(v58 + 84) <= 0 )
    {
      *(_QWORD *)&v90 = 0x3800000038LL;
      DWORD2(v90) = 3;
      if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                           v56,
                           v58,
                           v54,
                           v55,
                           v84,
                           v85,
                           v86) )
      {
        v59 = *(_QWORD *)(a1 + 24);
        WORD4(v92) = 1;
        HIDWORD(v92) = 4;
        v60 = *(_WORD *)(v59 + 56);
        LOWORD(v93) = *(_WORD *)(a1 + 104);
        BYTE2(v93) = *(_BYTE *)(a1 + 106);
        WORD5(v92) = v60;
      }
      v61 = *(_DWORD **)(a1 + 24);
      if ( *v61 == 1094997074 )
      {
        v62 = v61 + 94;
      }
      else if ( *v61 == 1314275652 )
      {
        v62 = v61 + 42;
      }
      else
      {
        v62 = 0LL;
      }
      RaCallMiniportUnitControl(v62, 31LL, &v90);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v57);
  }
  v90 = 0LL;
  *(_QWORD *)&v91 = 0LL;
  v63 = 0;
  DWORD2(v91) = 0;
  if ( KeGetCurrentIrql() != 2 )
  {
    v87 = 0;
    v63 = KfRaiseIrql(2u);
  }
  v64 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
  v65 = *(_QWORD *)(a1 + 808);
  v66 = v64;
  if ( (v65 & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
    do
    {
      v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v65 | 1, v65);
      v78 = v65 == v67;
      v65 = v67;
    }
    while ( !v78 && (v67 & 1) == 0 );
  }
  v68 = RiNormalizeDeviceQueue(a1 + 720, 0);
  v69 = *(_QWORD *)(a1 + 808);
  v70 = 0;
  v71 = v68;
  if ( (v69 & 3) != 0 )
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
      v72 = v69;
      if ( (v69 & 1) != 0 )
      {
        if ( !v70 )
        {
          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
          v70 = 1;
        }
        v72 = v69 ^ 1;
      }
      v73 = v72 ^ 2;
      if ( (v69 & 2) == 0 )
        v73 = v72;
      v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v73, v69);
      v78 = v69 == v74;
      v69 = v74;
      if ( v78 )
      {
        if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
        {
          v75 = *(_QWORD *)(a1 + 808);
          if ( (v75 & 3) == 0 )
          {
            do
            {
              v76 = v75;
              v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v75 | 2, v75);
            }
            while ( v76 != v75 && (v75 & 3) == 0 );
          }
        }
        break;
      }
      if ( (v74 & 3) == 0 )
        break;
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v66);
  if ( v71 )
  {
    if ( (unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v71, &v90) )
    {
      v77 = *(_QWORD *)(a1 + 728);
      if ( (*(_BYTE *)(*(_QWORD *)(v77 + 48) + 112LL) & 4) != 0 )
      {
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( *(_DWORD *)(v77 + 40) != 1699901262 || !*(_DWORD *)(v77 + 24) )
            goto LABEL_127;
          v78 = *(_DWORD *)(v77 + 192) == 0;
        }
        else
        {
          if ( *(_DWORD *)(v77 + 40) != 1699901262 || !*(_DWORD *)(v77 + 24) )
            goto LABEL_127;
          v78 = *(_DWORD *)(v77 + 192) == 0;
        }
        if ( v78 )
        {
          v79 = *(KSPIN_LOCK **)(a1 + 728);
          *(_DWORD *)(v77 + 40) = 0;
          RaidAdapterRestartGateway(v79);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v71 - 120,
        &v90,
        0LL);
    }
  }
LABEL_127:
  if ( !v87 )
    KeLowerIrql(v63);
  if ( !*(_BYTE *)(a1 + 759) )
  {
    v80 = *(_QWORD *)(a1 + 32);
    if ( v80 )
    {
      v81 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v80 + 24));
      v82 = *(_QWORD *)(a1 + 32);
      v83 = *(_DWORD *)(v82 + 80);
      if ( (v83 & 8) != 0 )
      {
        *(_DWORD *)(v82 + 80) = v83 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v81);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
          RaAcquirePowerRefWorkRoutine,
          CriticalWorkQueue,
          (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v82 + 24), v81);
      }
    }
  }
LABEL_134:
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      (unsigned int)&EventUnitActiveConditionStop,
      v52,
      **(_QWORD **)(a1 + 1872),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
}
