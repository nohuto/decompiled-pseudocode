/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x14003C390
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorASyncScsiPassThroughCompletion(PIRP Irp)
{
  int v1; // ebx
  unsigned __int64 v3; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  void *v5; // rdx
  int *Information; // rax
  char v7; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char *v9; // r10
  char v10; // r11
  unsigned int v11; // eax
  char Flags; // si
  char LowPart_high; // r10
  char v14; // r14
  char v15; // r13
  _ACCESS_STATE *AccessState; // r9
  unsigned __int8 v17; // bp
  char *v18; // r14
  unsigned int v19; // r12d
  unsigned __int64 DesiredAccess; // r15
  __int64 v21; // r8
  int v22; // ecx
  char SecurityQos; // cl
  char v24; // r8
  char v25; // [rsp+60h] [rbp-48h]
  unsigned int v26; // [rsp+64h] [rbp-44h]
  __int128 v27; // [rsp+68h] [rbp-40h] BYREF

  LOBYTE(v1) = 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( !StorEtwLoggingEnabled )
    goto LABEL_5;
  v27 = 0LL;
  IoGetActivityIdIrp(Irp, &v27);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_5;
    v5 = &EventNonReadWriteRequestComplete;
    goto LABEL_8;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_5;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v1 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          v3,
          (_DWORD)CurrentStackLocation,
          (unsigned int)&v27,
          (_DWORD)Irp,
          v1,
          Irp->IoStatus.Status);
      }
      goto LABEL_5;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_5;
    v5 = &EventPnpRequestComplete;
LABEL_8:
    McTemplateK0pd_EtwWriteTransfer(v3, v5, &v27, Irp, Irp->IoStatus.Status);
    goto LABEL_5;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_5;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v15 = 0;
  AccessState = 0LL;
  v17 = 0;
  v10 = 0;
  Flags = 0;
  LowPart_high = 0;
  v14 = 0;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v17 = BYTE3(SecurityContext->AccessState);
    v15 = BYTE4(SecurityContext->SecurityQos);
    if ( BYTE2(SecurityContext->SecurityQos) )
      goto LABEL_5;
LABEL_66:
    LOBYTE(v3) = SecurityQos - 8;
    if ( (v3 & 0x5D) != 0 )
      goto LABEL_5;
    v24 = BYTE3(SecurityContext->SecurityQos);
    if ( v24 == 1 || !AccessState || !v17 )
      goto LABEL_31;
    v7 = AccessState->OperationID.LowPart & 0x7F;
    if ( v7 == 114 || v7 == 115 )
    {
      v3 = (unsigned __int64)AccessState + v17;
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)&AccessState->SecurityEvaluated > v3 )
      {
LABEL_29:
        if ( (_BYTE)SecurityContext )
          v14 = 1;
LABEL_31:
        if ( byte_140173441 < 0 )
        {
          if ( !v14 )
          {
            LowPart_high = 0;
            Flags = 0;
            v10 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v3,
            (_DWORD)SecurityContext,
            (unsigned int)&v27,
            (_DWORD)Irp,
            Irp->IoStatus.Status,
            v24,
            v15,
            v10,
            Flags,
            LowPart_high,
            (char)Irp);
        }
        goto LABEL_5;
      }
      Flags = BYTE2(AccessState->OperationID.LowPart);
      v10 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
      LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
    }
    else
    {
      v3 = (unsigned __int64)AccessState + v17;
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)&AccessState->SecurityEvaluated > v3 )
        goto LABEL_29;
      v9 = (char *)&AccessState->Flags + 1;
      v10 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
      v11 = v17;
      if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v17 )
        v11 = HIBYTE(AccessState->OperationID.HighPart) + 8;
      v3 = (unsigned __int64)AccessState + v11;
      if ( (unsigned __int64)v9 <= v3 )
        Flags = AccessState->Flags;
      if ( (unsigned __int64)&AccessState->Flags + 2 > v3 )
        LowPart_high = 0;
      else
        LowPart_high = *v9;
    }
    LOBYTE(SecurityContext) = 1;
    goto LABEL_29;
  }
  v18 = 0LL;
  v25 = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_5;
  v19 = 0;
  v26 = (unsigned int)SecurityContext[2].AccessState;
  if ( !v26 )
    goto LABEL_5;
  while ( 1 )
  {
    v3 = *((unsigned int *)&SecurityContext[5].SecurityQos + v19);
    if ( (unsigned int)v3 >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)v3 < (unsigned int)DesiredAccess )
        break;
    }
LABEL_56:
    if ( ++v19 >= v26 )
      goto LABEL_63;
  }
  v21 = (unsigned int)v3;
  v22 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v3) - 64;
  if ( v22 )
  {
    LODWORD(v3) = v22 - 1;
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 == 1 )
      {
        LODWORD(v3) = v21 + 40;
        if ( v21 + 40 <= DesiredAccess )
        {
          if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v21 + 4) )
            v18 = (char *)&SecurityContext[1].AccessState + v21;
          AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v21);
          goto LABEL_62;
        }
      }
    }
    else
    {
      LODWORD(v3) = v21 + 56;
      if ( v21 + 56 <= DesiredAccess )
      {
        v25 = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + v21 + 2) )
          v18 = (char *)&SecurityContext[1] + v21;
        v15 = *((_BYTE *)&SecurityContext->AccessState + v21);
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v21);
        v17 = *((_BYTE *)&SecurityContext->AccessState + v21 + 1);
      }
    }
    goto LABEL_55;
  }
  LODWORD(v3) = v21 + 40;
  if ( v21 + 40 > DesiredAccess )
  {
LABEL_55:
    if ( v25 )
      goto LABEL_63;
    goto LABEL_56;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + v21 + 2) )
    v18 = (char *)&SecurityContext[1] + v21;
  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v21);
LABEL_62:
  v17 = *((_BYTE *)&SecurityContext->AccessState + v21 + 1);
  v15 = *((_BYTE *)&SecurityContext->AccessState + v21);
LABEL_63:
  if ( v18 )
  {
    SecurityQos = *v18;
    v14 = 0;
    goto LABEL_66;
  }
LABEL_5:
  IofCompleteRequest(Irp, 0);
}
