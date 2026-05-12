/*
 * XREFs of StorAdapterInitializeDlrmIfSupported @ 0x1401B0860
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidGetLinkConfigInterface @ 0x140094504 (RaidGetLinkConfigInterface.c)
 *     RaidQueryDlrmSupportStatus @ 0x1400956AC (RaidQueryDlrmSupportStatus.c)
 *     Feature_DlrmFixInitRace__private_IsEnabledDeviceUsageNoInline @ 0x14012D52C (Feature_DlrmFixInitRace__private_IsEnabledDeviceUsageNoInline.c)
 *     StorLogDLRMInitialization @ 0x14012E6A0 (StorLogDLRMInitialization.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     StorDlrmCreateSystemThread @ 0x1401B0C2C (StorDlrmCreateSystemThread.c)
 *     StorDlrmTerminateSystemThread @ 0x1401B0D44 (StorDlrmTerminateSystemThread.c)
 */

void __fastcall StorAdapterInitializeDlrmIfSupported(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rbp
  int v5; // r15d
  int SystemThread; // edi
  __int64 v7; // r9
  __int64 Pool; // rax
  __int64 v9; // r14
  int LinkConfigInterface; // eax
  char v11; // al
  unsigned int v12; // eax
  unsigned int i; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD **v17; // rdi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  char v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  if ( !a1 )
    return;
  *(_BYTE *)(a1 + 113) &= ~2u;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v5 = 0;
  if ( (int)RaidQueryDlrmSupportStatus(v2, &v20) < 0 )
    return;
  if ( !v20 )
  {
    SystemThread = -1073741637;
    goto LABEL_35;
  }
  v7 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 113) |= 2u;
  Pool = RaidAllocatePool(64LL, 312LL, 1296851282LL, v7);
  v3 = Pool;
  if ( !Pool )
    goto LABEL_6;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 112));
  KeInitializeEvent((PRKEVENT)(v3 + 88), SynchronizationEvent, 0);
  v9 = v3 + 120;
  *(_QWORD *)(v3 + 152) = v3 + 144;
  *(_QWORD *)(v3 + 144) = v3 + 144;
  *(_QWORD *)(v3 + 128) = v3 + 120;
  *(_QWORD *)(v3 + 120) = v3 + 120;
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 160));
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 136));
  LinkConfigInterface = RaidGetLinkConfigInterface(*(_QWORD *)(a1 + 8), &v21);
  v4 = v21;
  SystemThread = LinkConfigInterface;
  if ( LinkConfigInterface >= 0 )
  {
    SystemThread = (*(__int64 (__fastcall **)(_QWORD, __int64))(v21 + 40))(*(_QWORD *)(v21 + 8), v3);
    if ( SystemThread >= 0 )
    {
      v11 = *(_QWORD *)v3;
      if ( (v11 & 0x20) != 0 )
      {
        v12 = 5;
      }
      else if ( (v11 & 0x10) != 0 )
      {
        v12 = 4;
      }
      else if ( (v11 & 8) != 0 )
      {
        v12 = 3;
      }
      else if ( (v11 & 4) != 0 )
      {
        v12 = 2;
      }
      else if ( (v11 & 2) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v12 = (*(_QWORD *)v3 & 1) == 0 ? 6 : 0;
      }
      *(_DWORD *)(v3 + 56) = v12;
      *(_DWORD *)(v3 + 60) = v12;
      if ( v12 >= 6 )
      {
        SystemThread = -1073741823;
        goto LABEL_35;
      }
      for ( i = 0; i < 4; ++i )
      {
        v14 = (_QWORD *)RaidAllocatePool(64LL, 24LL, 1296851282LL, *(_QWORD *)(a1 + 8));
        if ( !v14 )
          break;
        v15 = *(_QWORD **)(v3 + 128);
        if ( *v15 != v9 )
LABEL_42:
          __fastfail(3u);
        *v14 = v9;
        ++v5;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(v3 + 128) = v14;
      }
      if ( !v5 )
      {
LABEL_6:
        SystemThread = -1073741670;
        goto LABEL_35;
      }
      if ( (unsigned int)Feature_DlrmFixInitRace__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_QWORD *)(v3 + 40) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 48) = KeQueryUnbiasedInterruptTime();
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 256) = -1LL;
        *(_QWORD *)(v3 + 168) = UnbiasedInterruptTime;
        *(_QWORD *)(v3 + 304) = 0LL;
        *(_QWORD *)(a1 + 6280) = v4;
        *(_QWORD *)(v3 + 16) = a1;
        SystemThread = StorDlrmCreateSystemThread((PVOID)v3);
        if ( SystemThread < 0 )
        {
          *(_QWORD *)(a1 + 6280) = 0LL;
          goto LABEL_35;
        }
        *(_QWORD *)(a1 + 6288) = v3;
      }
      else
      {
        SystemThread = StorDlrmCreateSystemThread((PVOID)v3);
        if ( SystemThread < 0 )
          goto LABEL_35;
        *(_QWORD *)(v3 + 40) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 48) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 168) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 256) = -1LL;
        *(_QWORD *)(v3 + 304) = 0LL;
        *(_QWORD *)(a1 + 6280) = v4;
        *(_QWORD *)(a1 + 6288) = v3;
        *(_QWORD *)(v3 + 16) = a1;
      }
      *(_DWORD *)(v3 + 12) |= 1u;
      SystemThread = PoRegisterForEffectivePowerModeNotifications(
                       2LL,
                       DlrmEffectivePowerModeCallback,
                       *(_QWORD *)(a1 + 6288),
                       v3 + 64,
                       *(_QWORD *)(a1 + 8));
      if ( SystemThread < 0 )
        SystemThread = 0;
    }
  }
LABEL_35:
  StorLogDLRMInitialization(a1, v3, SystemThread);
  if ( SystemThread < 0 )
  {
    if ( v3 )
    {
      StorDlrmTerminateSystemThread(v3);
      v17 = (_QWORD **)(v3 + 120);
      while ( 1 )
      {
        v18 = *v17;
        if ( *v17 == v17 )
          break;
        if ( (_QWORD **)v18[1] != v17 )
          goto LABEL_42;
        v19 = (_QWORD *)*v18;
        if ( *(_QWORD **)(*v18 + 8LL) != v18 )
          goto LABEL_42;
        *v17 = v19;
        v19[1] = v17;
        ExFreePoolWithTag(v18, 0x4D4C6152u);
      }
      ExFreePoolWithTag((PVOID)v3, 0x4D4C6152u);
      *(_QWORD *)(a1 + 6288) = 0LL;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(v4 + 24))(*(_QWORD *)(v4 + 8));
      *(_QWORD *)(a1 + 6280) = 0LL;
      ExFreePoolWithTag((PVOID)v4, 0x4D4C6152u);
    }
  }
}
