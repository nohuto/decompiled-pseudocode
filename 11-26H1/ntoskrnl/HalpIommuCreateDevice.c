/*
 * XREFs of HalpIommuCreateDevice @ 0x140514688
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x14059DE70 (IommuCreateAtsDevice.c)
 *     IommuMapDevice @ 0x14059ED30 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x1405A12E0 (IommuDomainAttachDevice.c)
 *     IommuDeviceCreate @ 0x140789730 (IommuDeviceCreate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ED060 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCreateDeviceInternal @ 0x140503958 (HalpIommuCreateDeviceInternal.c)
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupDeviceGetFaultSettings @ 0x140534238 (IommupDeviceGetFaultSettings.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x140589D58 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupDeviceGetAtsSettings @ 0x14058A420 (IommupDeviceGetAtsSettings.c)
 *     IommupDeviceGetPasidSettings @ 0x14058A55C (IommupDeviceGetPasidSettings.c)
 *     IommupHvRegisterDeviceId @ 0x1405A1090 (IommupHvRegisterDeviceId.c)
 *     IommupHvUnregisterDeviceId @ 0x1405A11F8 (IommupHvUnregisterDeviceId.c)
 *     IommupGetDeviceCreationConfigEntry @ 0x1405A271C (IommupGetDeviceCreationConfigEntry.c)
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 *     IommupDeviceDisableSvm @ 0x140B679EC (IommupDeviceDisableSvm.c)
 */

__int64 __fastcall HalpIommuCreateDevice(__int64 Src, void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4, __int64 *a5)
{
  unsigned __int64 v5; // r12
  _QWORD *v6; // r13
  __int32 v7; // edi
  struct _LIST_ENTRY *i; // rsi
  struct _KTHREAD *v9; // r15
  AutoBoost *v10; // rax
  volatile unsigned __int8 *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbx
  char v14; // r14
  __int64 CurrentIrql; // rax
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 DeviceCreationConfigEntry; // rax
  int FaultSettings; // ebx
  char v21; // r12
  __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int8 v24; // di
  __int64 v25; // rax
  struct _LIST_ENTRY *Blink; // rdx
  int v27; // ecx
  __int64 Blink_high; // r8
  int v29; // ecx
  int v30; // ecx
  bool v31; // al
  struct _KTHREAD *v32; // r13
  struct _LIST_ENTRY *v33; // rdi
  __int64 v34; // r11
  char v35; // cl
  struct _LIST_ENTRY **v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 Flink; // rdx
  __int64 v42; // rdx
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int8 v46; // bl
  struct _KTHREAD *QuantumTarget; // r11
  struct _KTHREAD **v48; // r11
  __int64 v49; // rcx
  __int64 v50; // rax
  void *v51; // rcx
  void *SListFaultAddress; // rax
  __int64 v53; // rcx
  ULONG_PTR *v54; // r12
  _DWORD *v55; // rax
  __int64 v56; // rcx
  int *v57; // rdx
  int v58; // ebx
  __int64 v59; // rcx
  _DWORD *v60; // rax
  int v61; // eax
  PVOID v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 *v66; // rax
  unsigned __int8 v67; // di
  struct _LIST_ENTRY *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int8 v71; // di
  struct _LIST_ENTRY *v72; // rdx
  struct _LIST_ENTRY *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  char v76; // al
  unsigned __int8 v77; // di
  char v78; // [rsp+3Ah] [rbp-4Fh]
  char v79; // [rsp+3Bh] [rbp-4Eh] BYREF
  char v80; // [rsp+3Ch] [rbp-4Dh] BYREF
  char v81; // [rsp+3Dh] [rbp-4Ch] BYREF
  char v82; // [rsp+3Eh] [rbp-4Bh]
  _QWORD *v83; // [rsp+40h] [rbp-49h] BYREF
  char v84; // [rsp+48h] [rbp-41h] BYREF
  char v85; // [rsp+49h] [rbp-40h]
  int v86; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct _KTHREAD *v87; // [rsp+50h] [rbp-39h]
  __int64 v88; // [rsp+58h] [rbp-31h]
  void *v89; // [rsp+60h] [rbp-29h] BYREF
  __int64 v90; // [rsp+68h] [rbp-21h] BYREF
  ULONG_PTR *v91; // [rsp+70h] [rbp-19h] BYREF
  __int128 Srca; // [rsp+78h] [rbp-11h] BYREF
  __int64 v93; // [rsp+88h] [rbp-1h]
  _QWORD *v94; // [rsp+E8h] [rbp+5Fh] BYREF
  PVOID Object; // [rsp+F0h] [rbp+67h]
  __int64 v96; // [rsp+F8h] [rbp+6Fh]
  int v97; // [rsp+100h] [rbp+77h]

  v97 = (int)a4;
  v96 = a3;
  Object = a2;
  v94 = (_QWORD *)Src;
  LOBYTE(v5) = 0;
  v6 = (_QWORD *)Src;
  v86 = 0;
  v83 = 0LL;
  v91 = 0LL;
  v93 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  v7 = (int)a4;
  v79 = 0;
  Srca = 0LL;
  i = 0LL;
  v80 = 0;
  v85 = 0;
  v9 = 0LL;
  v84 = 0;
  v78 = 0;
  v81 = 0;
  v82 = 0;
  v87 = 0LL;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead, 0LL, 0LL, a4);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead,
      v10,
      (__int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  v14 = 1;
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v11) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v13 + 33), v11, 1);
    }
    else
    {
      *((_BYTE *)v13 + 10) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v16 = 15LL;
  v88 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = 15;
    LOBYTE(v16) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v16, v11);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v17 = v96;
  v18 = 0LL;
  if ( v96 )
  {
    DeviceCreationConfigEntry = IommupGetDeviceCreationConfigEntry(v96, 5LL);
    if ( DeviceCreationConfigEntry )
    {
      v5 = *(_QWORD *)(DeviceCreationConfigEntry + 24);
      if ( v5 >= 2 )
      {
        FaultSettings = -1073741776;
        v9 = 0LL;
        v21 = 0;
        v14 = 0;
        goto LABEL_34;
      }
    }
  }
  FaultSettings = IommupDeviceGetFaultSettings(v17, &v86, v18);
  if ( FaultSettings < 0 )
  {
    v32 = (struct _KTHREAD *)Object;
    v9 = 0LL;
    goto LABEL_140;
  }
  for ( i = HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink; ; i = i->Flink )
  {
    if ( i == (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
      v24 = v88;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v88);
      __writecr8(v24);
      v25 = HalpMmAllocCtxAlloc(v23, 40LL);
      i = (struct _LIST_ENTRY *)v25;
      if ( !v25 )
      {
        FaultSettings = -1073741670;
        goto LABEL_65;
      }
      *(_OWORD *)v25 = 0LL;
      *(_OWORD *)(v25 + 16) = 0LL;
      *(_QWORD *)(v25 + 32) = 0LL;
      FaultSettings = HalpIommuCloneDeviceId(v6, (__int64 *)(v25 + 16));
      if ( FaultSettings < 0 )
        goto LABEL_58;
      v38 = (void *)HalpMmAllocCtxAlloc(v37, 440LL);
      v39 = (__int64)v38;
      if ( !v38 )
      {
        FaultSettings = -1073741670;
LABEL_58:
        v40 = (__int64)v83;
LABEL_59:
        Flink = (__int64)i[1].Flink;
        if ( Flink )
          HalpMmAllocCtxFree(v37, Flink);
        HalpMmAllocCtxFree(v37, (__int64)i);
LABEL_62:
        if ( !v40 )
          goto LABEL_65;
        v42 = v40;
        goto LABEL_64;
      }
      memset_0(v38, 0, 0x1B8uLL);
      v44 = v97;
      i[1].Blink = (struct _LIST_ENTRY *)v39;
      *(_DWORD *)(v39 + 380) = v44;
      *(_DWORD *)(v39 + 384) = v44;
      *(_BYTE *)(v39 + 408) = v5;
      *(_DWORD *)(v39 + 268) = -1;
      if ( (unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() )
        *(_QWORD *)(v39 + 432) = 0LL;
      *(_DWORD *)(v39 + 412) = v86;
      *(_QWORD *)(v39 + 192) = HalpIommuFaultDeferredRoutine;
      *(_QWORD *)(v39 + 248) = HalpIommuHandleFaultWorkerRoutine;
      *(_DWORD *)(v39 + 168) = 275;
      *(_QWORD *)(v39 + 200) = v39;
      *(_QWORD *)(v39 + 224) = 0LL;
      *(_QWORD *)(v39 + 184) = 0LL;
      *(_QWORD *)(v39 + 256) = v39;
      *(_QWORD *)(v39 + 232) = 0LL;
      v46 = KeGetCurrentIrql();
      if ( v46 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v45) = v46;
        KiRaiseIrqlProcessIrqlFlags(v45, 15LL);
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
      QuantumTarget = (struct _KTHREAD *)HalpDeviceBlockUnblockPushLock.QuantumTarget;
      if ( (unsigned __int64 *)HalpDeviceBlockUnblockPushLock.QuantumTarget != &HalpDeviceBlockUnblockPushLock.QuantumTarget )
      {
        do
        {
          v9 = QuantumTarget;
          if ( (unsigned __int8)IidAreIdsStrictlyEqual(QuantumTarget->Header.WaitListHead.Blink, v6) )
            break;
          QuantumTarget = *v48;
          v9 = 0LL;
        }
        while ( QuantumTarget != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.QuantumTarget );
        v14 = 1;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v46);
      __writecr8(v46);
      if ( *(_DWORD *)(v39 + 412) == 1 )
      {
        v50 = HalpMmAllocCtxAlloc(v49, 40LL);
        *(_QWORD *)(v39 + 424) = v50;
        if ( !v50 )
          goto LABEL_82;
      }
      if ( HalpHvIommu )
      {
        if ( *(_DWORD *)v6 == 2 )
        {
          FaultSettings = HalpIommuQueryAcpiDeviceMapping((__int64)v6, (__int64)&Srca);
          if ( FaultSettings < 0 )
            goto LABEL_83;
          FaultSettings = HalpIommuCloneDeviceId(&Srca, (__int64 *)&v94);
          if ( FaultSettings < 0 )
            goto LABEL_83;
          v6 = v94;
          v83 = v94;
        }
        if ( v9 )
        {
          SListFaultAddress = v9->SListFaultAddress;
        }
        else if ( HalpHvCpuManager )
        {
          FaultSettings = IommupHvRegisterDeviceId(v6, &v89);
          if ( FaultSettings < 0 )
            goto LABEL_83;
          SListFaultAddress = v89;
        }
        else
        {
          SListFaultAddress = (void *)v6[1];
        }
        *(_QWORD *)(v39 + 32) = SListFaultAddress;
      }
      else
      {
        FaultSettings = HalpIommuCreateDeviceInternal((__int64)v6, v39, &v90, &v91);
        if ( FaultSettings < 0 )
          goto LABEL_83;
        v54 = v91;
        *(_QWORD *)(v39 + 40) = v90;
        *(_QWORD *)(v39 + 32) = v54;
        if ( v54[26] )
        {
          v55 = (_DWORD *)HalpMmAllocCtxAlloc(v53, 24LL);
          *(_QWORD *)(v39 + 48) = v55;
          if ( !v55 )
          {
LABEL_82:
            FaultSettings = -1073741670;
LABEL_83:
            v40 = (__int64)v83;
            goto LABEL_84;
          }
          *v55 = 1;
          FaultSettings = guard_dispatch_icall_no_overrides(v54[2], v6);
          if ( FaultSettings < 0 )
          {
            v57 = *(int **)(v39 + 48);
            v86 = *v57;
            if ( FaultSettings != -1073741789 )
              goto LABEL_83;
            HalpMmAllocCtxFree(v56, (__int64)v57);
            v58 = v86;
            *(_QWORD *)(v39 + 48) = 0LL;
            v60 = (_DWORD *)HalpMmAllocCtxAlloc(v59, (unsigned int)(16 * (v58 - 1) + 24));
            *(_QWORD *)(v39 + 48) = v60;
            if ( !v60 )
              goto LABEL_82;
            *v60 = v58;
            FaultSettings = guard_dispatch_icall_no_overrides(v54[2], v6);
            if ( FaultSettings < 0 )
              goto LABEL_83;
          }
        }
        *(_QWORD *)(v39 + 64) = 0LL;
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v39 + 64));
        _InterlockedExchange64((volatile __int64 *)(v39 + 64), 1LL);
      }
      v40 = (__int64)v83;
      v82 = 1;
      if ( v83 || (v61 = HalpIommuCloneDeviceId(v6, (__int64 *)&v83), v40 = (__int64)v83, FaultSettings = v61, v61 >= 0) )
      {
        v62 = Object;
        *(_QWORD *)v39 = v40;
        if ( v62 )
          ObfReferenceObjectWithTag(v62, 0x446C6148u);
        v63 = v96;
        *(_QWORD *)(v39 + 360) = v39 + 352;
        *(_QWORD *)(v39 + 352) = v39 + 352;
        *(_QWORD *)(v39 + 368) = 0LL;
        *(_QWORD *)(v39 + 8) = v62;
        FaultSettings = IommupDeviceEnableSvm(v39, v63);
        if ( FaultSettings >= 0 )
        {
          *(_BYTE *)(v39 + 80) = *(_DWORD *)v6 == 5;
          v66 = a5;
          LODWORD(i[2].Flink) = 1;
          *v66 = v39;
          v67 = KeGetCurrentIrql();
          if ( v67 != 15 )
            __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v64) = 15;
            LOBYTE(v65) = v67;
            KiRaiseIrqlProcessIrqlFlags(v65, v64);
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
          v68 = (struct _LIST_ENTRY *)HalpDeviceBlockUnblockPushLock.SListFaultAddress;
          if ( *(struct _KTHREAD **)HalpDeviceBlockUnblockPushLock.SListFaultAddress != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink )
            goto LABEL_134;
          i->Flink = (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
          i->Blink = v68;
          v68->Flink = i;
          HalpDeviceBlockUnblockPushLock.SListFaultAddress = i;
          ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v67);
          __writecr8(v67);
          if ( !v9 )
            goto LABEL_65;
          v71 = KeGetCurrentIrql();
          if ( v71 != 15 )
            __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v69) = 15;
            LOBYTE(v70) = v71;
            KiRaiseIrqlProcessIrqlFlags(v70, v69);
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
          v72 = *(struct _LIST_ENTRY **)&v9->Header.Lock;
          if ( *(struct _KTHREAD **)(*(_QWORD *)&v9->Header.Lock + 8LL) != v9
            || (v73 = v9->Header.WaitListHead.Flink, (struct _KTHREAD *)v73->Flink != v9) )
          {
LABEL_134:
            __fastfail(3u);
          }
          v73->Flink = v72;
          v72->Blink = v73;
          ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v71);
          __writecr8(v71);
          if ( !HalpHvIommu )
            HalpMmAllocCtxFree(v74, v9->QuantumTarget);
          HalpMmAllocCtxFree(v74, (__int64)v9->Header.WaitListHead.Blink);
          v42 = (__int64)v9;
LABEL_64:
          HalpMmAllocCtxFree(v37, v42);
          goto LABEL_65;
        }
      }
LABEL_84:
      IommupDeviceDisableSvm(v39);
      v51 = *(void **)(v39 + 8);
      if ( v51 )
        ObfDereferenceObjectWithTag(v51, 0x446C6148u);
      if ( v82 )
      {
        if ( HalpHvIommu )
        {
          if ( HalpHvCpuManager )
            IommupHvUnregisterDeviceId(*(_QWORD *)(v39 + 32));
        }
        else
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(v39 + 32) + 16LL), *(_QWORD *)(v39 + 40));
        }
      }
      v75 = *(_QWORD *)(v39 + 48);
      if ( v75 )
      {
        HalpMmAllocCtxFree((__int64)v51, v75);
        *(_QWORD *)(v39 + 48) = 0LL;
      }
      HalpMmAllocCtxFree((__int64)v51, v39);
      v76 = 0;
LABEL_149:
      if ( v76 )
        --LODWORD(i[2].Flink);
      if ( !v14 )
        goto LABEL_62;
      goto LABEL_59;
    }
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[1].Flink, v6) )
      break;
  }
  Blink = i[1].Blink;
  v27 = (int)Blink[24].Flink;
  Blink_high = HIDWORD(Blink[23].Blink);
  if ( v27 == v7 )
    goto LABEL_38;
  if ( !v27 )
  {
LABEL_29:
    v31 = v7 != 1;
    if ( v7 == 2 && (_DWORD)Blink_high != 2 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v29 = v27 - 1;
  if ( !v29 )
  {
    if ( v7 != 2 )
      goto LABEL_32;
    if ( (_DWORD)Blink_high != 2 )
    {
      v31 = 0;
LABEL_31:
      if ( !v31 )
        goto LABEL_32;
    }
LABEL_38:
    _InterlockedExchange((volatile __int32 *)&Blink[24], v7);
    v33 = i[1].Blink;
    if ( LOBYTE(v33[25].Blink) == (_BYTE)v5 && HIDWORD(v33[25].Blink) == v86 )
    {
      FaultSettings = IommupDeviceGetAtsSettings(v22, &v84, Blink_high);
      if ( FaultSettings < 0 )
        goto LABEL_40;
      FaultSettings = IommupDeviceGetPasidSettings(v34, &v79, &v80, &v81);
      if ( FaultSettings < 0 )
        goto LABEL_40;
      if ( v80 || v79 )
        v35 = 1;
      else
        v35 = v85;
      if ( BYTE2(v33[16].Blink) == v35 && BYTE1(v33[16].Blink) == v79 && LOBYTE(v33[16].Blink) == v81 )
      {
        v36 = (struct _LIST_ENTRY **)a5;
        FaultSettings = 0;
        ++LODWORD(i[2].Flink);
        v32 = (struct _KTHREAD *)Object;
        v9 = (struct _KTHREAD *)v33->Blink;
        *v36 = v33;
        v78 = 1;
        if ( v32 && v32 != v9 )
        {
          v33->Blink = (struct _LIST_ENTRY *)v32;
          v21 = 1;
          if ( v9 )
            goto LABEL_142;
LABEL_141:
          v14 = 0;
          goto LABEL_142;
        }
LABEL_140:
        v21 = 0;
        goto LABEL_141;
      }
    }
    FaultSettings = -1073741637;
LABEL_40:
    v9 = v87;
    goto LABEL_33;
  }
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_38;
  if ( v30 == 1 )
    goto LABEL_29;
LABEL_32:
  FaultSettings = -1073741637;
LABEL_33:
  v21 = (char)v9;
  v14 = (char)v9;
LABEL_34:
  v32 = (struct _KTHREAD *)Object;
LABEL_142:
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v77 = v88;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v88);
  __writecr8(v77);
  if ( v21 )
  {
    ObfReferenceObjectWithTag(v32, 0x446C6148u);
    if ( v14 )
      ObfDereferenceObjectWithTag(v9, 0x446C6148u);
  }
  v76 = v78;
  if ( FaultSettings < 0 )
  {
    v40 = (__int64)v83;
    v14 = 0;
    goto LABEL_149;
  }
LABEL_65:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  KeAbPostRelease((unsigned __int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  return (unsigned int)FaultSettings;
}
