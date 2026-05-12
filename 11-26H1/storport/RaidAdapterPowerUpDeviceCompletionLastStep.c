/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x14000F8B0 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x14007F680 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidAdapterRestartAdapter @ 0x1400113C8 (RaidAdapterRestartAdapter.c)
 *     StorUpdateCrashDumpPowerReady @ 0x140019D70 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 *     StorPortUnitIdleState @ 0x14002C7E0 (StorPortUnitIdleState.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAdapterReInitialize @ 0x14005A478 (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x14007E3EC (McTemplateK0qpd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  unsigned int v4; // r13d
  KIRQL v5; // bl
  unsigned int LowPart; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  PSLIST_ENTRY i; // rax
  int v11; // edx
  int v12; // ecx
  PSLIST_ENTRY v13; // rbx
  IRP *Next; // rdx
  unsigned __int64 v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  void *v18; // rdx
  int *Information; // rax
  int v20; // ecx
  char v21; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char *v23; // r10
  char v24; // r11
  unsigned int v25; // eax
  char Flags; // bl
  char LowPart_high; // r10
  char v28; // r15
  _ACCESS_STATE *v29; // r9
  unsigned __int8 v30; // r14
  char *v31; // r15
  __int64 v32; // r8
  unsigned __int64 DesiredAccess; // r12
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r12
  char SecurityQos; // cl
  char v38; // r8
  char v39; // [rsp+60h] [rbp-29h]
  char v40; // [rsp+61h] [rbp-28h]
  unsigned int AccessState; // [rsp+64h] [rbp-25h]
  __int64 v42; // [rsp+68h] [rbp-21h] BYREF
  __int64 v43; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  __int128 v45; // [rsp+90h] [rbp+7h] BYREF

  LODWORD(v43) = 0;
  v42 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a2 + 376, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2, 0LL, 0LL);
  v5 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2, 0LL);
  KeLowerIrql(v5);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 348) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v45 = 0LL;
    IoGetActivityIdIrp(Irp, &v45);
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(
        v12,
        v11,
        (unsigned int)&v45,
        *(_DWORD *)(a2 + 56),
        (char)Irp,
        Irp->IoStatus.Status);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v42) = *(_DWORD *)(a2 + 876);
    v43 = *(_QWORD *)(a2 + 864);
    IoReportInterruptActive(&v42);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5080) )
    StorUpdateCrashDumpPowerReady(a2);
  v7 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( v7 )
    goto LABEL_12;
  v45 = 0LL;
  IoGetActivityIdIrp(Irp, &v45);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0xEu:
      if ( (byte_140173442 & 8) == 0 )
        break;
      v18 = &EventNonReadWriteRequestComplete;
LABEL_29:
      McTemplateK0pd_EtwWriteTransfer(v8, v18, &v45, Irp, Irp->IoStatus.Status);
      break;
    case 0xFu:
      if ( byte_140173441 >= 0 )
        break;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      v29 = 0LL;
      v39 = 0;
      v30 = 0;
      v24 = 0;
      Flags = 0;
      LowPart_high = 0;
      v28 = 0;
      if ( BYTE2(SecurityContext->SecurityQos) == 40 )
      {
        v31 = 0LL;
        v40 = 0;
        if ( SecurityContext->FullCreateOptions )
          break;
        AccessState = (unsigned int)SecurityContext[2].AccessState;
        if ( !AccessState )
          break;
        while ( 1 )
        {
          v8 = *((unsigned int *)&SecurityContext[5].SecurityQos + v4);
          if ( (unsigned int)v8 >= 0x80 )
          {
            DesiredAccess = SecurityContext->DesiredAccess;
            if ( (unsigned int)v8 < (unsigned int)DesiredAccess )
            {
              v34 = (unsigned int)v8;
              v35 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v8) - 64;
              if ( v35 )
              {
                LODWORD(v8) = v35 - 1;
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    LODWORD(v8) = v34 + 40;
                    if ( v34 + 40 <= DesiredAccess )
                    {
                      if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v34 + 4) )
                        v31 = (char *)&SecurityContext[1].AccessState + v34;
                      v29 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v34);
                      goto LABEL_92;
                    }
                  }
                }
                else
                {
                  LODWORD(v8) = v34 + 56;
                  if ( v34 + 56 <= DesiredAccess )
                  {
                    v40 = 1;
                    if ( *((_BYTE *)&SecurityContext->AccessState + v34 + 2) )
                      v31 = (char *)&SecurityContext[1] + v34;
                    v29 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v34);
                    v30 = *((_BYTE *)&SecurityContext->AccessState + v34 + 1);
                    v39 = *((_BYTE *)&SecurityContext->AccessState + v34);
                  }
                }
              }
              else
              {
                LODWORD(v8) = v34 + 40;
                if ( v34 + 40 <= DesiredAccess )
                {
                  if ( *((_BYTE *)&SecurityContext->AccessState + v34 + 2) )
                    v31 = (char *)&SecurityContext[1] + v34;
                  v29 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v34);
LABEL_92:
                  v36 = *((_BYTE *)&SecurityContext->AccessState + v34);
                  v30 = *((_BYTE *)&SecurityContext->AccessState + v34 + 1);
LABEL_86:
                  if ( v31 )
                  {
                    SecurityQos = *v31;
                    v28 = 0;
                    goto LABEL_94;
                  }
                  goto LABEL_12;
                }
              }
              if ( v40 )
                goto LABEL_85;
            }
          }
          if ( ++v4 >= AccessState )
          {
LABEL_85:
            v36 = v39;
            goto LABEL_86;
          }
        }
      }
      SecurityQos = (char)SecurityContext[3].SecurityQos;
      v29 = SecurityContext[1].AccessState;
      v30 = BYTE3(SecurityContext->AccessState);
      v36 = BYTE4(SecurityContext->SecurityQos);
      if ( BYTE2(SecurityContext->SecurityQos) )
        break;
LABEL_94:
      LOBYTE(v8) = SecurityQos - 8;
      if ( (v8 & 0x5D) != 0 )
        break;
      v38 = BYTE3(SecurityContext->SecurityQos);
      if ( v38 == 1 || !v29 || !v30 )
      {
LABEL_55:
        if ( byte_140173441 < 0 )
        {
          if ( !v28 )
          {
            LowPart_high = 0;
            Flags = 0;
            v24 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v8,
            (_DWORD)SecurityContext,
            (unsigned int)&v45,
            (_DWORD)Irp,
            Irp->IoStatus.Status,
            v38,
            v36,
            v24,
            Flags,
            LowPart_high,
            (char)Irp);
        }
        break;
      }
      v21 = v29->OperationID.LowPart & 0x7F;
      if ( v21 == 114 || v21 == 115 )
      {
        v8 = (unsigned __int64)v29 + v30;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&v29->SecurityEvaluated > v8 )
        {
LABEL_53:
          if ( (_BYTE)SecurityContext )
            v28 = 1;
          goto LABEL_55;
        }
        Flags = BYTE2(v29->OperationID.LowPart);
        v24 = BYTE1(v29->OperationID.LowPart) & 0xF;
        LowPart_high = HIBYTE(v29->OperationID.LowPart);
      }
      else
      {
        v8 = (unsigned __int64)v29 + v30;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&v29->SecurityEvaluated > v8 )
          goto LABEL_53;
        v23 = (char *)&v29->Flags + 1;
        v24 = BYTE2(v29->OperationID.LowPart) & 0xF;
        v25 = v30;
        if ( (unsigned int)HIBYTE(v29->OperationID.HighPart) + 8 <= v30 )
          v25 = HIBYTE(v29->OperationID.HighPart) + 8;
        v8 = (unsigned __int64)v29 + v25;
        if ( (unsigned __int64)v23 > v8 )
          Flags = 0;
        else
          Flags = v29->Flags;
        if ( (unsigned __int64)&v29->Flags + 2 > v8 )
          LowPart_high = 0;
        else
          LowPart_high = *v23;
      }
      LOBYTE(SecurityContext) = 1;
      goto LABEL_53;
    case 0x1Bu:
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v20 = *Information;
          else
            v20 = 0;
          McTemplateK0pqd_EtwWriteTransfer(
            v20,
            (_DWORD)CurrentStackLocation,
            (unsigned int)&v45,
            (_DWORD)Irp,
            v20,
            Irp->IoStatus.Status);
        }
        break;
      }
      if ( (byte_140173442 & 0x20) != 0 )
      {
        v18 = &EventPnpRequestComplete;
        goto LABEL_29;
      }
      break;
  }
LABEL_12:
  IofCompleteRequest(Irp, 0);
  for ( i = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5008));
        i;
        i = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5008)) )
  {
    v13 = i - 129;
    if ( *((_BYTE *)&i[-2].Next + 9) )
    {
      Next = (IRP *)v13[128].Next;
      v13[128].Next = 0LL;
      *((_BYTE *)&v13[127].Next + 9) = 0;
      _interlockedbittestandset((volatile signed __int32 *)&v13[32], 7u);
      RaidUnitProcessSetDevicePowerIrp(&i[-129], Next);
      _interlockedbittestandreset((volatile signed __int32 *)&v13[32], 7u);
      v15 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v16 = *(_DWORD *)(v15 + *((_QWORD *)&v13[2].Next + 1));
      while ( (v16 & 1) == 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(v15 + *((_QWORD *)&v13[2].Next + 1)),
                v16 - 2,
                v16);
        if ( v17 == v16 )
          goto LABEL_26;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13[64].Next + 2, 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(&v13[32].Next + 1), 0, 0);
    }
    else if ( *((_BYTE *)&v13[127].Next + 8) )
    {
      v32 = *((unsigned int *)&v13[127].Next + 3);
      *((_BYTE *)&v13[127].Next + 8) = 0;
      StorPortUnitIdleState(&i[-129], 0LL, v32);
    }
LABEL_26:
    ;
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 336));
}
