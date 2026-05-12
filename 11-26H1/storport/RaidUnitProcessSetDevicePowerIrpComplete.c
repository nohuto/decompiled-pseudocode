/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorUpdateCrashDumpPowerReady @ 0x140019D70 (StorUpdateCrashDumpPowerReady.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorPortUnitPoFxD0Completion @ 0x14005B504 (StorPortUnitPoFxD0Completion.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x14007E54C (McTemplateK0quuupd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v5; // edi
  POWER_STATE v6; // ebx
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  unsigned __int64 v11; // rcx
  _IO_STACK_LOCATION *v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rdx
  int *Information; // rax
  char v24; // al
  char v25; // r8
  char *v26; // r10
  char v27; // r11
  unsigned int v28; // eax
  char Flags; // bl
  char LowPart_high; // r10
  char v31; // r15
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v33; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  _ACCESS_STATE *AccessState; // r9
  unsigned __int8 v36; // si
  char *v37; // r15
  unsigned int v38; // r13d
  int v39; // edx
  int v40; // ecx
  unsigned __int64 DesiredAccess; // r12
  __int64 v42; // r8
  int v43; // ecx
  char v44; // r12
  char SecurityQos; // cl
  char v46; // [rsp+60h] [rbp-19h]
  char v47; // [rsp+61h] [rbp-18h]
  unsigned int v48; // [rsp+64h] [rbp-15h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-11h] BYREF
  __int128 v50; // [rsp+80h] [rbp+7h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LOBYTE(v5) = 0;
  Irp->IoStatus.Status = 0;
  v6.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 1);
  *((POWER_STATE *)Context + 137) = v6;
  PoSetPowerState(v7, DevicePowerState, v6);
  if ( v6.SystemState == PowerSystemWorking && Context[504] < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitRestartQueue(Context, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *((_DWORD *)Context + 137) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x100) != 0 )
      {
        ++*((_DWORD *)Context + 838);
        if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 128, 1u) )
        {
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          v33 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock((__int64)Context, (__int64)WorkItem, 0);
            IoQueueWorkItemEx(v33, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, Context);
          }
        }
        *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) &= ~0x200u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context)
        || (v17 = *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233)),
            (v17 & 1) != 0) )
      {
        if ( Context[759] )
        {
          Context[759] = 0;
          RaUnitUnlockForwardIo(Context, 2LL);
          RaidUnitRestartQueue(Context, 0LL);
        }
      }
      StorPortUnitPoFxD0Completion(v15, v14, v16, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6092LL));
      v20 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v20 + 110) & 0x40) != 0 )
      {
        LOBYTE(v19) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v20, 0xFFFFFFFFLL, v18, v19);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
    else if ( Context[759] )
    {
      Context[759] = 0;
      RaUnitUnlockForwardIo(Context, 2LL);
      RaidUnitRestartQueue(Context, 0LL);
    }
    if ( *((_DWORD *)Context + 260) )
      StorUpdateCrashDumpPowerReady(*((_QWORD *)Context + 3));
  }
  else
  {
    if ( !Context[759] )
    {
      Context[759] = 1;
      RiDisableDeviceQueueFastPath(Context + 720, 0LL);
      RaUnitLockForwardIo(Context, 2LL);
    }
    if ( *((_DWORD *)Context + 260) )
      StorUpdateCrashDumpPowerReady(*((_QWORD *)Context + 3));
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6092LL), 1u);
      v21 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v21 + 110) & 0x40) != 0 && *(_DWORD *)(v21 + 6092) == *(_DWORD *)(v21 + 168) )
      {
        LOBYTE(v9) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v21, 0LL, v8, v9);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      52LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(Irp, &v50);
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v40,
        v39,
        (unsigned int)&v50,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[104],
        Context[105],
        Context[106],
        (char)Irp);
  }
  v10 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = 0;
  if ( v10 )
    goto LABEL_15;
  v50 = 0LL;
  IoGetActivityIdIrp(Irp, &v50);
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v12->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_15;
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_37;
  }
  if ( v12->MajorFunction != 15 )
  {
    if ( v12->MajorFunction != 27 )
      goto LABEL_15;
    if ( v12->MinorFunction == 7 && !v12->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v5 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v11, (_DWORD)v12, (unsigned int)&v50, (_DWORD)Irp, v5, Irp->IoStatus.Status);
      }
      goto LABEL_15;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_15;
    v22 = &EventPnpRequestComplete;
LABEL_37:
    McTemplateK0pd_EtwWriteTransfer(v11, v22, &v50, Irp, Irp->IoStatus.Status);
    goto LABEL_15;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_15;
  SecurityContext = v12->Parameters.Create.SecurityContext;
  AccessState = 0LL;
  v46 = 0;
  v36 = 0;
  v27 = 0;
  Flags = 0;
  LowPart_high = 0;
  v31 = 0;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v36 = BYTE3(SecurityContext->AccessState);
    v44 = BYTE4(SecurityContext->SecurityQos);
    if ( BYTE2(SecurityContext->SecurityQos) )
      goto LABEL_15;
LABEL_104:
    LOBYTE(v11) = SecurityQos - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_15;
    if ( BYTE3(SecurityContext->SecurityQos) == 1 || !AccessState || !v36 )
      goto LABEL_60;
    v24 = AccessState->OperationID.LowPart & 0x7F;
    if ( v24 == 114 || v24 == 115 )
    {
      v11 = (unsigned __int64)AccessState + v36;
      v25 = 0;
      if ( (unsigned __int64)&AccessState->SecurityEvaluated > v11 )
      {
LABEL_58:
        if ( v25 )
          v31 = 1;
LABEL_60:
        if ( byte_140173441 < 0 )
        {
          if ( !v31 )
          {
            LowPart_high = 0;
            Flags = 0;
            v27 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v11,
            (_DWORD)SecurityContext,
            (unsigned int)&v50,
            (_DWORD)Irp,
            Irp->IoStatus.Status,
            BYTE3(SecurityContext->SecurityQos),
            v44,
            v27,
            Flags,
            LowPart_high,
            (char)Irp);
        }
        goto LABEL_15;
      }
      Flags = BYTE2(AccessState->OperationID.LowPart);
      v27 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
      LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
    }
    else
    {
      v11 = (unsigned __int64)AccessState + v36;
      v25 = 0;
      if ( (unsigned __int64)&AccessState->SecurityEvaluated > v11 )
        goto LABEL_58;
      v26 = (char *)&AccessState->Flags + 1;
      v27 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
      v28 = v36;
      if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v36 )
        v28 = HIBYTE(AccessState->OperationID.HighPart) + 8;
      v11 = (unsigned __int64)AccessState + v28;
      if ( (unsigned __int64)v26 <= v11 )
        Flags = AccessState->Flags;
      if ( (unsigned __int64)&AccessState->Flags + 2 > v11 )
        LowPart_high = 0;
      else
        LowPart_high = *v26;
    }
    v25 = 1;
    goto LABEL_58;
  }
  v37 = 0LL;
  v47 = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_15;
  v38 = 0;
  v48 = (unsigned int)SecurityContext[2].AccessState;
  if ( !v48 )
    goto LABEL_15;
  while ( 1 )
  {
    v11 = *((unsigned int *)&SecurityContext[5].SecurityQos + v38);
    if ( (unsigned int)v11 >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)v11 < (unsigned int)DesiredAccess )
        break;
    }
LABEL_94:
    if ( ++v38 >= v48 )
    {
LABEL_95:
      v44 = v46;
      goto LABEL_96;
    }
  }
  v42 = (unsigned int)v11;
  v43 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v11) - 64;
  if ( v43 )
  {
    LODWORD(v11) = v43 - 1;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        LODWORD(v11) = v42 + 40;
        if ( v42 + 40 <= DesiredAccess )
        {
          if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v42 + 4) )
            v37 = (char *)&SecurityContext[1].AccessState + v42;
          AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v42);
          goto LABEL_102;
        }
      }
    }
    else
    {
      LODWORD(v11) = v42 + 56;
      if ( v42 + 56 <= DesiredAccess )
      {
        v47 = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + v42 + 2) )
          v37 = (char *)&SecurityContext[1] + v42;
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v42);
        v36 = *((_BYTE *)&SecurityContext->AccessState + v42 + 1);
        v46 = *((_BYTE *)&SecurityContext->AccessState + v42);
      }
    }
    goto LABEL_93;
  }
  LODWORD(v11) = v42 + 40;
  if ( v42 + 40 > DesiredAccess )
  {
LABEL_93:
    if ( v47 )
      goto LABEL_95;
    goto LABEL_94;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + v42 + 2) )
    v37 = (char *)&SecurityContext[1] + v42;
  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v42);
LABEL_102:
  v44 = *((_BYTE *)&SecurityContext->AccessState + v42);
  v36 = *((_BYTE *)&SecurityContext->AccessState + v42 + 1);
LABEL_96:
  if ( v37 )
  {
    SecurityQos = *v37;
    v31 = 0;
    goto LABEL_104;
  }
LABEL_15:
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
