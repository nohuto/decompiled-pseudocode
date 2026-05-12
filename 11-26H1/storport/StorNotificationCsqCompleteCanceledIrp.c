/*
 * XREFs of StorNotificationCsqCompleteCanceledIrp @ 0x14012C750
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorNotificationCsqCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  unsigned int v2; // r15d
  void (__fastcall **p_CsqCompleteCanceledIrp)(_IO_CSQ *, _IRP *); // r13
  bool v5; // zf
  unsigned __int64 v6; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int *Information; // rcx
  __int64 v9; // rcx
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 SecurityContext; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r11
  char v15; // si
  char v16; // di
  char v17; // r10
  char v18; // bp
  char *v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  char v29; // [rsp+60h] [rbp-58h]
  unsigned int v30; // [rsp+64h] [rbp-54h]
  GUID v31; // [rsp+68h] [rbp-50h] BYREF

  if ( !Csq )
    return;
  v2 = 0;
  if ( !Irp )
    return;
  p_CsqCompleteCanceledIrp = &Csq[-2].CsqCompleteCanceledIrp;
  if ( Csq == (PIO_CSQ)80 )
    return;
  v5 = StorEtwLoggingEnabled == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = -1073741536;
  if ( v5 )
    goto LABEL_71;
  v31 = 0LL;
  IoGetActivityIdIrp(Irp, &v31);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_71;
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_71;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (unsigned int *)Irp->IoStatus.Information;
        if ( Information )
          v9 = *Information;
        else
          v9 = 0LL;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)CurrentStackLocation, &v31, Irp, v9, Irp->IoStatus.Status);
      }
      goto LABEL_71;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_71;
    v10 = &EventPnpRequestComplete;
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v6, v10, &v31, Irp, Irp->IoStatus.Status);
    goto LABEL_71;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_71;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v23 = *(_BYTE *)(SecurityContext + 72);
    v13 = *(_BYTE **)(SecurityContext + 32);
    v14 = *(_BYTE *)(SecurityContext + 11);
    v12 = *(_BYTE *)(SecurityContext + 4);
    if ( *(_BYTE *)(SecurityContext + 2) )
      goto LABEL_71;
LABEL_44:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_71;
    v24 = *(_BYTE *)(SecurityContext + 3);
    if ( v24 == 1 || !v13 || !v14 )
      goto LABEL_64;
    v25 = *v13 & 0x7F;
    if ( v25 == 114 || v25 == 115 )
    {
      v6 = (unsigned __int64)&v13[v14];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v13 + 8) > v6 )
        goto LABEL_62;
      v16 = v13[2];
      v15 = v13[1] & 0xF;
      v17 = v13[3];
    }
    else
    {
      v6 = (unsigned __int64)&v13[v14];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v13 + 8) > v6 )
        goto LABEL_62;
      v26 = v13 + 13;
      v15 = v13[2] & 0xF;
      v27 = v14;
      if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
        v27 = (unsigned __int8)v13[7] + 8;
      v6 = (unsigned __int64)&v13[v27];
      if ( (unsigned __int64)v26 > v6 )
        v16 = 0;
      else
        v16 = v13[12];
      if ( (unsigned __int64)(v13 + 14) > v6 )
        v17 = 0;
      else
        v17 = *v26;
    }
    LOBYTE(SecurityContext) = 1;
LABEL_62:
    if ( (_BYTE)SecurityContext )
      v18 = 1;
LABEL_64:
    if ( byte_140173441 < 0 )
    {
      if ( !v18 )
      {
        v17 = 0;
        v16 = 0;
        v15 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v6,
        SecurityContext,
        &v31,
        Irp,
        Irp->IoStatus.Status,
        v24,
        v12,
        v15,
        v16,
        v17,
        Irp);
    }
    goto LABEL_71;
  }
  v19 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(SecurityContext + 20) )
    goto LABEL_71;
  v30 = *(_DWORD *)(SecurityContext + 56);
  if ( !v30 )
    goto LABEL_71;
  while ( 1 )
  {
    v6 = *(unsigned int *)(SecurityContext + 4LL * v2 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v20 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v6 < (unsigned int)v20 )
        break;
    }
LABEL_37:
    if ( ++v2 >= v30 )
      goto LABEL_38;
  }
  v21 = (unsigned int)v6;
  v22 = *(_DWORD *)(v6 + SecurityContext) - 64;
  if ( v22 )
  {
    v6 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + SecurityContext + 12) )
            v19 = (char *)(v21 + SecurityContext + 32);
          v13 = *(_BYTE **)(v21 + SecurityContext + 24);
          goto LABEL_30;
        }
      }
    }
    else
    {
      v6 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v21 + SecurityContext + 10) )
          v19 = (char *)(v21 + SecurityContext + 24);
        v12 = *(_BYTE *)(v21 + SecurityContext + 8);
        v13 = *(_BYTE **)(v21 + SecurityContext + 16);
        v14 = *(_BYTE *)(v21 + SecurityContext + 9);
      }
    }
    goto LABEL_36;
  }
  v6 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_36:
    if ( v29 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v21 + SecurityContext + 10) )
    v19 = (char *)(v21 + SecurityContext + 24);
  v13 = *(_BYTE **)(v21 + SecurityContext + 16);
LABEL_30:
  v12 = *(_BYTE *)(v21 + SecurityContext + 8);
  v14 = *(_BYTE *)(v21 + SecurityContext + 9);
LABEL_38:
  if ( v19 )
  {
    v23 = *v19;
    v18 = 0;
    goto LABEL_44;
  }
LABEL_71:
  IofCompleteRequest(Irp, 0);
  if ( !_InterlockedCompareExchange16((volatile signed __int16 *)p_CsqCompleteCanceledIrp + 18, 0, 0) )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)p_CsqCompleteCanceledIrp[21]);
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, StorNotificationFreeCallerContextWorker, DelayedWorkQueue, p_CsqCompleteCanceledIrp);
  }
}
