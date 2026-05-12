/*
 * XREFs of StorProcessNotification @ 0x1401AFFBC
 * Callers:
 *     StorProcessNotificationWorker @ 0x1401B07A0 (StorProcessNotificationWorker.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorGetEventNotificationContext @ 0x14012C6D0 (StorGetEventNotificationContext.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall StorProcessNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 *v6; // r14
  PIRP v7; // rax
  PIRP v8; // rbx
  _IRP *MasterIrp; // rdi
  unsigned int v10; // edx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  unsigned __int64 CurrentStackLocation; // rdx
  unsigned int *Information; // rax
  __int64 v15; // rcx
  _BYTE *v16; // r9
  unsigned __int8 v17; // r11
  char v18; // r10
  char v19; // r12
  char v20; // r14
  char v21; // di
  char *v22; // rdi
  char v23; // r15
  unsigned int v24; // esi
  unsigned int v25; // r13d
  unsigned __int64 v26; // r10
  __int64 v27; // r8
  int v28; // ecx
  char v29; // si
  char v30; // cl
  char v31; // r8
  char v32; // al
  unsigned int v33; // eax
  const EVENT_DESCRIPTOR *v34; // rdx
  unsigned int v35; // eax
  _IO_STACK_LOCATION *v36; // r8
  unsigned int *v37; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r8
  _ACCESS_STATE *v39; // r9
  unsigned __int8 v40; // r11
  char v41; // r15
  char Flags; // r12
  char LowPart_high; // r14
  char v44; // di
  char *v45; // rdi
  __int64 v46; // rsi
  unsigned __int64 DesiredAccess; // r10
  int v48; // ecx
  char v49; // r10
  char SecurityQos; // cl
  char v51; // al
  unsigned int v52; // eax
  __int64 v53; // [rsp+20h] [rbp-69h]
  __int64 v54; // [rsp+28h] [rbp-61h]
  __int64 v55; // [rsp+30h] [rbp-59h]
  __int64 v56; // [rsp+38h] [rbp-51h]
  __int64 v57; // [rsp+40h] [rbp-49h]
  __int64 v58; // [rsp+48h] [rbp-41h]
  PIRP v59; // [rsp+50h] [rbp-39h]
  char v60; // [rsp+60h] [rbp-29h]
  char v61; // [rsp+60h] [rbp-29h]
  __int64 *v62; // [rsp+68h] [rbp-21h]
  unsigned int AccessState; // [rsp+78h] [rbp-11h]
  __int64 EventNotificationContext; // [rsp+88h] [rbp-1h]
  GUID v66; // [rsp+90h] [rbp+7h] BYREF

  if ( !a2 )
    return;
  v2 = a2;
  v3 = 0;
  EventNotificationContext = StorGetEventNotificationContext(a1);
  v4 = EventNotificationContext;
  if ( !EventNotificationContext )
    return;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(EventNotificationContext + 24), 1u);
  v5 = EventNotificationContext + 8;
  v6 = *(__int64 **)(EventNotificationContext + 8);
  v62 = v6;
  if ( v6 == (__int64 *)(EventNotificationContext + 8) )
    goto LABEL_149;
  do
  {
    if ( (v6[4] & 1) != 0 && ((v6[6] & *(_QWORD *)(v2 + 8)) != 0 || (*(_QWORD *)(v2 + 16) & v6[7]) != 0) )
    {
      if ( *((__int16 *)v6 + 18) > 0 )
      {
        v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 10), 0LL);
        v8 = v7;
        if ( !v7 )
          goto LABEL_147;
        MasterIrp = v7->AssociatedIrp.MasterIrp;
        if ( *(_DWORD *)(v2 + 32) )
        {
          v10 = (unsigned __int16)(*(_WORD *)(v2 + 32) + 40);
          if ( v7->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < v10 )
          {
            v11 = StorEtwLoggingEnabled == 0;
            *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
            v7->IoStatus.Status = -1073741789;
            if ( v11 )
              goto LABEL_74;
            v66 = 0LL;
            IoGetActivityIdIrp(v7, &v66);
            CurrentStackLocation = (unsigned __int64)v8->Tail.Overlay.CurrentStackLocation;
            if ( *(_BYTE *)CurrentStackLocation != 14 )
            {
              if ( *(_BYTE *)CurrentStackLocation != 15 )
              {
                if ( *(_BYTE *)CurrentStackLocation != 27 )
                  goto LABEL_74;
                if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
                {
                  if ( (byte_140173442 & 0x40) != 0 )
                  {
                    Information = (unsigned int *)v8->IoStatus.Information;
                    if ( Information )
                    {
                      v15 = *Information;
LABEL_90:
                      LODWORD(v54) = v8->IoStatus.Status;
                      LODWORD(v53) = v15;
                      McTemplateK0pqd_EtwWriteTransfer(v15, CurrentStackLocation, &v66, v8, v53, v54);
                      goto LABEL_74;
                    }
                    goto LABEL_89;
                  }
                  goto LABEL_74;
                }
LABEL_91:
                if ( (byte_140173442 & 0x20) == 0 )
                  goto LABEL_74;
                v34 = &EventPnpRequestComplete;
                goto LABEL_93;
              }
              if ( byte_140173441 >= 0 )
                goto LABEL_74;
              CurrentStackLocation = *(_QWORD *)(CurrentStackLocation + 8);
              v16 = 0LL;
              v60 = 0;
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 0;
              v21 = 0;
              if ( *(_BYTE *)(CurrentStackLocation + 2) == 40 )
              {
                v22 = 0LL;
                v23 = 0;
                if ( *(_DWORD *)(CurrentStackLocation + 20) )
                  goto LABEL_73;
                v24 = 0;
                v25 = *(_DWORD *)(CurrentStackLocation + 56);
                if ( !v25 )
                  goto LABEL_73;
                do
                {
                  v12 = *(unsigned int *)(CurrentStackLocation + 4LL * v24 + 120);
                  if ( (unsigned int)v12 >= 0x80 )
                  {
                    v26 = *(unsigned int *)(CurrentStackLocation + 16);
                    if ( (unsigned int)v12 < (unsigned int)v26 )
                    {
                      v27 = (unsigned int)v12;
                      v28 = *(_DWORD *)(v12 + CurrentStackLocation) - 64;
                      if ( v28 )
                      {
                        v12 = (unsigned int)(v28 - 1);
                        if ( (_DWORD)v12 )
                        {
                          if ( (_DWORD)v12 == 1 )
                          {
                            v12 = v27 + 40;
                            if ( v27 + 40 <= v26 )
                            {
                              if ( *(_DWORD *)(v27 + CurrentStackLocation + 12) )
                                v22 = (char *)(v27 + CurrentStackLocation + 32);
                              v16 = *(_BYTE **)(v27 + CurrentStackLocation + 24);
LABEL_33:
                              v29 = *(_BYTE *)(v27 + CurrentStackLocation + 8);
                              v17 = *(_BYTE *)(v27 + CurrentStackLocation + 9);
                              goto LABEL_42;
                            }
                          }
                        }
                        else
                        {
                          v12 = v27 + 56;
                          if ( v27 + 56 <= v26 )
                          {
                            v23 = 1;
                            if ( *(_BYTE *)(v27 + CurrentStackLocation + 10) )
                              v22 = (char *)(v27 + CurrentStackLocation + 24);
                            v16 = *(_BYTE **)(v27 + CurrentStackLocation + 16);
                            v17 = *(_BYTE *)(v27 + CurrentStackLocation + 9);
                            v60 = *(_BYTE *)(v27 + CurrentStackLocation + 8);
                          }
                        }
                      }
                      else
                      {
                        v12 = v27 + 40;
                        if ( v27 + 40 <= v26 )
                        {
                          if ( *(_BYTE *)(v27 + CurrentStackLocation + 10) )
                            v22 = (char *)(v27 + CurrentStackLocation + 24);
                          v16 = *(_BYTE **)(v27 + CurrentStackLocation + 16);
                          goto LABEL_33;
                        }
                      }
                      if ( v23 )
                        break;
                    }
                  }
                  ++v24;
                }
                while ( v24 < v25 );
                v29 = v60;
LABEL_42:
                if ( !v22 )
                  goto LABEL_73;
                v30 = *v22;
                v18 = 0;
                v21 = 0;
              }
              else
              {
                v30 = *(_BYTE *)(CurrentStackLocation + 72);
                v16 = *(_BYTE **)(CurrentStackLocation + 32);
                v17 = *(_BYTE *)(CurrentStackLocation + 11);
                v29 = *(_BYTE *)(CurrentStackLocation + 4);
                if ( *(_BYTE *)(CurrentStackLocation + 2) )
                  goto LABEL_73;
              }
              LOBYTE(v12) = v30 - 8;
              if ( (v12 & 0x5D) != 0 )
                goto LABEL_73;
              v31 = *(_BYTE *)(CurrentStackLocation + 3);
              if ( v31 == 1 || !v16 || !v17 )
              {
LABEL_68:
                if ( byte_140173441 < 0 )
                {
                  if ( !v21 )
                  {
                    v20 = 0;
                    v19 = 0;
                    v18 = 0;
                  }
                  v59 = v8;
                  LOBYTE(v58) = v20;
                  LOBYTE(v57) = v19;
                  LOBYTE(v56) = v18;
                  LOBYTE(v55) = v29;
                  LOBYTE(v54) = v31;
LABEL_72:
                  LODWORD(v53) = v8->IoStatus.Status;
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v12,
                    CurrentStackLocation,
                    &v66,
                    v8,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59);
                }
LABEL_73:
                v5 = EventNotificationContext + 8;
                v6 = v62;
                goto LABEL_74;
              }
              v32 = *v16 & 0x7F;
              if ( v32 == 114 || v32 == 115 )
              {
                v12 = (unsigned __int64)&v16[v17];
                LOBYTE(CurrentStackLocation) = 0;
                if ( (unsigned __int64)(v16 + 8) > v12 )
                  goto LABEL_66;
                v19 = v16[2];
                v18 = v16[1] & 0xF;
                v20 = v16[3];
              }
              else
              {
                v12 = (unsigned __int64)&v16[v17];
                LOBYTE(CurrentStackLocation) = 0;
                if ( (unsigned __int64)(v16 + 8) > v12 )
                  goto LABEL_66;
                CurrentStackLocation = (unsigned __int64)(v16 + 13);
                v18 = v16[2] & 0xF;
                v33 = v17;
                if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
                  v33 = (unsigned __int8)v16[7] + 8;
                v12 = (unsigned __int64)&v16[v33];
                if ( CurrentStackLocation > v12 )
                  v19 = 0;
                else
                  v19 = v16[12];
                if ( (unsigned __int64)(v16 + 14) > v12 )
                  v20 = 0;
                else
                  v20 = *(_BYTE *)CurrentStackLocation;
              }
              LOBYTE(CurrentStackLocation) = 1;
LABEL_66:
              if ( (_BYTE)CurrentStackLocation )
                v21 = 1;
              goto LABEL_68;
            }
LABEL_75:
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_74;
            v34 = &EventNonReadWriteRequestComplete;
LABEL_93:
            LODWORD(v53) = v8->IoStatus.Status;
            McTemplateK0pd_EtwWriteTransfer(v12, v34, &v66, v8, v53);
            goto LABEL_74;
          }
        }
        else
        {
          LOWORD(v10) = 48;
        }
        MasterIrp->Size = v10;
        MasterIrp->Type = 1;
        *(_DWORD *)(&MasterIrp->Size + 1) = 0;
        MasterIrp->MdlAddress = *(_MDL **)(v2 + 8);
        *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)(v2 + 16);
        LODWORD(MasterIrp->ThreadListEntry.Flink) = _InterlockedExchange((volatile __int32 *)v6 + 10, 0);
        HIDWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(v2 + 32);
        v35 = *(_DWORD *)(v2 + 32);
        if ( v35 )
          memmove(&MasterIrp->ThreadListEntry.Blink, (const void *)(v2 + 36), v35);
        v11 = StorEtwLoggingEnabled == 0;
        v8->IoStatus.Information = MasterIrp->Size;
        *((_BYTE *)&v8->Tail.CompletionKey + 21) = -84;
        v8->IoStatus.Status = 0;
        if ( v11 )
          goto LABEL_74;
        v66 = 0LL;
        IoGetActivityIdIrp(v8, &v66);
        v36 = v8->Tail.Overlay.CurrentStackLocation;
        if ( v36->MajorFunction == 14 )
          goto LABEL_75;
        if ( v36->MajorFunction != 15 )
        {
          if ( v36->MajorFunction != 27 )
            goto LABEL_74;
          if ( v36->MinorFunction == 7 && !v36->Parameters.Read.Length )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v37 = (unsigned int *)v8->IoStatus.Information;
              if ( v37 )
              {
                v15 = *v37;
                goto LABEL_90;
              }
LABEL_89:
              v15 = 0LL;
              goto LABEL_90;
            }
LABEL_74:
            IofCompleteRequest(v8, 0);
            v2 = a2;
            v3 = 0;
            goto LABEL_147;
          }
          goto LABEL_91;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_74;
        SecurityContext = v36->Parameters.Create.SecurityContext;
        v39 = 0LL;
        v61 = 0;
        v40 = 0;
        v41 = 0;
        Flags = 0;
        LowPart_high = 0;
        v44 = 0;
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          v45 = 0LL;
          if ( SecurityContext->FullCreateOptions )
            goto LABEL_73;
          v46 = 0LL;
          AccessState = (unsigned int)SecurityContext[2].AccessState;
          if ( !AccessState )
            goto LABEL_73;
          do
          {
            v12 = *((unsigned int *)&SecurityContext[5].SecurityQos + v46);
            if ( (unsigned int)v12 >= 0x80 )
            {
              DesiredAccess = SecurityContext->DesiredAccess;
              if ( (unsigned int)v12 < (unsigned int)DesiredAccess )
              {
                CurrentStackLocation = (unsigned int)v12;
                v48 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v12) - 64;
                if ( v48 )
                {
                  v12 = (unsigned int)(v48 - 1);
                  if ( (_DWORD)v12 )
                  {
                    if ( (_DWORD)v12 == 1 )
                    {
                      v12 = CurrentStackLocation + 40;
                      if ( CurrentStackLocation + 40 <= DesiredAccess )
                      {
                        if ( *(_DWORD *)((char *)&SecurityContext->AccessState + CurrentStackLocation + 4) )
                          v45 = (char *)&SecurityContext[1].AccessState + CurrentStackLocation;
                        v39 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + CurrentStackLocation);
LABEL_107:
                        v49 = *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation);
                        v40 = *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation + 1);
                        goto LABEL_116;
                      }
                    }
                  }
                  else
                  {
                    v12 = CurrentStackLocation + 56;
                    if ( CurrentStackLocation + 56 <= DesiredAccess )
                    {
                      v3 = 1;
                      if ( *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation + 2) )
                        v45 = (char *)&SecurityContext[1] + CurrentStackLocation;
                      v39 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + CurrentStackLocation);
                      v40 = *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation + 1);
                      v61 = *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation);
                    }
                  }
                }
                else
                {
                  v12 = CurrentStackLocation + 40;
                  if ( CurrentStackLocation + 40 <= DesiredAccess )
                  {
                    if ( *((_BYTE *)&SecurityContext->AccessState + CurrentStackLocation + 2) )
                      v45 = (char *)&SecurityContext[1] + CurrentStackLocation;
                    v39 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + CurrentStackLocation);
                    goto LABEL_107;
                  }
                }
                if ( v3 )
                  break;
              }
            }
            v46 = (unsigned int)(v46 + 1);
          }
          while ( (unsigned int)v46 < AccessState );
          v49 = v61;
LABEL_116:
          if ( !v45 )
            goto LABEL_73;
          SecurityQos = *v45;
          v44 = 0;
        }
        else
        {
          SecurityQos = (char)SecurityContext[3].SecurityQos;
          v39 = SecurityContext[1].AccessState;
          v40 = BYTE3(SecurityContext->AccessState);
          v49 = BYTE4(SecurityContext->SecurityQos);
          if ( BYTE2(SecurityContext->SecurityQos) )
            goto LABEL_73;
        }
        LOBYTE(v12) = SecurityQos - 8;
        if ( (v12 & 0x5D) != 0 )
          goto LABEL_73;
        if ( BYTE3(SecurityContext->SecurityQos) == 1 || !v39 || !v40 )
        {
LABEL_142:
          if ( byte_140173441 >= 0 )
            goto LABEL_73;
          if ( !v44 )
          {
            LowPart_high = 0;
            Flags = 0;
            v41 = 0;
          }
          v59 = v8;
          LOBYTE(v58) = LowPart_high;
          LOBYTE(v57) = Flags;
          LOBYTE(v56) = v41;
          LOBYTE(v55) = v49;
          LOBYTE(v54) = BYTE3(SecurityContext->SecurityQos);
          goto LABEL_72;
        }
        v51 = v39->OperationID.LowPart & 0x7F;
        if ( v51 == 114 || v51 == 115 )
        {
          v12 = (unsigned __int64)v39 + v40;
          LOBYTE(CurrentStackLocation) = 0;
          if ( (unsigned __int64)&v39->SecurityEvaluated > v12 )
            goto LABEL_140;
          Flags = BYTE2(v39->OperationID.LowPart);
          v41 = BYTE1(v39->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(v39->OperationID.LowPart);
        }
        else
        {
          v12 = (unsigned __int64)v39 + v40;
          LOBYTE(CurrentStackLocation) = 0;
          if ( (unsigned __int64)&v39->SecurityEvaluated > v12 )
            goto LABEL_140;
          CurrentStackLocation = (unsigned __int64)&v39->Flags + 1;
          v41 = BYTE2(v39->OperationID.LowPart) & 0xF;
          v52 = v40;
          if ( (unsigned int)HIBYTE(v39->OperationID.HighPart) + 8 <= v40 )
            v52 = HIBYTE(v39->OperationID.HighPart) + 8;
          v12 = (unsigned __int64)v39 + v52;
          if ( CurrentStackLocation > v12 )
            Flags = 0;
          else
            Flags = v39->Flags;
          if ( (unsigned __int64)&v39->Flags + 2 > v12 )
            LowPart_high = 0;
          else
            LowPart_high = *(_BYTE *)CurrentStackLocation;
        }
        LOBYTE(CurrentStackLocation) = 1;
LABEL_140:
        if ( (_BYTE)CurrentStackLocation )
          v44 = 1;
        goto LABEL_142;
      }
      _InterlockedAdd((volatile signed __int32 *)v6 + 10, 1u);
    }
LABEL_147:
    v6 = (__int64 *)*v6;
    v62 = v6;
  }
  while ( v6 != (__int64 *)v5 );
  v4 = EventNotificationContext;
LABEL_149:
  ExReleaseResourceLite((PERESOURCE)(v4 + 24));
  KeLeaveCriticalRegion();
}
