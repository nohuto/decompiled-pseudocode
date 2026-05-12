/*
 * XREFs of NvmeNamespaceReinitializeMediaIoctl @ 0x14010C518
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceCleanupSanitizeContext @ 0x140102008 (NvmeNamespaceCleanupSanitizeContext.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceReinitializeMediaIoctl(__int64 Context, PIRP Irp)
{
  int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v6; // ebp
  unsigned int v7; // ebp
  _IRP *MasterIrp; // r14
  __int64 ExtendedCommand; // rax
  PIO_WORKITEM WorkItem; // rax
  int v11; // r8d
  _WORD *v12; // r10
  __int16 MdlAddress; // cx
  int v14; // ebp
  int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // r8d
  __int64 v22; // r9
  int v23; // ecx
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // ecx
  bool v28; // zf
  unsigned __int64 v29; // rcx
  _IO_STACK_LOCATION *v30; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 SecurityContext; // rdx
  char v34; // r13
  _BYTE *v35; // r9
  unsigned __int8 v36; // r14
  char v37; // r10
  char v38; // di
  char v39; // r11
  char v40; // r15
  char *v41; // r15
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  __int64 v44; // r8
  int v45; // ecx
  char v46; // cl
  char v47; // al
  char v48; // r8
  char *v49; // r11
  unsigned int v50; // eax
  char v52; // [rsp+60h] [rbp-68h]
  int v53; // [rsp+64h] [rbp-64h]
  unsigned int v54; // [rsp+68h] [rbp-60h]
  GUID v55; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 16) + 136LL) & 2) != 0 )
  {
    v7 = -1073741637;
    goto LABEL_50;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Context + 644), 1, 0) == 1 )
  {
    v7 = -1073740682;
    goto LABEL_50;
  }
  ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(Context + 16));
  *(_QWORD *)(Context + 616) = ExtendedCommand;
  if ( !ExtendedCommand
    || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8)), (*(_QWORD *)(Context + 632) = WorkItem) == 0LL) )
  {
    NvmeNamespaceCleanupSanitizeContext(Context);
    v7 = -1073741670;
    goto LABEL_47;
  }
  *(_WORD *)(Context + 640) = 0;
  *(_QWORD *)(Context + 624) = Irp;
  *(_BYTE *)(Context + 642) = 0;
  v11 = 1;
  v12 = *(_WORD **)(Context + 616);
  MdlAddress = 0;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MdlAddress = 0;
    if ( MasterIrp )
    {
      if ( *(_DWORD *)&MasterIrp->Type == 16 && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
      {
        MdlAddress = -1;
        if ( LODWORD(MasterIrp->MdlAddress) < 0xFFFF )
          MdlAddress = (__int16)MasterIrp->MdlAddress;
        *(_WORD *)(Context + 640) = MdlAddress;
        v6 = HIDWORD(MasterIrp->MdlAddress) & 0xF;
        if ( (HIDWORD(MasterIrp->MdlAddress) & 0x10) != 0 )
          v11 = 0;
      }
    }
  }
  if ( v6 )
  {
    v14 = v6 - 1;
    if ( !v14 )
    {
      if ( !MdlAddress )
        *(_WORD *)(Context + 640) = 1800;
      v15 = 2;
      goto LABEL_25;
    }
    if ( v14 != 1 )
    {
      v7 = -1073741637;
      goto LABEL_47;
    }
  }
  if ( !MdlAddress )
    *(_WORD *)(Context + 640) = 60;
  v15 = 4;
LABEL_25:
  *(_DWORD *)(*(_QWORD *)v12 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v12 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v12 + 4256LL) |= 0x20u;
  *(_QWORD *)(*(_QWORD *)v12 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v12 + 4216LL) = Context;
  *(_QWORD *)(*(_QWORD *)v12 + 4160LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v12 + 4248LL) = 0;
  v12[26] = *(_WORD *)(Context + 640);
  *(_QWORD *)(*(_QWORD *)v12 + 4200LL) = v12;
  *(_QWORD *)(*(_QWORD *)v12 + 4192LL) = NvmeNamespaceReinitializeMediaCompletion;
  v16 = *(_QWORD *)(Context + 16);
  v17 = *(_QWORD *)(v16 + 592);
  v18 = *(_DWORD *)(v17 + 328);
  if ( (v18 & 2) != 0 && v15 == 2
    || (v18 & 1) != 0 && v15 == 4 && (*(_DWORD *)(*(_QWORD *)(v16 + 1048) + 24LL) & 0x80000) == 0 )
  {
    v19 = *(_QWORD *)v12;
    v20 = *(_DWORD *)(*(_QWORD *)v12 + 4136LL) & 0xFFFFFFF8;
    *(_BYTE *)(v19 + 4096) = -124;
    *(_DWORD *)(v19 + 4140) = 0;
    *(_DWORD *)(v19 + 4136) = (8 * v11) & 0xFFFFFC0F | (v15 | v20) & 0xFFFFFC07;
LABEL_44:
    v7 = NvmeControllerProcessCommandSync(*(PVOID *)(Context + 16), (__int64)v12);
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(v17 + 256) & 2) != 0 && (*(_DWORD *)(v16 + 656) <= 1u || (*(_BYTE *)(v17 + 524) & 2) == 0) )
  {
    if ( v15 != 4 )
    {
      v21 = 1;
      goto LABEL_38;
    }
    if ( (*(_BYTE *)(v17 + 524) & 4) != 0 )
    {
      v21 = 2;
LABEL_38:
      v22 = *(_QWORD *)v12;
      v23 = *(_DWORD *)(Context + 56);
      v24 = *(_BYTE *)(*(_QWORD *)(Context + 176) + 26LL);
      v25 = *(_QWORD *)(v16 + 592);
      *(_BYTE *)(*(_QWORD *)v12 + 4096LL) = 0x80;
      if ( (*(_BYTE *)(v25 + 524) & 2) != 0 )
        v23 = -1;
      *(_DWORD *)(v22 + 4100) = v23;
      v26 = *(_DWORD *)(v22 + 4136) ^ ((unsigned __int8)*(_DWORD *)(v22 + 4136) ^ v24) & 0xF;
      if ( (v24 & 0x60) != 0 )
        v27 = v26 & 0xFFFFFFEF;
      else
        v27 = v26 | 0x10;
      *(_DWORD *)(v22 + 4136) = v27 & 0xFFFFF01F | (v21 << 9);
      goto LABEL_44;
    }
  }
  v7 = -1056964602;
LABEL_47:
  if ( *(_BYTE *)(Context + 642) )
    IoQueueWorkItemEx(
      *(PIO_WORKITEM *)(Context + 632),
      NvmeNamespaceReinitializeMediaRecoverWorker,
      DelayedWorkQueue,
      (PVOID)Context);
  else
    NvmeNamespaceCleanupSanitizeContext(Context);
LABEL_50:
  v28 = StorEtwLoggingEnabled == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v7;
  if ( v28 )
    goto LABEL_116;
  v55 = 0LL;
  IoGetActivityIdIrp(Irp, &v55);
  v30 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v30->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_116;
    v32 = &EventNonReadWriteRequestComplete;
    goto LABEL_115;
  }
  if ( v30->MajorFunction != 15 )
  {
    if ( v30->MajorFunction != 27 )
      goto LABEL_116;
    if ( v30->MinorFunction == 7 && !v30->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v29, (__int64)v30, &v55, Irp, v2, Irp->IoStatus.Status);
      }
      goto LABEL_116;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_116;
    v32 = &EventPnpRequestComplete;
LABEL_115:
    McTemplateK0pd_EtwWriteTransfer(v29, v32, &v55, Irp, Irp->IoStatus.Status);
    goto LABEL_116;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_116;
  SecurityContext = (__int64)v30->Parameters.Create.SecurityContext;
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v46 = *(_BYTE *)(SecurityContext + 72);
    v35 = *(_BYTE **)(SecurityContext + 32);
    v36 = *(_BYTE *)(SecurityContext + 11);
    v34 = *(_BYTE *)(SecurityContext + 4);
    if ( *(_BYTE *)(SecurityContext + 2) )
      goto LABEL_116;
LABEL_90:
    LOBYTE(v29) = v46 - 8;
    if ( (v29 & 0x5D) != 0 )
      goto LABEL_116;
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v35 || !v36 )
      goto LABEL_109;
    v47 = *v35 & 0x7F;
    if ( v47 == 114 || v47 == 115 )
    {
      v29 = (unsigned __int64)&v35[v36];
      v48 = 0;
      if ( (unsigned __int64)(v35 + 8) > v29 )
        goto LABEL_107;
      v38 = v35[2];
      v37 = v35[1] & 0xF;
      v39 = v35[3];
    }
    else
    {
      v29 = (unsigned __int64)&v35[v36];
      v48 = 0;
      if ( (unsigned __int64)(v35 + 8) > v29 )
        goto LABEL_107;
      v49 = v35 + 13;
      v37 = v35[2] & 0xF;
      v50 = v36;
      if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
        v50 = (unsigned __int8)v35[7] + 8;
      v29 = (unsigned __int64)&v35[v50];
      if ( (unsigned __int64)v49 <= v29 )
        v38 = v35[12];
      if ( (unsigned __int64)(v35 + 14) > v29 )
        v39 = 0;
      else
        v39 = *v49;
    }
    v48 = 1;
LABEL_107:
    if ( v48 )
      v40 = 1;
LABEL_109:
    if ( byte_140173441 < 0 )
    {
      if ( !v40 )
      {
        v39 = 0;
        v38 = 0;
        v37 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v29,
        SecurityContext,
        &v55,
        Irp,
        Irp->IoStatus.Status,
        *(_BYTE *)(SecurityContext + 3),
        v34,
        v37,
        v38,
        v39,
        Irp);
    }
    goto LABEL_116;
  }
  v41 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(SecurityContext + 20) )
    goto LABEL_116;
  v42 = 0LL;
  v53 = 0;
  v54 = *(_DWORD *)(SecurityContext + 56);
  if ( !v54 )
    goto LABEL_116;
  while ( 1 )
  {
    v29 = *(unsigned int *)(SecurityContext + 4 * v42 + 120);
    if ( (unsigned int)v29 >= 0x80 )
    {
      v43 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v29 < (unsigned int)v43 )
        break;
    }
LABEL_81:
    v42 = (unsigned int)(v53 + 1);
    v53 = v42;
    if ( (unsigned int)v42 >= v54 )
      goto LABEL_87;
  }
  v44 = (unsigned int)v29;
  v45 = *(_DWORD *)(v29 + SecurityContext) - 64;
  if ( v45 )
  {
    v29 = (unsigned int)(v45 - 1);
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 == 1 )
      {
        v29 = v44 + 40;
        if ( v44 + 40 <= v43 )
        {
          if ( *(_DWORD *)(v44 + SecurityContext + 12) )
            v41 = (char *)(v44 + SecurityContext + 32);
          v35 = *(_BYTE **)(v44 + SecurityContext + 24);
          goto LABEL_86;
        }
      }
    }
    else
    {
      v29 = v44 + 56;
      if ( v44 + 56 <= v43 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v44 + SecurityContext + 10) )
          v41 = (char *)(v44 + SecurityContext + 24);
        v34 = *(_BYTE *)(v44 + SecurityContext + 8);
        v35 = *(_BYTE **)(v44 + SecurityContext + 16);
        v36 = *(_BYTE *)(v44 + SecurityContext + 9);
      }
    }
    goto LABEL_80;
  }
  v29 = v44 + 40;
  if ( v44 + 40 > v43 )
  {
LABEL_80:
    if ( v52 )
      goto LABEL_87;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(v44 + SecurityContext + 10) )
    v41 = (char *)(v44 + SecurityContext + 24);
  v35 = *(_BYTE **)(v44 + SecurityContext + 16);
LABEL_86:
  v36 = *(_BYTE *)(v44 + SecurityContext + 9);
  v34 = *(_BYTE *)(v44 + SecurityContext + 8);
LABEL_87:
  if ( v41 )
  {
    v46 = *v41;
    v40 = 0;
    goto LABEL_90;
  }
LABEL_116:
  IofCompleteRequest(Irp, 0);
  return v7;
}
