/*
 * XREFs of RaidUnitSetPowerIrp @ 0x14003CC5C
 * Callers:
 *     RaUnitPowerIrp @ 0x14003C8D0 (RaUnitPowerIrp.c)
 * Callees:
 *     RaidUnitSetSystemPowerIrp @ 0x14003CFDC (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x14003D4FC (RaidUnitSetDevicePowerIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitSetPowerIrp(PVOID Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID v4; // r13
  unsigned int Options; // r14d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // ebx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  _IO_STACK_LOCATION *v12; // rdx
  void *v13; // rdx
  int *Information; // rax
  char v15; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char *v17; // r10
  char v18; // si
  unsigned int v19; // eax
  char Flags; // r11
  char LowPart_high; // r10
  char v22; // r14
  char v23; // r13
  _ACCESS_STATE *v24; // r9
  unsigned __int8 v25; // bp
  char *v26; // r14
  unsigned int v27; // r12d
  unsigned __int64 DesiredAccess; // r15
  __int64 v29; // r8
  int v30; // ecx
  char SecurityQos; // cl
  char v32; // r8
  char v33; // [rsp+60h] [rbp-68h]
  unsigned int AccessState; // [rsp+70h] [rbp-58h]
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = Context;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart <= 6 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        49LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        Context,
        Irp,
        Options);
    }
    if ( Options )
    {
      if ( Options != 1 )
      {
        v7 = -1073741823;
LABEL_7:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqDD(
            WPP_GLOBAL_Control->AttachedDevice,
            50LL,
            &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
            v4,
            Irp,
            Options,
            v7);
        }
        return v7;
      }
      v6 = RaidUnitSetDevicePowerIrp(v4, Irp);
    }
    else
    {
      v6 = RaidUnitSetSystemPowerIrp(v4, Irp);
    }
    v7 = v6;
    goto LABEL_7;
  }
  LOBYTE(v9) = 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  v10 = StorEtwLoggingEnabled == 0;
  Irp->IoStatus.Status = 0;
  if ( v10 )
    goto LABEL_16;
  v36 = 0LL;
  IoGetActivityIdIrp(Irp, &v36);
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v12->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_16;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_20;
  }
  if ( v12->MajorFunction != 15 )
  {
    if ( v12->MajorFunction != 27 )
      goto LABEL_16;
    if ( v12->MinorFunction == 7 && !v12->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v9 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v11, (_DWORD)v12, (unsigned int)&v36, (_DWORD)Irp, v9, Irp->IoStatus.Status);
      }
      goto LABEL_16;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_16;
    v13 = &EventPnpRequestComplete;
LABEL_20:
    McTemplateK0pd_EtwWriteTransfer(v11, v13, &v36, Irp, Irp->IoStatus.Status);
    goto LABEL_16;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_16;
  SecurityContext = v12->Parameters.Create.SecurityContext;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  v18 = 0;
  Flags = 0;
  LowPart_high = 0;
  v22 = 0;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    v26 = 0LL;
    v33 = 0;
    if ( SecurityContext->FullCreateOptions )
      goto LABEL_90;
    v27 = 0;
    AccessState = (unsigned int)SecurityContext[2].AccessState;
    if ( !AccessState )
      goto LABEL_90;
    while ( 1 )
    {
      v11 = *((unsigned int *)&SecurityContext[5].SecurityQos + v27);
      if ( (unsigned int)v11 >= 0x80 )
      {
        DesiredAccess = SecurityContext->DesiredAccess;
        if ( (unsigned int)v11 < (unsigned int)DesiredAccess )
        {
          v29 = (unsigned int)v11;
          v30 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v11) - 64;
          if ( v30 )
          {
            LODWORD(v11) = v30 - 1;
            if ( (_DWORD)v11 )
            {
              if ( (_DWORD)v11 == 1 )
              {
                LODWORD(v11) = v29 + 40;
                if ( v29 + 40 <= DesiredAccess )
                {
                  if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v29 + 4) )
                    v26 = (char *)&SecurityContext[1].AccessState + v29;
                  v24 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v29);
                  goto LABEL_82;
                }
              }
            }
            else
            {
              LODWORD(v11) = v29 + 56;
              if ( v29 + 56 <= DesiredAccess )
              {
                v33 = 1;
                if ( *((_BYTE *)&SecurityContext->AccessState + v29 + 2) )
                  v26 = (char *)&SecurityContext[1] + v29;
                v23 = *((_BYTE *)&SecurityContext->AccessState + v29);
                v24 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v29);
                v25 = *((_BYTE *)&SecurityContext->AccessState + v29 + 1);
              }
            }
          }
          else
          {
            LODWORD(v11) = v29 + 40;
            if ( v29 + 40 <= DesiredAccess )
            {
              if ( *((_BYTE *)&SecurityContext->AccessState + v29 + 2) )
                v26 = (char *)&SecurityContext[1] + v29;
              v24 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v29);
LABEL_82:
              v25 = *((_BYTE *)&SecurityContext->AccessState + v29 + 1);
              v23 = *((_BYTE *)&SecurityContext->AccessState + v29);
LABEL_83:
              if ( v26 )
              {
                SecurityQos = *v26;
                v22 = 0;
                goto LABEL_86;
              }
              goto LABEL_90;
            }
          }
          if ( v33 )
            goto LABEL_83;
        }
      }
      if ( ++v27 >= AccessState )
        goto LABEL_83;
    }
  }
  SecurityQos = (char)SecurityContext[3].SecurityQos;
  v24 = SecurityContext[1].AccessState;
  v25 = BYTE3(SecurityContext->AccessState);
  v23 = BYTE4(SecurityContext->SecurityQos);
  if ( BYTE2(SecurityContext->SecurityQos) )
    goto LABEL_90;
LABEL_86:
  LOBYTE(v11) = SecurityQos - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v32 = BYTE3(SecurityContext->SecurityQos);
    if ( v32 == 1 || !v24 || !v25 )
    {
LABEL_43:
      if ( byte_140173441 < 0 )
      {
        if ( !v22 )
        {
          LowPart_high = 0;
          Flags = 0;
          v18 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v11,
          (_DWORD)SecurityContext,
          (unsigned int)&v36,
          (_DWORD)Irp,
          Irp->IoStatus.Status,
          v32,
          v23,
          v18,
          Flags,
          LowPart_high,
          (char)Irp);
      }
      goto LABEL_90;
    }
    v15 = v24->OperationID.LowPart & 0x7F;
    if ( v15 == 114 || v15 == 115 )
    {
      v11 = (unsigned __int64)v24 + v25;
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)&v24->SecurityEvaluated > v11 )
      {
LABEL_41:
        if ( (_BYTE)SecurityContext )
          v22 = 1;
        goto LABEL_43;
      }
      Flags = BYTE2(v24->OperationID.LowPart);
      v18 = BYTE1(v24->OperationID.LowPart) & 0xF;
      LowPart_high = HIBYTE(v24->OperationID.LowPart);
    }
    else
    {
      v11 = (unsigned __int64)v24 + v25;
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)&v24->SecurityEvaluated > v11 )
        goto LABEL_41;
      v17 = (char *)&v24->Flags + 1;
      v18 = BYTE2(v24->OperationID.LowPart) & 0xF;
      v19 = v25;
      if ( (unsigned int)HIBYTE(v24->OperationID.HighPart) + 8 <= v25 )
        v19 = HIBYTE(v24->OperationID.HighPart) + 8;
      v11 = (unsigned __int64)v24 + v19;
      if ( (unsigned __int64)v17 <= v11 )
        Flags = v24->Flags;
      if ( (unsigned __int64)&v24->Flags + 2 > v11 )
        LowPart_high = 0;
      else
        LowPart_high = *v17;
    }
    LOBYTE(SecurityContext) = 1;
    goto LABEL_41;
  }
LABEL_90:
  v4 = Context;
LABEL_16:
  IofCompleteRequest(Irp, 0);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 48LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, v4, Irp);
  }
  return 0LL;
}
