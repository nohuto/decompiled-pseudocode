/*
 * XREFs of RaidAdapterMFNDNameSpaceRead @ 0x14006367C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNameSpaceRead @ 0x14006E9A4 (StorLogMFNDNameSpaceRead.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceRead(__int64 a1, PIRP Irp)
{
  int v3; // ebx
  int v4; // r14d
  _IRP *MasterIrp; // rsi
  unsigned __int64 Length; // rbp
  __int64 v7; // rdx
  struct _MDL *v8; // r9
  int v9; // r13d
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  int *v12; // rdx
  int v13; // edx
  __int64 v14; // r8
  int v15; // r9d
  int MdlAddress_high; // ecx
  bool v17; // zf
  unsigned __int64 v18; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // bp
  char v25; // si
  char v26; // r11
  char v27; // r10
  char v28; // r14
  char *v29; // r14
  unsigned int v30; // r12d
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r15
  char v35; // cl
  char v36; // r8
  char v37; // al
  char *v38; // r10
  unsigned int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-A8h]
  __int64 v42; // [rsp+28h] [rbp-A0h]
  PMDL SourceMdl; // [rsp+30h] [rbp-98h]
  __int64 v44; // [rsp+38h] [rbp-90h]
  __int64 v45; // [rsp+40h] [rbp-88h]
  char v46; // [rsp+60h] [rbp-68h]
  char v47; // [rsp+61h] [rbp-67h]
  int v48; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+68h] [rbp-60h]
  GUID v50; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = a1;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v48 = 0;
  Irp->IoStatus.Information = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(v7 + 16) >= 0x20u )
    {
      if ( MasterIrp )
      {
        if ( MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
        {
          MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
          if ( (_WORD)MdlAddress_low )
          {
            IrpCount = MasterIrp->AssociatedIrp.IrpCount;
            if ( IrpCount )
            {
              if ( (_DWORD)Length && v8 )
              {
                v12 = &v48;
                LOBYTE(v12) = 1;
                v9 = StorMFNDNameSpaceReadWrite(
                       v4,
                       (int)v12,
                       MdlAddress_low,
                       *(_QWORD *)&MasterIrp->Flags,
                       IrpCount,
                       BYTE4(MasterIrp->MdlAddress) & 1,
                       v8,
                       Length,
                       (__int64)&v48);
                if ( v9 >= 0 )
                  Irp->IoStatus.Information = Length;
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
    v9 = -1073741811;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( MasterIrp )
  {
LABEL_15:
    v13 = LOWORD(MasterIrp->MdlAddress);
    v14 = *(_QWORD *)&MasterIrp->Flags;
    v15 = MasterIrp->AssociatedIrp.IrpCount;
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    goto LABEL_17;
  }
  v13 = -1;
  LODWORD(v14) = -1;
  v15 = -1;
  MdlAddress_high = -1;
LABEL_17:
  StorLogMFNDNameSpaceRead(v4, v13, v14, v15, MdlAddress_high, v48, v9);
  v17 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v9;
  if ( v17 )
    goto LABEL_83;
  v50 = 0LL;
  IoGetActivityIdIrp(Irp, &v50);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_83;
    LODWORD(v41) = Irp->IoStatus.Status;
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_83;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v42) = Irp->IoStatus.Status;
        LODWORD(v41) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v18, (__int64)CurrentStackLocation, &v50, Irp, v41, v42);
      }
      goto LABEL_83;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_83;
    v21 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v41) = Irp->IoStatus.Status;
LABEL_82:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v50, Irp, v41);
    goto LABEL_83;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_83;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v23 = 0LL;
  v46 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v35 = *(_BYTE *)(SecurityContext + 72);
    v23 = *(_BYTE **)(SecurityContext + 32);
    v24 = *(_BYTE *)(SecurityContext + 11);
    v34 = *(_BYTE *)(SecurityContext + 4);
    if ( *(_BYTE *)(SecurityContext + 2) )
      goto LABEL_83;
LABEL_57:
    LOBYTE(v18) = v35 - 8;
    if ( (v18 & 0x5D) != 0 )
      goto LABEL_83;
    v36 = *(_BYTE *)(SecurityContext + 3);
    if ( v36 == 1 || !v23 || !v24 )
      goto LABEL_76;
    v37 = *v23 & 0x7F;
    if ( v37 == 114 || v37 == 115 )
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_74;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_74;
      v38 = v23 + 13;
      v25 = v23[2] & 0xF;
      v39 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v39 = (unsigned __int8)v23[7] + 8;
      v18 = (unsigned __int64)&v23[v39];
      if ( (unsigned __int64)v38 <= v18 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) > v18 )
        v27 = 0;
      else
        v27 = *v38;
    }
    LOBYTE(SecurityContext) = 1;
LABEL_74:
    if ( (_BYTE)SecurityContext )
      v28 = 1;
LABEL_76:
    if ( byte_140173441 < 0 )
    {
      if ( !v28 )
      {
        v27 = 0;
        v26 = 0;
        v25 = 0;
      }
      LOBYTE(v45) = v26;
      LOBYTE(v44) = v25;
      LOBYTE(SourceMdl) = v34;
      LOBYTE(v42) = v36;
      LODWORD(v41) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, SecurityContext, &v50, Irp, v41, v42, SourceMdl, v44, v45, v27, Irp);
    }
    goto LABEL_83;
  }
  v29 = 0LL;
  v47 = 0;
  if ( !*(_DWORD *)(SecurityContext + 20) )
  {
    v30 = 0;
    v49 = *(_DWORD *)(SecurityContext + 56);
    if ( v49 )
    {
      do
      {
        v18 = *(unsigned int *)(SecurityContext + 4LL * v30 + 120);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v31 = *(unsigned int *)(SecurityContext + 16);
          if ( (unsigned int)v18 < (unsigned int)v31 )
          {
            v32 = (unsigned int)v18;
            v33 = *(_DWORD *)(v18 + SecurityContext) - 64;
            if ( v33 )
            {
              v18 = (unsigned int)(v33 - 1);
              if ( (_DWORD)v18 )
              {
                if ( (_DWORD)v18 == 1 )
                {
                  v18 = v32 + 40;
                  if ( v32 + 40 <= v31 )
                  {
                    if ( *(_DWORD *)(v32 + SecurityContext + 12) )
                      v29 = (char *)(v32 + SecurityContext + 32);
                    v23 = *(_BYTE **)(v32 + SecurityContext + 24);
LABEL_42:
                    v34 = *(_BYTE *)(v32 + SecurityContext + 8);
                    v24 = *(_BYTE *)(v32 + SecurityContext + 9);
                    goto LABEL_51;
                  }
                }
              }
              else
              {
                v18 = v32 + 56;
                if ( v32 + 56 <= v31 )
                {
                  v47 = 1;
                  if ( *(_BYTE *)(v32 + SecurityContext + 10) )
                    v29 = (char *)(v32 + SecurityContext + 24);
                  v23 = *(_BYTE **)(v32 + SecurityContext + 16);
                  v24 = *(_BYTE *)(v32 + SecurityContext + 9);
                  v46 = *(_BYTE *)(v32 + SecurityContext + 8);
                }
              }
            }
            else
            {
              v18 = v32 + 40;
              if ( v32 + 40 <= v31 )
              {
                if ( *(_BYTE *)(v32 + SecurityContext + 10) )
                  v29 = (char *)(v32 + SecurityContext + 24);
                v23 = *(_BYTE **)(v32 + SecurityContext + 16);
                goto LABEL_42;
              }
            }
            if ( v47 )
              break;
          }
        }
        ++v30;
      }
      while ( v30 < v49 );
      v34 = v46;
LABEL_51:
      if ( v29 )
      {
        v35 = *v29;
        v28 = 0;
        goto LABEL_57;
      }
    }
  }
LABEL_83:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
