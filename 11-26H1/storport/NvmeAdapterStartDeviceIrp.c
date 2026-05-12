/*
 * XREFs of NvmeAdapterStartDeviceIrp @ 0x1400DE2A4
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaForwardIrpSynchronous @ 0x1400372E8 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400D1C28 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterStartDeviceIrp(__int64 Context, PIRP Irp)
{
  int v2; // edi
  ULONG v5; // eax
  __int64 Pool; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int started; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // rcx
  _IO_STACK_LOCATION *v15; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 SecurityContext; // rdx
  char v19; // cl
  char v20; // r15
  _BYTE *v21; // r8
  unsigned __int8 v22; // r10
  char v23; // bp
  char v24; // r14
  char v25; // r11
  int v26; // eax
  char *v27; // r12
  unsigned int v28; // r9d
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // r9
  int v32; // ecx
  int v33; // r9d
  char v34; // r12
  char v35; // al
  char *v36; // r11
  unsigned int v37; // eax
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+30h] [rbp-98h]
  __int64 v42; // [rsp+38h] [rbp-90h]
  char v43; // [rsp+61h] [rbp-67h]
  int v44; // [rsp+64h] [rbp-64h]
  unsigned int v45; // [rsp+6Ch] [rbp-5Ch]
  GUID v46; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( StorageAsyncStart )
  {
    v5 = IoSizeofWorkItem();
    Pool = RaidAllocatePool(64LL, v5 + 24LL, 1230463314LL, *(_QWORD *)(Context + 8));
    v7 = (_QWORD *)Pool;
    if ( Pool )
    {
      v8 = Pool + 24;
      IoInitializeWorkItem(*(PVOID *)(Context + 8), (PIO_WORKITEM)(Pool + 24));
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
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&NvmePnpAsyncStartComplete;
      v11[-1].Context = v7;
      v11[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(Context + 24), Irp);
      return (unsigned int)started;
    }
  }
  started = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
  if ( started < 0 )
  {
    *(_DWORD *)(Context + 1028) = 1;
    goto LABEL_7;
  }
  started = NvmeAdapterStartDevice(Context, (__int64)Irp);
  if ( started < 0 )
  {
LABEL_7:
    if ( (byte_14017344A & 1) != 0 )
      McTemplateK0qjzdq_EtwWriteTransfer(
        Context + 1048,
        &EventNVMeAdapterStartFailure,
        v12,
        *(_DWORD *)(Context + 56),
        Context + 1048,
        *(const wchar_t **)(Context + 1032),
        started,
        *(_DWORD *)(Context + 1028));
  }
  v13 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = started;
  if ( v13 )
    goto LABEL_79;
  v46 = 0LL;
  IoGetActivityIdIrp(Irp, &v46);
  v15 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v15->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_79;
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( v15->MajorFunction != 15 )
  {
    if ( v15->MajorFunction != 27 )
      goto LABEL_79;
    if ( v15->MinorFunction == 7 && !v15->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v40) = Irp->IoStatus.Status;
        LODWORD(v39) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v14, (__int64)v15, &v46, Irp, v39, v40);
      }
      goto LABEL_79;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_79;
    v17 = &EventPnpRequestComplete;
LABEL_78:
    LODWORD(v39) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v46, Irp, v39);
    goto LABEL_79;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_79;
  SecurityContext = (__int64)v15->Parameters.Create.SecurityContext;
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = *(unsigned __int8 *)(SecurityContext + 2);
  if ( (_BYTE)v26 != 40 )
  {
    v19 = *(_BYTE *)(SecurityContext + 72);
    v21 = *(_BYTE **)(SecurityContext + 32);
    v22 = *(_BYTE *)(SecurityContext + 11);
    v20 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_52;
  }
  v27 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(SecurityContext + 20) )
    goto LABEL_79;
  v28 = *(_DWORD *)(SecurityContext + 56);
  v29 = 0LL;
  v44 = 0;
  v45 = v28;
  if ( !v28 )
    goto LABEL_51;
  while ( 1 )
  {
    v14 = *(unsigned int *)(SecurityContext + 4 * v29 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v30 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v14 < (unsigned int)v30 )
        break;
    }
LABEL_41:
    v29 = (unsigned int)(v44 + 1);
    v44 = v29;
    if ( (unsigned int)v29 >= v28 )
      goto LABEL_47;
  }
  v31 = (unsigned int)v14;
  v32 = *(_DWORD *)(v14 + SecurityContext) - 64;
  if ( v32 )
  {
    v14 = (unsigned int)(v32 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v31 + 40;
        if ( v31 + 40 <= v30 )
        {
          if ( *(_DWORD *)(v31 + SecurityContext + 12) )
            v27 = (char *)(v31 + SecurityContext + 32);
          v21 = *(_BYTE **)(v31 + SecurityContext + 24);
          goto LABEL_46;
        }
      }
    }
    else
    {
      v14 = v31 + 56;
      if ( v31 + 56 <= v30 )
      {
        v43 = 1;
        if ( *(_BYTE *)(v31 + SecurityContext + 10) )
          v27 = (char *)(v31 + SecurityContext + 24);
        v20 = *(_BYTE *)(v31 + SecurityContext + 8);
        v21 = *(_BYTE **)(v31 + SecurityContext + 16);
        v22 = *(_BYTE *)(v31 + SecurityContext + 9);
      }
    }
    goto LABEL_39;
  }
  v14 = v31 + 40;
  if ( v31 + 40 > v30 )
  {
LABEL_39:
    if ( v43 )
      goto LABEL_47;
    v28 = v45;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v31 + SecurityContext + 10) )
    v27 = (char *)(v31 + SecurityContext + 24);
  v21 = *(_BYTE **)(v31 + SecurityContext + 16);
LABEL_46:
  v22 = *(_BYTE *)(v31 + SecurityContext + 9);
  v20 = *(_BYTE *)(v31 + SecurityContext + 8);
LABEL_47:
  if ( v27 )
  {
    v19 = *v27;
    v33 = started;
    goto LABEL_53;
  }
  v19 = 0;
LABEL_51:
  v26 = 0;
LABEL_52:
  v33 = started;
  if ( !v26 )
  {
LABEL_53:
    if ( ((v19 - 8) & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(SecurityContext + 3);
      if ( v34 == 1 || !v21 || !v22 )
        goto LABEL_71;
      v35 = *v21 & 0x7F;
      if ( v35 == 114 || v35 == 115 )
      {
        v14 = (unsigned __int64)&v21[v22];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v21 + 8) <= v14 )
        {
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
          goto LABEL_69;
        }
      }
      else
      {
        v14 = (unsigned __int64)&v21[v22];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v21 + 8) <= v14 )
        {
          v36 = v21 + 13;
          v23 = v21[2] & 0xF;
          v37 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v37 = (unsigned __int8)v21[7] + 8;
          v14 = (unsigned __int64)&v21[v37];
          if ( (unsigned __int64)v36 <= v14 )
            v24 = v21[12];
          if ( (unsigned __int64)(v21 + 14) > v14 )
            v25 = 0;
          else
            v25 = *v36;
LABEL_69:
          LOBYTE(SecurityContext) = 1;
        }
      }
      LOBYTE(v14) = 1;
      if ( !(_BYTE)SecurityContext )
LABEL_71:
        LOBYTE(v14) = 0;
      if ( byte_140173441 < 0 )
      {
        started = v33;
        if ( !(_BYTE)v14 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        LOBYTE(v42) = v23;
        LOBYTE(v41) = v20;
        LOBYTE(v40) = v34;
        LODWORD(v39) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, SecurityContext, &v46, Irp, v39, v40, v41, v42, v24, v25, Irp);
      }
    }
  }
LABEL_79:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)started;
}
