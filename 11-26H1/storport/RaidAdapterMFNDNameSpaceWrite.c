/*
 * XREFs of RaidAdapterMFNDNameSpaceWrite @ 0x140063AF0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNameSpaceWrite @ 0x14006EC68 (StorLogMFNDNameSpaceWrite.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceWrite(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rsi
  int v4; // ebx
  int v5; // r15d
  unsigned int Length; // r14d
  unsigned int v7; // edx
  struct _MDL *v8; // r9
  __int16 v9; // r10
  unsigned int v10; // ebp
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  int v16; // r9d
  int MdlAddress_high; // eax
  bool v18; // zf
  unsigned __int64 v19; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 SecurityContext; // rdx
  char v24; // cl
  char v25; // r15
  _BYTE *v26; // r8
  unsigned __int8 v27; // r10
  char v28; // si
  char v29; // r14
  char v30; // r11
  int v31; // eax
  char *v32; // r12
  unsigned int v33; // r9d
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  __int64 v36; // r9
  int v37; // ecx
  unsigned int v38; // r9d
  char v39; // r12
  char v40; // al
  char *v41; // r11
  unsigned int v42; // eax
  __int64 v44; // [rsp+20h] [rbp-A8h]
  __int64 v45; // [rsp+28h] [rbp-A0h]
  PMDL SourceMdl; // [rsp+30h] [rbp-98h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  __int64 v48; // [rsp+40h] [rbp-88h]
  char v49; // [rsp+61h] [rbp-67h]
  int v50; // [rsp+64h] [rbp-64h] BYREF
  int v51; // [rsp+68h] [rbp-60h]
  int v52; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v53; // [rsp+70h] [rbp-58h]
  GUID v54; // [rsp+78h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0;
  v5 = a1;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v50 = 0;
  Irp->IoStatus.Information = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( v7 >= 0x20 )
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
              if ( Length && v8 )
              {
                v13 = StorMFNDNameSpaceReadWrite(
                        v5,
                        0,
                        MdlAddress_low,
                        *(_QWORD *)&MasterIrp->Flags,
                        IrpCount,
                        BYTE4(MasterIrp->MdlAddress) & 1,
                        v8,
                        Length,
                        (__int64)&v50);
                v9 = v50;
                v10 = v13;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
    v10 = -1073741811;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( !MasterIrp )
  {
    v14 = -1;
    LODWORD(v15) = -1;
    v16 = -1;
    MdlAddress_high = -1;
    goto LABEL_16;
  }
LABEL_14:
  v14 = LOWORD(MasterIrp->MdlAddress);
  v15 = *(_QWORD *)&MasterIrp->Flags;
  v16 = MasterIrp->AssociatedIrp.IrpCount;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
LABEL_16:
  StorLogMFNDNameSpaceWrite(v5, v14, v15, v16, MdlAddress_high, Length, v9, v10);
  v18 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v10;
  if ( v18 )
    goto LABEL_86;
  v54 = 0LL;
  IoGetActivityIdIrp(Irp, &v54);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_86;
    v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_85;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_86;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v4 = *Information;
        LODWORD(v45) = Irp->IoStatus.Status;
        LODWORD(v44) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v19, (__int64)CurrentStackLocation, &v54, Irp, v44, v45);
      }
      goto LABEL_86;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_86;
    v22 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_85:
    LODWORD(v44) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v54, Irp, v44);
    goto LABEL_86;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_86;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = *(unsigned __int8 *)(SecurityContext + 2);
  if ( (_BYTE)v31 != 40 )
  {
    v24 = *(_BYTE *)(SecurityContext + 72);
    v26 = *(_BYTE **)(SecurityContext + 32);
    v27 = *(_BYTE *)(SecurityContext + 11);
    v25 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_59;
  }
  v32 = 0LL;
  v52 = *(_DWORD *)(SecurityContext + 20);
  v49 = 0;
  if ( v52 )
    goto LABEL_86;
  v33 = *(_DWORD *)(SecurityContext + 56);
  v34 = 0LL;
  v51 = 0;
  v53 = v33;
  if ( !v33 )
    goto LABEL_58;
  while ( 1 )
  {
    v19 = *(unsigned int *)(SecurityContext + 4 * v34 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v35 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v19 < (unsigned int)v35 )
        break;
    }
LABEL_48:
    v34 = (unsigned int)(v51 + 1);
    v51 = v34;
    if ( (unsigned int)v34 >= v33 )
      goto LABEL_54;
  }
  v36 = (unsigned int)v19;
  v37 = *(_DWORD *)(v19 + SecurityContext) - 64;
  if ( v37 )
  {
    v19 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        v19 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + SecurityContext + 12) )
            v32 = (char *)(v36 + SecurityContext + 32);
          v26 = *(_BYTE **)(v36 + SecurityContext + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v19 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v36 + SecurityContext + 10) )
          v32 = (char *)(v36 + SecurityContext + 24);
        v25 = *(_BYTE *)(v36 + SecurityContext + 8);
        v26 = *(_BYTE **)(v36 + SecurityContext + 16);
        v27 = *(_BYTE *)(v36 + SecurityContext + 9);
      }
    }
    goto LABEL_46;
  }
  v19 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_46:
    if ( v49 )
      goto LABEL_54;
    v33 = v53;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v36 + SecurityContext + 10) )
    v32 = (char *)(v36 + SecurityContext + 24);
  v26 = *(_BYTE **)(v36 + SecurityContext + 16);
LABEL_53:
  v27 = *(_BYTE *)(v36 + SecurityContext + 9);
  v25 = *(_BYTE *)(v36 + SecurityContext + 8);
LABEL_54:
  if ( v32 )
  {
    v24 = *v32;
    v38 = v10;
    goto LABEL_60;
  }
  v24 = 0;
LABEL_58:
  v31 = v52;
LABEL_59:
  v38 = v10;
  if ( !v31 )
  {
LABEL_60:
    if ( ((v24 - 8) & 0x5D) == 0 )
    {
      v39 = *(_BYTE *)(SecurityContext + 3);
      if ( v39 == 1 || !v26 || !v27 )
        goto LABEL_78;
      v40 = *v26 & 0x7F;
      if ( v40 == 114 || v40 == 115 )
      {
        v19 = (unsigned __int64)&v26[v27];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v26 + 8) <= v19 )
        {
          v29 = v26[2];
          v28 = v26[1] & 0xF;
          v30 = v26[3];
          goto LABEL_76;
        }
      }
      else
      {
        v19 = (unsigned __int64)&v26[v27];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v26 + 8) <= v19 )
        {
          v41 = v26 + 13;
          v28 = v26[2] & 0xF;
          v42 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v42 = (unsigned __int8)v26[7] + 8;
          v19 = (unsigned __int64)&v26[v42];
          if ( (unsigned __int64)v41 <= v19 )
            v29 = v26[12];
          if ( (unsigned __int64)(v26 + 14) > v19 )
            v30 = 0;
          else
            v30 = *v41;
LABEL_76:
          LOBYTE(SecurityContext) = 1;
        }
      }
      LOBYTE(v19) = 1;
      if ( !(_BYTE)SecurityContext )
LABEL_78:
        LOBYTE(v19) = 0;
      if ( byte_140173441 < 0 )
      {
        v10 = v38;
        if ( !(_BYTE)v19 )
        {
          v30 = 0;
          v29 = 0;
          v28 = 0;
        }
        LOBYTE(v48) = v29;
        LOBYTE(v47) = v28;
        LOBYTE(SourceMdl) = v25;
        LOBYTE(v45) = v39;
        LODWORD(v44) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v19, SecurityContext, &v54, Irp, v44, v45, SourceMdl, v47, v48, v30, Irp);
      }
    }
  }
LABEL_86:
  IofCompleteRequest(Irp, 0);
  return v10;
}
