/*
 * XREFs of RaUnitProtocolCommandIoctl @ 0x140046E3C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaGetProtocolCommandEffects @ 0x140091D7C (RaGetProtocolCommandEffects.c)
 *     RaValidateProtocolCommandIoctl @ 0x140092564 (RaValidateProtocolCommandIoctl.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitProtocolCommandIoctl(__int64 a1, IRP *a2)
{
  int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v5; // rdi
  int ProtocolCommandEffects; // r15d
  __int64 v8; // r8
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _IO_STACK_LOCATION *v11; // rdx
  int *Information; // rax
  void *v13; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  _ACCESS_STATE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char Flags; // si
  char LowPart_high; // r10
  char v20; // r12
  char *v21; // r12
  unsigned int AccessState; // ecx
  __int64 v23; // rax
  unsigned __int64 DesiredAccess; // r13
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r13
  char SecurityQos; // cl
  char v29; // al
  char v30; // r8
  char *v31; // r10
  unsigned int v32; // eax
  char v33; // [rsp+60h] [rbp-9h] BYREF
  char v34[3]; // [rsp+61h] [rbp-8h] BYREF
  int v35; // [rsp+64h] [rbp-5h]
  unsigned int v36; // [rsp+68h] [rbp-1h]
  __int128 v37; // [rsp+70h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  v33 = 0;
  v34[0] = 0;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    ProtocolCommandEffects = -1073741820;
LABEL_11:
    v5->IoStatus.Information = 0LL;
    goto LABEL_12;
  }
  if ( SHIDWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) < 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  ProtocolCommandEffects = RaValidateProtocolCommandIoctl(*(_QWORD *)(a1 + 8));
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  ProtocolCommandEffects = RaGetProtocolCommandEffects(*(_QWORD *)(a1 + 8), v5, &v33, v34);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  a2 = v5;
  if ( v33 )
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  LOBYTE(v8) = v34[0];
  ProtocolCommandEffects = RaidUnitSendSrbProtocolCommandSynchronously(a1, v5, v8);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
LABEL_12:
  v9 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v5->Tail.CompletionKey + 21) = -84;
  v5->IoStatus.Status = ProtocolCommandEffects;
  if ( v9 )
    goto LABEL_78;
  v37 = 0LL;
  IoGetActivityIdIrp(v5, &v37);
  v11 = v5->Tail.Overlay.CurrentStackLocation;
  if ( v11->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_78;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( v11->MajorFunction != 15 )
  {
    if ( v11->MajorFunction != 27 )
      goto LABEL_78;
    if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)v5->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v10, (_DWORD)v11, (unsigned int)&v37, (_DWORD)v5, v2, v5->IoStatus.Status);
      }
      goto LABEL_78;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_78;
    v13 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v37, v5, v5->IoStatus.Status);
    goto LABEL_78;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_78;
  SecurityContext = v11->Parameters.Create.SecurityContext;
  v15 = 0LL;
  v33 = 0;
  v16 = 0;
  v17 = 0;
  Flags = 0;
  LowPart_high = 0;
  v20 = 0;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    v21 = 0LL;
    v34[0] = 0;
    if ( SecurityContext->FullCreateOptions )
      goto LABEL_78;
    AccessState = (unsigned int)SecurityContext[2].AccessState;
    v23 = 0LL;
    v35 = 0;
    v36 = AccessState;
    if ( !AccessState )
      goto LABEL_78;
    while ( 1 )
    {
      v10 = *((unsigned int *)&SecurityContext[5].SecurityQos + v23);
      if ( (unsigned int)v10 >= 0x80 )
      {
        DesiredAccess = SecurityContext->DesiredAccess;
        if ( (unsigned int)v10 < (unsigned int)DesiredAccess )
        {
          v25 = (unsigned int)v10;
          v26 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v10) - 64;
          if ( v26 )
          {
            LODWORD(v10) = v26 - 1;
            if ( (_DWORD)v10 )
            {
              if ( (_DWORD)v10 == 1 )
              {
                LODWORD(v10) = v25 + 40;
                if ( v25 + 40 <= DesiredAccess )
                {
                  if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v25 + 4) )
                    v21 = (char *)&SecurityContext[1].AccessState + v25;
                  v15 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v25);
                  goto LABEL_50;
                }
              }
            }
            else
            {
              LODWORD(v10) = v25 + 56;
              if ( v25 + 56 <= DesiredAccess )
              {
                v34[0] = 1;
                if ( *((_BYTE *)&SecurityContext->AccessState + v25 + 2) )
                  v21 = (char *)&SecurityContext[1] + v25;
                v15 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v25);
                v16 = *((_BYTE *)&SecurityContext->AccessState + v25 + 1);
                v33 = *((_BYTE *)&SecurityContext->AccessState + v25);
              }
            }
          }
          else
          {
            LODWORD(v10) = v25 + 40;
            if ( v25 + 40 <= DesiredAccess )
            {
              if ( *((_BYTE *)&SecurityContext->AccessState + v25 + 2) )
                v21 = (char *)&SecurityContext[1] + v25;
              v15 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v25);
LABEL_50:
              v27 = *((_BYTE *)&SecurityContext->AccessState + v25);
              v16 = *((_BYTE *)&SecurityContext->AccessState + v25 + 1);
LABEL_44:
              if ( v21 )
              {
                SecurityQos = *v21;
                v20 = 0;
                goto LABEL_52;
              }
              goto LABEL_78;
            }
          }
          if ( v34[0] )
            goto LABEL_43;
        }
      }
      v23 = (unsigned int)(v35 + 1);
      v35 = v23;
      if ( (unsigned int)v23 >= v36 )
      {
LABEL_43:
        v27 = v33;
        goto LABEL_44;
      }
    }
  }
  SecurityQos = (char)SecurityContext[3].SecurityQos;
  v15 = SecurityContext[1].AccessState;
  v16 = BYTE3(SecurityContext->AccessState);
  v27 = BYTE4(SecurityContext->SecurityQos);
  if ( BYTE2(SecurityContext->SecurityQos) )
    goto LABEL_78;
LABEL_52:
  LOBYTE(v10) = SecurityQos - 8;
  if ( (v10 & 0x5D) == 0 )
  {
    if ( BYTE3(SecurityContext->SecurityQos) == 1 || !v15 || !v16 )
    {
LABEL_71:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          LowPart_high = 0;
          Flags = 0;
          v17 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v10,
          (_DWORD)SecurityContext,
          (unsigned int)&v37,
          (_DWORD)v5,
          v5->IoStatus.Status,
          BYTE3(SecurityContext->SecurityQos),
          v27,
          v17,
          Flags,
          LowPart_high,
          (char)v5);
      }
      goto LABEL_78;
    }
    v29 = v15->OperationID.LowPart & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)v15 + v16;
      v30 = 0;
      if ( (unsigned __int64)&v15->SecurityEvaluated > v10 )
        goto LABEL_69;
      Flags = BYTE2(v15->OperationID.LowPart);
      v17 = BYTE1(v15->OperationID.LowPart) & 0xF;
      LowPart_high = HIBYTE(v15->OperationID.LowPart);
    }
    else
    {
      v10 = (unsigned __int64)v15 + v16;
      v30 = 0;
      if ( (unsigned __int64)&v15->SecurityEvaluated > v10 )
        goto LABEL_69;
      v31 = (char *)&v15->Flags + 1;
      v17 = BYTE2(v15->OperationID.LowPart) & 0xF;
      v32 = v16;
      if ( (unsigned int)HIBYTE(v15->OperationID.HighPart) + 8 <= v16 )
        v32 = HIBYTE(v15->OperationID.HighPart) + 8;
      v10 = (unsigned __int64)v15 + v32;
      if ( (unsigned __int64)v31 <= v10 )
        Flags = v15->Flags;
      if ( (unsigned __int64)&v15->Flags + 2 > v10 )
        LowPart_high = 0;
      else
        LowPart_high = *v31;
    }
    v30 = 1;
LABEL_69:
    if ( v30 )
      v20 = 1;
    goto LABEL_71;
  }
LABEL_78:
  IofCompleteRequest(v5, 0);
  return ProtocolCommandEffects;
}
