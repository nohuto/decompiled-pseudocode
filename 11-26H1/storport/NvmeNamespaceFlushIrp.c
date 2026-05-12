/*
 * XREFs of NvmeNamespaceFlushIrp @ 0x140041328
 * Callers:
 *     RaDriverFlushIrp @ 0x140041210 (RaDriverFlushIrp.c)
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceFlushIrp(char *Context, PIRP Irp)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  _IO_STACK_LOCATION *v9; // rdx
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // dl
  void *v13; // rdx
  int *v14; // rax
  char v15; // al
  _IO_SECURITY_CONTEXT *v16; // rdx
  char *v17; // r10
  char v18; // r11
  unsigned int v19; // eax
  char v20; // si
  char v21; // r10
  char v22; // r15
  _LIST_ENTRY *v23; // rsi
  _LIST_ENTRY *p_ListEntry; // rdi
  _LIST_ENTRY *Blink; // rax
  _ACCESS_STATE *v26; // r9
  unsigned __int8 v27; // r14
  char *v28; // r15
  unsigned int v29; // r13d
  unsigned __int64 v30; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v32; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  _ACCESS_STATE *v34; // r9
  unsigned __int8 v35; // r14
  char v36; // r11
  char Flags; // si
  char LowPart_high; // r10
  char v39; // r15
  int v40; // eax
  char *v41; // r15
  unsigned int v42; // r13d
  unsigned __int64 DesiredAccess; // r12
  __int64 v44; // r8
  int v45; // ecx
  int *Information; // rax
  void *v47; // rdx
  char v48; // r12
  char SecurityQos; // cl
  char v50; // r8
  char v51; // al
  char *v52; // r10
  unsigned int v53; // eax
  unsigned int v54; // r13d
  unsigned __int64 v55; // r12
  int v56; // ecx
  unsigned __int64 v57; // r12
  __int64 v58; // r8
  int v59; // ecx
  char v60; // r12
  char v61; // cl
  char v62; // r8
  char v63; // [rsp+60h] [rbp-9h]
  char v64; // [rsp+60h] [rbp-9h]
  char v65; // [rsp+61h] [rbp-8h]
  char v66; // [rsp+61h] [rbp-8h]
  char v67; // [rsp+61h] [rbp-8h]
  unsigned int v68; // [rsp+64h] [rbp-5h]
  unsigned int AccessState; // [rsp+64h] [rbp-5h]
  unsigned int v70; // [rsp+64h] [rbp-5h]
  unsigned int v71; // [rsp+68h] [rbp-1h]
  __int128 v72; // [rsp+70h] [rbp+7h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)Context + 2) + 136LL) & 2) != 0 )
  {
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    LOBYTE(v5) = 0;
    v71 = -1073741637;
    v7 = StorEtwLoggingEnabled == 0;
    Irp->IoStatus.Status = -1073741637;
    if ( v7 )
      goto LABEL_139;
    v72 = 0LL;
    IoGetActivityIdIrp(Irp, &v72);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 14 )
    {
      v32 = CurrentStackLocation->MajorFunction - 15;
      if ( CurrentStackLocation->MajorFunction == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_139;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        v34 = 0LL;
        v64 = 0;
        v35 = 0;
        v36 = 0;
        Flags = 0;
        LowPart_high = 0;
        v39 = 0;
        v40 = BYTE2(SecurityContext->SecurityQos);
        if ( (_BYTE)v40 == 40 )
        {
          v41 = 0LL;
          v66 = 0;
          if ( SecurityContext->FullCreateOptions )
            goto LABEL_139;
          v42 = 0;
          AccessState = (unsigned int)SecurityContext[2].AccessState;
          if ( !AccessState )
            goto LABEL_139;
          while ( 1 )
          {
            v30 = *((unsigned int *)&SecurityContext[5].SecurityQos + v42);
            if ( (unsigned int)v30 >= 0x80 )
            {
              DesiredAccess = SecurityContext->DesiredAccess;
              if ( (unsigned int)v30 < (unsigned int)DesiredAccess )
              {
                v44 = (unsigned int)v30;
                v45 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v30) - 64;
                if ( v45 )
                {
                  LODWORD(v30) = v45 - 1;
                  if ( (_DWORD)v30 )
                  {
                    if ( (_DWORD)v30 == 1 )
                    {
                      LODWORD(v30) = v44 + 40;
                      if ( v44 + 40 <= DesiredAccess )
                      {
LABEL_64:
                        if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v44 + 4) )
                          v41 = (char *)&SecurityContext[1].AccessState + v44;
                        v34 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v44);
                        goto LABEL_87;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v30) = v44 + 56;
                    if ( v44 + 56 <= DesiredAccess )
                    {
                      v66 = 1;
                      if ( *((_BYTE *)&SecurityContext->AccessState + v44 + 2) )
                        v41 = (char *)&SecurityContext[1] + v44;
                      v34 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v44);
                      v35 = *((_BYTE *)&SecurityContext->AccessState + v44 + 1);
                      v64 = *((_BYTE *)&SecurityContext->AccessState + v44);
                    }
                  }
                }
                else
                {
                  LODWORD(v30) = v44 + 40;
                  if ( v44 + 40 <= DesiredAccess )
                  {
LABEL_88:
                    if ( *((_BYTE *)&SecurityContext->AccessState + v44 + 2) )
                      v41 = (char *)&SecurityContext[1] + v44;
                    v34 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v44);
LABEL_87:
                    v48 = *((_BYTE *)&SecurityContext->AccessState + v44);
                    v35 = *((_BYTE *)&SecurityContext->AccessState + v44 + 1);
LABEL_84:
                    if ( v41 )
                    {
                      SecurityQos = *v41;
                      v39 = 0;
                      goto LABEL_91;
                    }
                    goto LABEL_139;
                  }
                }
                if ( v66 )
                  goto LABEL_83;
              }
            }
            if ( ++v42 >= AccessState )
            {
LABEL_83:
              v48 = v64;
              goto LABEL_84;
            }
          }
        }
LABEL_90:
        v48 = BYTE4(SecurityContext->SecurityQos);
        v35 = BYTE3(SecurityContext->AccessState);
        v34 = SecurityContext[1].AccessState;
        SecurityQos = (char)SecurityContext[3].SecurityQos;
        if ( v40 )
          goto LABEL_139;
LABEL_91:
        LOBYTE(v30) = SecurityQos - 8;
        if ( (v30 & 0x5D) != 0 )
        {
LABEL_139:
          IofCompleteRequest(Irp, 0);
          return v71;
        }
        v50 = BYTE3(SecurityContext->SecurityQos);
        if ( v50 == 1 || !v34 || !v35 )
        {
LABEL_132:
          if ( byte_140173441 < 0 )
          {
            if ( !v39 )
            {
              LowPart_high = 0;
              v36 = 0;
              Flags = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v30,
              (_DWORD)SecurityContext,
              (unsigned int)&v72,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v50,
              v48,
              v36,
              Flags,
              LowPart_high,
              (char)Irp);
          }
          goto LABEL_139;
        }
        v51 = v34->OperationID.LowPart & 0x7F;
        if ( v51 == 114 || v51 == 115 )
        {
          v30 = (unsigned __int64)v34 + v35;
          LOBYTE(SecurityContext) = 0;
          if ( (unsigned __int64)&v34->SecurityEvaluated > v30 )
            goto LABEL_130;
          LowPart_high = HIBYTE(v34->OperationID.LowPart);
          v36 = BYTE1(v34->OperationID.LowPart) & 0xF;
          Flags = BYTE2(v34->OperationID.LowPart);
        }
        else
        {
          v30 = (unsigned __int64)v34 + v35;
          LOBYTE(SecurityContext) = 0;
          if ( (unsigned __int64)&v34->SecurityEvaluated > v30 )
            goto LABEL_130;
          v52 = (char *)&v34->Flags + 1;
          v36 = BYTE2(v34->OperationID.LowPart) & 0xF;
          v53 = v35;
          if ( (unsigned int)HIBYTE(v34->OperationID.HighPart) + 8 <= v35 )
            v53 = HIBYTE(v34->OperationID.HighPart) + 8;
          v30 = (unsigned __int64)v34 + v53;
          if ( (unsigned __int64)v52 <= v30 )
            Flags = v34->Flags;
          if ( (unsigned __int64)&v34->Flags + 2 > v30 )
            LowPart_high = 0;
          else
            LowPart_high = *v52;
        }
        LOBYTE(SecurityContext) = 1;
LABEL_130:
        if ( (_BYTE)SecurityContext )
          v39 = 1;
        goto LABEL_132;
      }
      goto LABEL_67;
    }
LABEL_136:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_139;
    v47 = &EventNonReadWriteRequestComplete;
    goto LABEL_138;
  }
  v4 = NvmeNamespaceAcquireRemoveLock(Context, Irp);
  LOBYTE(v5) = 0;
  v71 = v4;
  if ( v4 < 0 )
  {
    v7 = StorEtwLoggingEnabled == 0;
    Irp->IoStatus.Information = 0LL;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    Irp->IoStatus.Status = v4;
    if ( v7 )
      goto LABEL_139;
    v72 = 0LL;
    IoGetActivityIdIrp(Irp, &v72);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 14 )
    {
      v32 = CurrentStackLocation->MajorFunction - 15;
      if ( CurrentStackLocation->MajorFunction == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_139;
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        v34 = 0LL;
        v64 = 0;
        v35 = 0;
        v36 = 0;
        Flags = 0;
        LowPart_high = 0;
        v39 = 0;
        v40 = BYTE2(SecurityContext->SecurityQos);
        if ( (_BYTE)v40 == 40 )
        {
          v41 = 0LL;
          v67 = 0;
          if ( !SecurityContext->FullCreateOptions )
          {
            v54 = 0;
            v70 = (unsigned int)SecurityContext[2].AccessState;
            if ( v70 )
            {
              while ( 1 )
              {
                v30 = *((unsigned int *)&SecurityContext[5].SecurityQos + v54);
                if ( (unsigned int)v30 >= 0x80 )
                {
                  v55 = SecurityContext->DesiredAccess;
                  if ( (unsigned int)v30 < (unsigned int)v55 )
                  {
                    v44 = (unsigned int)v30;
                    v56 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v30) - 64;
                    if ( v56 )
                    {
                      LODWORD(v30) = v56 - 1;
                      if ( (_DWORD)v30 )
                      {
                        if ( (_DWORD)v30 == 1 )
                        {
                          LODWORD(v30) = v44 + 40;
                          if ( v44 + 40 <= v55 )
                            goto LABEL_64;
                        }
                      }
                      else
                      {
                        LODWORD(v30) = v44 + 56;
                        if ( v44 + 56 <= v55 )
                        {
                          v67 = 1;
                          if ( *((_BYTE *)&SecurityContext->AccessState + v44 + 2) )
                            v41 = (char *)&SecurityContext[1] + v44;
                          v34 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v44);
                          v35 = *((_BYTE *)&SecurityContext->AccessState + v44 + 1);
                          v64 = *((_BYTE *)&SecurityContext->AccessState + v44);
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v30) = v44 + 40;
                      if ( v44 + 40 <= v55 )
                        goto LABEL_88;
                    }
                    if ( v67 )
                      goto LABEL_83;
                  }
                }
                if ( ++v54 >= v70 )
                  goto LABEL_83;
              }
            }
          }
          goto LABEL_139;
        }
        goto LABEL_90;
      }
LABEL_67:
      if ( v32 != 12 )
        goto LABEL_139;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v5 = *Information;
          McTemplateK0pqd_EtwWriteTransfer(
            v30,
            (_DWORD)CurrentStackLocation,
            (unsigned int)&v72,
            (_DWORD)Irp,
            v5,
            Irp->IoStatus.Status);
        }
        goto LABEL_139;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_139;
      v47 = &EventPnpRequestComplete;
LABEL_138:
      McTemplateK0pd_EtwWriteTransfer(v30, v47, &v72, Irp, Irp->IoStatus.Status);
      goto LABEL_139;
    }
    goto LABEL_136;
  }
  v6 = *((_QWORD *)Context + 2);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 592) + 525LL) & 1) == 0 || (*(_DWORD *)(v6 + 136) & 0x80000) == 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
    v7 = StorEtwLoggingEnabled == 0;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    Irp->IoStatus.Status = 0;
    if ( v7 )
      goto LABEL_8;
    v72 = 0LL;
    IoGetActivityIdIrp(Irp, &v72);
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    switch ( v9->MajorFunction )
    {
      case 0xEu:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_8;
        v13 = &EventNonReadWriteRequestComplete;
        break;
      case 0xFu:
        if ( byte_140173441 >= 0 )
          goto LABEL_8;
        v16 = v9->Parameters.Create.SecurityContext;
        v26 = 0LL;
        v63 = 0;
        v27 = 0;
        v18 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        if ( BYTE2(v16->SecurityQos) == 40 )
        {
          v28 = 0LL;
          v65 = 0;
          if ( v16->FullCreateOptions )
            goto LABEL_8;
          v29 = 0;
          v68 = (unsigned int)v16[2].AccessState;
          if ( !v68 )
            goto LABEL_8;
          while ( 1 )
          {
            v8 = *((unsigned int *)&v16[5].SecurityQos + v29);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v57 = v16->DesiredAccess;
              if ( (unsigned int)v8 < (unsigned int)v57 )
              {
                v58 = (unsigned int)v8;
                v59 = *(_DWORD *)((char *)&v16->SecurityQos + v8) - 64;
                if ( v59 )
                {
                  LODWORD(v8) = v59 - 1;
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      LODWORD(v8) = v58 + 40;
                      if ( v58 + 40 <= v57 )
                      {
                        if ( *(_DWORD *)((char *)&v16->AccessState + v58 + 4) )
                          v28 = (char *)&v16[1].AccessState + v58;
                        v26 = *(_ACCESS_STATE **)((char *)&v16[1].SecurityQos + v58);
                        goto LABEL_166;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v8) = v58 + 56;
                    if ( v58 + 56 <= v57 )
                    {
                      v65 = 1;
                      if ( *((_BYTE *)&v16->AccessState + v58 + 2) )
                        v28 = (char *)&v16[1] + v58;
                      v26 = *(_ACCESS_STATE **)((char *)&v16->DesiredAccess + v58);
                      v27 = *((_BYTE *)&v16->AccessState + v58 + 1);
                      v63 = *((_BYTE *)&v16->AccessState + v58);
                    }
                  }
                }
                else
                {
                  LODWORD(v8) = v58 + 40;
                  if ( v58 + 40 <= v57 )
                  {
                    if ( *((_BYTE *)&v16->AccessState + v58 + 2) )
                      v28 = (char *)&v16[1] + v58;
                    v26 = *(_ACCESS_STATE **)((char *)&v16->DesiredAccess + v58);
LABEL_166:
                    v60 = *((_BYTE *)&v16->AccessState + v58);
                    v27 = *((_BYTE *)&v16->AccessState + v58 + 1);
LABEL_160:
                    if ( v28 )
                    {
                      v61 = *v28;
                      v22 = 0;
                      goto LABEL_168;
                    }
                    goto LABEL_8;
                  }
                }
                if ( v65 )
                  goto LABEL_159;
              }
            }
            if ( ++v29 >= v68 )
            {
LABEL_159:
              v60 = v63;
              goto LABEL_160;
            }
          }
        }
        v61 = (char)v16[3].SecurityQos;
        v26 = v16[1].AccessState;
        v27 = BYTE3(v16->AccessState);
        v60 = BYTE4(v16->SecurityQos);
        if ( BYTE2(v16->SecurityQos) )
          goto LABEL_8;
LABEL_168:
        LOBYTE(v8) = v61 - 8;
        if ( (v8 & 0x5D) != 0 )
        {
LABEL_8:
          IofCompleteRequest(Irp, 0);
          return 0LL;
        }
        v62 = BYTE3(v16->SecurityQos);
        if ( v62 == 1 || !v26 || !v27 )
        {
LABEL_38:
          if ( byte_140173441 < 0 )
          {
            if ( !v22 )
            {
              v21 = 0;
              v20 = 0;
              v18 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v8,
              (_DWORD)v16,
              (unsigned int)&v72,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v62,
              v60,
              v18,
              v20,
              v21,
              (char)Irp);
          }
          goto LABEL_8;
        }
        v15 = v26->OperationID.LowPart & 0x7F;
        if ( v15 == 114 || v15 == 115 )
        {
          v8 = (unsigned __int64)v26 + v27;
          LOBYTE(v16) = 0;
          if ( (unsigned __int64)&v26->SecurityEvaluated > v8 )
          {
LABEL_36:
            if ( (_BYTE)v16 )
              v22 = 1;
            goto LABEL_38;
          }
          v20 = BYTE2(v26->OperationID.LowPart);
          v18 = BYTE1(v26->OperationID.LowPart) & 0xF;
          v21 = HIBYTE(v26->OperationID.LowPart);
        }
        else
        {
          v8 = (unsigned __int64)v26 + v27;
          LOBYTE(v16) = 0;
          if ( (unsigned __int64)&v26->SecurityEvaluated > v8 )
            goto LABEL_36;
          v17 = (char *)&v26->Flags + 1;
          v18 = BYTE2(v26->OperationID.LowPart) & 0xF;
          v19 = v27;
          if ( (unsigned int)HIBYTE(v26->OperationID.HighPart) + 8 <= v27 )
            v19 = HIBYTE(v26->OperationID.HighPart) + 8;
          v8 = (unsigned __int64)v26 + v19;
          if ( (unsigned __int64)v17 <= v8 )
            v20 = v26->Flags;
          if ( (unsigned __int64)&v26->Flags + 2 > v8 )
            v21 = 0;
          else
            v21 = *v17;
        }
        LOBYTE(v16) = 1;
        goto LABEL_36;
      case 0x1Bu:
        if ( v9->MinorFunction == 7 && !v9->Parameters.Read.Length )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v14 = (int *)Irp->IoStatus.Information;
            if ( v14 )
              v5 = *v14;
            McTemplateK0pqd_EtwWriteTransfer(v8, (_DWORD)v9, (unsigned int)&v72, (_DWORD)Irp, v5, Irp->IoStatus.Status);
          }
          goto LABEL_8;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_8;
        v13 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_8;
    }
    McTemplateK0pd_EtwWriteTransfer(v8, v13, &v72, Irp, Irp->IoStatus.Status);
    goto LABEL_8;
  }
  v11 = (KSPIN_LOCK *)(Context + 544);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 68);
  if ( *((_QWORD *)Context + 69) )
  {
    if ( *((_QWORD *)Context + 72) )
    {
      v23 = (_LIST_ENTRY *)(Context + 584);
      p_ListEntry = &Irp->Tail.Overlay.ListEntry;
      Blink = v23->Blink;
      if ( Blink->Flink != v23 )
        __fastfail(3u);
      p_ListEntry->Flink = v23;
      p_ListEntry->Blink = Blink;
      Blink->Flink = p_ListEntry;
      v23->Blink = p_ListEntry;
    }
    else
    {
      *((_QWORD *)Context + 72) = Irp;
    }
    KeReleaseSpinLock(v11, v12);
  }
  else
  {
    *((_QWORD *)Context + 69) = Irp;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 68, v12);
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 67), NvmeNamespaceFlushWorker, DelayedWorkQueue, Context);
  }
  return 259LL;
}
