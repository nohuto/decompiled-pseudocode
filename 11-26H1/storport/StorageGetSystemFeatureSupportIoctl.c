/*
 * XREFs of StorageGetSystemFeatureSupportIoctl @ 0x14001EBF0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorageGetSystemFeatureSupportIoctl(PIRP Irp)
{
  int v1; // ebx
  unsigned int v3; // r13d
  unsigned int Length; // ecx
  _IRP *MasterIrp; // rsi
  bool v6; // zf
  unsigned __int64 v7; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  _ACCESS_STATE *AccessState; // r9
  unsigned __int8 v12; // bp
  char v13; // si
  char Flags; // r11
  char LowPart_high; // r10
  char v16; // r14
  char *v17; // r14
  unsigned int v18; // r12d
  unsigned __int64 DesiredAccess; // r15
  __int64 v20; // r8
  int v21; // ecx
  char v22; // r15
  char SecurityQos; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  char v29; // [rsp+60h] [rbp-48h]
  char v30; // [rsp+61h] [rbp-47h]
  unsigned int v31; // [rsp+64h] [rbp-44h]
  __int128 v32; // [rsp+68h] [rbp-40h] BYREF

  LOBYTE(v1) = 0;
  v3 = 0;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  Irp->IoStatus.Information = 0LL;
  if ( MasterIrp )
  {
    if ( Length >= 0x40 )
    {
      memset_0(MasterIrp, 0, 0x40uLL);
      MasterIrp->MdlAddress = (_MDL *)((unsigned __int64)MasterIrp->MdlAddress | 1);
      *(_DWORD *)&MasterIrp->Type = 64;
      *(_DWORD *)(&MasterIrp->Size + 1) = 1;
      Irp->IoStatus.Information = 64LL;
    }
    else if ( Length >= 4 )
    {
      *(_DWORD *)&MasterIrp->Type = 64;
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v3 = -1073741789;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v3;
  if ( v6 )
    goto LABEL_73;
  v32 = 0LL;
  IoGetActivityIdIrp(Irp, &v32);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v7, &EventNonReadWriteRequestComplete, &v32, Irp, Irp->IoStatus.Status);
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction == 27 )
      {
        if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v32, Irp, Irp->IoStatus.Status);
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v1 = *Information;
          McTemplateK0pqd_EtwWriteTransfer(
            v7,
            (_DWORD)CurrentStackLocation,
            (unsigned int)&v32,
            (_DWORD)Irp,
            v1,
            Irp->IoStatus.Status);
        }
      }
      goto LABEL_73;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_73;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    AccessState = 0LL;
    v29 = 0;
    v12 = 0;
    v13 = 0;
    Flags = 0;
    LowPart_high = 0;
    v16 = 0;
    if ( BYTE2(SecurityContext->SecurityQos) != 40 )
    {
      SecurityQos = (char)SecurityContext[3].SecurityQos;
      AccessState = SecurityContext[1].AccessState;
      v12 = BYTE3(SecurityContext->AccessState);
      v22 = BYTE4(SecurityContext->SecurityQos);
      if ( BYTE2(SecurityContext->SecurityQos) )
        goto LABEL_73;
LABEL_48:
      LOBYTE(v7) = SecurityQos - 8;
      if ( (v7 & 0x5D) != 0 )
        goto LABEL_73;
      v24 = BYTE3(SecurityContext->SecurityQos);
      if ( v24 == 1 || !AccessState || !v12 )
        goto LABEL_67;
      v25 = AccessState->OperationID.LowPart & 0x7F;
      if ( v25 == 114 || v25 == 115 )
      {
        v7 = (unsigned __int64)AccessState + v12;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&AccessState->SecurityEvaluated > v7 )
          goto LABEL_65;
        Flags = BYTE2(AccessState->OperationID.LowPart);
        v13 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
        LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
      }
      else
      {
        v7 = (unsigned __int64)AccessState + v12;
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)&AccessState->SecurityEvaluated > v7 )
          goto LABEL_65;
        v26 = (char *)&AccessState->Flags + 1;
        v13 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
        v27 = v12;
        if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v12 )
          v27 = HIBYTE(AccessState->OperationID.HighPart) + 8;
        v7 = (unsigned __int64)AccessState + v27;
        if ( (unsigned __int64)v26 <= v7 )
          Flags = AccessState->Flags;
        if ( (unsigned __int64)&AccessState->Flags + 2 > v7 )
          LowPart_high = 0;
        else
          LowPart_high = *v26;
      }
      LOBYTE(SecurityContext) = 1;
LABEL_65:
      if ( (_BYTE)SecurityContext )
        v16 = 1;
LABEL_67:
      if ( byte_140173441 < 0 )
      {
        if ( !v16 )
        {
          LowPart_high = 0;
          Flags = 0;
          v13 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v7,
          (_DWORD)SecurityContext,
          (unsigned int)&v32,
          (_DWORD)Irp,
          Irp->IoStatus.Status,
          v24,
          v22,
          v13,
          Flags,
          LowPart_high,
          (char)Irp);
      }
      goto LABEL_73;
    }
    v17 = 0LL;
    v30 = 0;
    if ( !SecurityContext->FullCreateOptions )
    {
      v18 = 0;
      v31 = (unsigned int)SecurityContext[2].AccessState;
      if ( v31 )
      {
        do
        {
          v7 = *((unsigned int *)&SecurityContext[5].SecurityQos + v18);
          if ( (unsigned int)v7 >= 0x80 )
          {
            DesiredAccess = SecurityContext->DesiredAccess;
            if ( (unsigned int)v7 < (unsigned int)DesiredAccess )
            {
              v20 = (unsigned int)v7;
              v21 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v7) - 64;
              if ( v21 )
              {
                LODWORD(v7) = v21 - 1;
                if ( (_DWORD)v7 )
                {
                  if ( (_DWORD)v7 == 1 )
                  {
                    LODWORD(v7) = v20 + 40;
                    if ( v20 + 40 <= DesiredAccess )
                    {
                      if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v20 + 4) )
                        v17 = (char *)&SecurityContext[1].AccessState + v20;
                      AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v20);
LABEL_33:
                      v22 = *((_BYTE *)&SecurityContext->AccessState + v20);
                      v12 = *((_BYTE *)&SecurityContext->AccessState + v20 + 1);
                      goto LABEL_42;
                    }
                  }
                }
                else
                {
                  LODWORD(v7) = v20 + 56;
                  if ( v20 + 56 <= DesiredAccess )
                  {
                    v30 = 1;
                    if ( *((_BYTE *)&SecurityContext->AccessState + v20 + 2) )
                      v17 = (char *)&SecurityContext[1] + v20;
                    AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v20);
                    v12 = *((_BYTE *)&SecurityContext->AccessState + v20 + 1);
                    v29 = *((_BYTE *)&SecurityContext->AccessState + v20);
                  }
                }
              }
              else
              {
                LODWORD(v7) = v20 + 40;
                if ( v20 + 40 <= DesiredAccess )
                {
                  if ( *((_BYTE *)&SecurityContext->AccessState + v20 + 2) )
                    v17 = (char *)&SecurityContext[1] + v20;
                  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v20);
                  goto LABEL_33;
                }
              }
              if ( v30 )
                break;
            }
          }
          ++v18;
        }
        while ( v18 < v31 );
        v22 = v29;
LABEL_42:
        if ( v17 )
        {
          SecurityQos = *v17;
          v16 = 0;
          goto LABEL_48;
        }
      }
    }
  }
LABEL_73:
  IofCompleteRequest(Irp, 0);
  return v3;
}
