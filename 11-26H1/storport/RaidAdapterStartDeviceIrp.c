/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x140035C2C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaForwardIrpSynchronous @ 0x1400372E8 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     StorLogStartAdapterFailure @ 0x140097CA8 (StorLogStartAdapterFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(PVOID Context, PIRP Irp)
{
  int v2; // edi
  ULONG v5; // eax
  __int64 Pool; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int started; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  _IO_STACK_LOCATION *v14; // rdx
  int *Information; // rax
  void *v16; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char SecurityQos; // cl
  char v19; // r15
  _ACCESS_STATE *AccessState; // r8
  unsigned __int8 v21; // r10
  char v22; // bp
  char Flags; // r14
  char LowPart_high; // r11
  int v25; // eax
  char *v26; // r12
  unsigned int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 DesiredAccess; // r13
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r9d
  char v33; // r12
  char v34; // al
  char *v35; // r11
  unsigned int v36; // eax
  char v38; // [rsp+61h] [rbp-67h]
  int v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+6Ch] [rbp-5Ch]
  __int128 v41; // [rsp+70h] [rbp-58h] BYREF

  LOBYTE(v2) = 0;
  if ( StorageAsyncStart )
  {
    v5 = IoSizeofWorkItem();
    Pool = RaidAllocatePool(64LL, v5 + 24LL, 1230463314LL, *((_QWORD *)Context + 1));
    v7 = (_QWORD *)Pool;
    if ( Pool )
    {
      v8 = Pool + 24;
      IoInitializeWorkItem(*((PVOID *)Context + 1), (PIO_WORKITEM)(Pool + 24));
      *v7 = v8;
      v7[1] = Irp;
      v7[2] = Context;
      started = 259;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidPnPAsyncStartComplete;
      v11[-1].Context = v7;
      v11[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*((PDEVICE_OBJECT *)Context + 3), Irp);
      return (unsigned int)started;
    }
  }
  started = RaForwardIrpSynchronous(*((_QWORD *)Context + 3), Irp);
  if ( started < 0 )
  {
    *((_DWORD *)Context + 1563) = 1;
LABEL_7:
    StorLogStartAdapterFailure(Context, (unsigned int)started);
    goto LABEL_8;
  }
  started = RaidAdapterStartDevice(Context);
  if ( started < 0 )
    goto LABEL_7;
LABEL_8:
  v12 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = started;
  if ( v12 )
    goto LABEL_78;
  v41 = 0LL;
  IoGetActivityIdIrp(Irp, &v41);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v14->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_78;
    v16 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( v14->MajorFunction != 15 )
  {
    if ( v14->MajorFunction != 27 )
      goto LABEL_78;
    if ( v14->MinorFunction == 7 && !v14->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v13, (_DWORD)v14, (unsigned int)&v41, (_DWORD)Irp, v2, Irp->IoStatus.Status);
      }
      goto LABEL_78;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_78;
    v16 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v41, Irp, Irp->IoStatus.Status);
    goto LABEL_78;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_78;
  SecurityContext = v14->Parameters.Create.SecurityContext;
  SecurityQos = 0;
  v19 = 0;
  AccessState = 0LL;
  v21 = 0;
  v22 = 0;
  Flags = 0;
  LowPart_high = 0;
  v25 = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)v25 != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v21 = BYTE3(SecurityContext->AccessState);
    v19 = BYTE4(SecurityContext->SecurityQos);
    goto LABEL_51;
  }
  v26 = 0LL;
  v38 = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_78;
  v27 = (unsigned int)SecurityContext[2].AccessState;
  v28 = 0LL;
  v39 = 0;
  v40 = v27;
  if ( !v27 )
    goto LABEL_50;
  while ( 1 )
  {
    v13 = *((unsigned int *)&SecurityContext[5].SecurityQos + v28);
    if ( (unsigned int)v13 >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)v13 < (unsigned int)DesiredAccess )
        break;
    }
LABEL_40:
    v28 = (unsigned int)(v39 + 1);
    v39 = v28;
    if ( (unsigned int)v28 >= v27 )
      goto LABEL_46;
  }
  v30 = (unsigned int)v13;
  v31 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v13) - 64;
  if ( v31 )
  {
    LODWORD(v13) = v31 - 1;
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        LODWORD(v13) = v30 + 40;
        if ( v30 + 40 <= DesiredAccess )
        {
          if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v30 + 4) )
            v26 = (char *)&SecurityContext[1].AccessState + v30;
          AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v30);
          goto LABEL_45;
        }
      }
    }
    else
    {
      LODWORD(v13) = v30 + 56;
      if ( v30 + 56 <= DesiredAccess )
      {
        v38 = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + v30 + 2) )
          v26 = (char *)&SecurityContext[1] + v30;
        v19 = *((_BYTE *)&SecurityContext->AccessState + v30);
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v30);
        v21 = *((_BYTE *)&SecurityContext->AccessState + v30 + 1);
      }
    }
    goto LABEL_38;
  }
  LODWORD(v13) = v30 + 40;
  if ( v30 + 40 > DesiredAccess )
  {
LABEL_38:
    if ( v38 )
      goto LABEL_46;
    v27 = v40;
    goto LABEL_40;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + v30 + 2) )
    v26 = (char *)&SecurityContext[1] + v30;
  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v30);
LABEL_45:
  v21 = *((_BYTE *)&SecurityContext->AccessState + v30 + 1);
  v19 = *((_BYTE *)&SecurityContext->AccessState + v30);
LABEL_46:
  if ( v26 )
  {
    SecurityQos = *v26;
    v32 = started;
    goto LABEL_52;
  }
  SecurityQos = 0;
LABEL_50:
  v25 = 0;
LABEL_51:
  v32 = started;
  if ( !v25 )
  {
LABEL_52:
    if ( ((SecurityQos - 8) & 0x5D) == 0 )
    {
      v33 = BYTE3(SecurityContext->SecurityQos);
      if ( v33 == 1 || !AccessState || !v21 )
        goto LABEL_70;
      v34 = AccessState->OperationID.LowPart & 0x7F;
      if ( v34 == 114 || v34 == 115 )
      {
        v13 = (unsigned __int64)AccessState + v21;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&AccessState->SecurityEvaluated <= v13 )
        {
          Flags = BYTE2(AccessState->OperationID.LowPart);
          v22 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
          goto LABEL_68;
        }
      }
      else
      {
        v13 = (unsigned __int64)AccessState + v21;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&AccessState->SecurityEvaluated <= v13 )
        {
          v35 = (char *)&AccessState->Flags + 1;
          v22 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v36 = v21;
          if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v21 )
            v36 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v13 = (unsigned __int64)AccessState + v36;
          if ( (unsigned __int64)v35 <= v13 )
            Flags = AccessState->Flags;
          if ( (unsigned __int64)&AccessState->Flags + 2 > v13 )
            LowPart_high = 0;
          else
            LowPart_high = *v35;
LABEL_68:
          LOBYTE(SecurityContext) = 1;
        }
      }
      LOBYTE(v13) = 1;
      if ( !(_BYTE)SecurityContext )
LABEL_70:
        LOBYTE(v13) = 0;
      if ( byte_140173441 < 0 )
      {
        started = v32;
        if ( !(_BYTE)v13 )
        {
          LowPart_high = 0;
          Flags = 0;
          v22 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v13,
          (_DWORD)SecurityContext,
          (unsigned int)&v41,
          (_DWORD)Irp,
          Irp->IoStatus.Status,
          v33,
          v19,
          v22,
          Flags,
          LowPart_high,
          (char)Irp);
      }
    }
  }
LABEL_78:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)started;
}
