/*
 * XREFs of sub_140009D88 @ 0x140009D88
 * Callers:
 *     sub_140009C20 @ 0x140009C20 (sub_140009C20.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_14000A3E4 @ 0x14000A3E4 (sub_14000A3E4.c)
 *     sub_14000A648 @ 0x14000A648 (sub_14000A648.c)
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140020EA0 @ 0x140020EA0 (sub_140020EA0.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140076AE0 @ 0x140076AE0 (sub_140076AE0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140009D88(char *Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v5; // esi
  POWER_STATE v6; // ebx
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  char *v11; // rcx
  struct _IO_STACK_LOCATION *v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rdx
  int *Information; // rax
  char v24; // r8
  char *v25; // rax
  char v26; // r11
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // r13
  char v30; // r12
  char v31; // al
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v33; // rbx
  int v34; // edx
  int v35; // ecx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  char v37; // r15
  _BYTE *AccessState; // r9
  unsigned __int8 v39; // r10
  char *v40; // rbx
  unsigned int v41; // r8d
  struct _IO_SECURITY_CONTEXT *v42; // rax
  __int64 SecurityQos_low; // rax
  unsigned __int64 DesiredAccess; // rdi
  char SecurityQos; // cl
  char v46; // [rsp+60h] [rbp-29h]
  unsigned int v47; // [rsp+64h] [rbp-25h]
  int v48; // [rsp+68h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  __int128 v50; // [rsp+88h] [rbp-1h] BYREF
  __int128 v51; // [rsp+98h] [rbp+Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LOBYTE(v5) = 0;
  Irp->IoStatus.Status = 0;
  v6.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 1);
  *((POWER_STATE *)Context + 137) = v6;
  PoSetPowerState(v7, DevicePowerState, v6);
  if ( v6.SystemState == PowerSystemWorking && Context[504] < 0 )
  {
    sub_14000D4EC(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    sub_14000C020(Context, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *((_DWORD *)Context + 137) == 1 )
  {
    if ( (unsigned __int8)sub_140021280(Context) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x100) != 0 )
      {
        ++*((_DWORD *)Context + 838);
        if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 128, 1u) )
        {
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          v33 = WorkItem;
          if ( WorkItem )
          {
            sub_1400066C0((__int64)Context, (__int64)WorkItem, 0);
            IoQueueWorkItemEx(v33, sub_14003A800, DelayedWorkQueue, Context);
          }
        }
        *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) &= ~0x200u;
      }
      if ( !(unsigned __int8)sub_140021280(Context)
        || (v17 = *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233)),
            (v17 & 1) != 0) )
      {
        if ( Context[759] )
        {
          Context[759] = 0;
          sub_14000D760(Context, 2LL);
          sub_14000C020(Context, 0LL);
        }
      }
      sub_14000A648(v15, v14, v16, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6028LL));
      v20 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v20 + 110) & 0x40) != 0 )
      {
        LOBYTE(v19) = 1;
        sub_14000A3E4(v20, 0xFFFFFFFFLL, v18, v19);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
    else if ( Context[759] )
    {
      Context[759] = 0;
      sub_14000D760(Context, 2LL);
      sub_14000C020(Context, 0LL);
    }
    if ( *((_DWORD *)Context + 260) )
      sub_140020EA0(*((_QWORD *)Context + 3));
  }
  else
  {
    if ( !Context[759] )
    {
      Context[759] = 1;
      sub_140028D00(Context + 720, 0LL);
      sub_140021810(Context, 2LL);
    }
    if ( *((_DWORD *)Context + 260) )
      sub_140020EA0(*((_QWORD *)Context + 3));
    if ( (unsigned __int8)sub_140021280(Context) )
    {
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 6028LL), 1u);
      v21 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v21 + 110) & 0x40) != 0 && *(_DWORD *)(v21 + 6028) == *(_DWORD *)(v21 + 168) )
      {
        LOBYTE(v9) = 1;
        sub_14000A3E4(v21, 0LL, v8, v9);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 52LL, &unk_14014C778, Context, Irp, 0);
  }
  if ( byte_140168DAA )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(Irp, &v50);
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_140076AE0(
        v35,
        v34,
        (unsigned int)&v50,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[104],
        Context[105],
        Context[106],
        (char)Irp);
  }
  v10 = byte_140168DAA == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = 0;
  if ( v10 )
    goto LABEL_15;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v12->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_15;
    v22 = &unk_140148B18;
    goto LABEL_37;
  }
  if ( v12->MajorFunction != 15 )
  {
    if ( v12->MajorFunction != 27 )
      goto LABEL_15;
    if ( v12->MinorFunction == 7 && !v12->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v5 = *Information;
        sub_140056AB0((_DWORD)v11, (_DWORD)v12, (unsigned int)&v51, (_DWORD)Irp, v5, Irp->IoStatus.Status);
      }
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_15;
    v22 = &unk_140149FE8;
LABEL_37:
    sub_140052F3C(v11, v22, &v51, Irp, Irp->IoStatus.Status);
    goto LABEL_15;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_15;
  SecurityContext = v12->Parameters.Create.SecurityContext;
  v37 = 0;
  AccessState = 0LL;
  v39 = 0;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v39 = BYTE3(SecurityContext->AccessState);
    v37 = BYTE4(SecurityContext->SecurityQos);
    if ( BYTE2(SecurityContext->SecurityQos) )
      goto LABEL_15;
LABEL_102:
    LOBYTE(v11) = SecurityQos - 8;
    if ( ((unsigned __int8)v11 & 0x5D) != 0 )
      goto LABEL_15;
    if ( BYTE3(SecurityContext->SecurityQos) == 1 || !AccessState || !v39 )
      goto LABEL_59;
    v24 = 0;
    v11 = &AccessState[v39];
    v25 = AccessState + 8;
    if ( (unsigned __int8)((*AccessState & 0x7F) - 114) <= 1u )
    {
      if ( v25 > v11 )
      {
LABEL_57:
        if ( v24 )
        {
          LOBYTE(v5) = v29;
          v31 = v30;
LABEL_60:
          sub_140052E64(
            (_DWORD)v11,
            (_DWORD)SecurityContext,
            (unsigned int)&v51,
            (_DWORD)Irp,
            Irp->IoStatus.Status,
            BYTE3(SecurityContext->SecurityQos),
            v37,
            v26,
            v5,
            v31,
            (char)Irp);
          goto LABEL_15;
        }
LABEL_59:
        v26 = 0;
        v31 = 0;
        goto LABEL_60;
      }
      v29 = AccessState[2];
      v26 = AccessState[1] & 0xF;
      v30 = AccessState[3];
    }
    else
    {
      if ( v25 > v11 )
        goto LABEL_57;
      v26 = AccessState[2] & 0xF;
      v27 = v39;
      if ( (unsigned int)(unsigned __int8)AccessState[7] + 8 <= v39 )
        v27 = (unsigned __int8)AccessState[7] + 8;
      v11 = AccessState + 13;
      v28 = (unsigned __int64)&AccessState[v27];
      if ( (unsigned __int64)(AccessState + 13) <= v28 )
        v29 = AccessState[12];
      if ( (unsigned __int64)(AccessState + 14) <= v28 )
        v30 = *v11;
    }
    v24 = 1;
    goto LABEL_57;
  }
  v40 = 0LL;
  v46 = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_15;
  LODWORD(v11) = 0;
  v48 = 0;
  v47 = (unsigned int)SecurityContext[2].AccessState;
  if ( !v47 )
    goto LABEL_99;
  v41 = (unsigned int)SecurityContext[2].AccessState;
  v42 = SecurityContext + 5;
  *(_QWORD *)&v50 = SecurityContext + 5;
  while ( 1 )
  {
    SecurityQos_low = LODWORD(v42->SecurityQos);
    if ( (unsigned int)SecurityQos_low >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)SecurityQos_low < (unsigned int)DesiredAccess )
        break;
    }
LABEL_92:
    LODWORD(v11) = (_DWORD)v11 + 1;
    v42 = (struct _IO_SECURITY_CONTEXT *)(v50 + 4);
    v48 = (int)v11;
    *(_QWORD *)&v50 = v50 + 4;
    if ( (unsigned int)v11 >= v41 )
      goto LABEL_99;
  }
  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) - 65;
    if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 65 )
    {
      LODWORD(v11) = SecurityQos_low + 56;
      if ( SecurityQos_low + 56 <= DesiredAccess )
      {
        v46 = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
          v40 = (char *)&SecurityContext[1] + SecurityQos_low;
        v37 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
        AccessState = *(_BYTE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
        v39 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
      }
    }
    else if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 66 )
    {
      LODWORD(v11) = SecurityQos_low + 40;
      if ( SecurityQos_low + 40 <= DesiredAccess )
      {
        if ( *(_DWORD *)((char *)&SecurityContext->AccessState + SecurityQos_low + 4) )
          v40 = (char *)&SecurityContext[1].AccessState + SecurityQos_low;
        AccessState = *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[1].SecurityQos + SecurityQos_low);
        goto LABEL_98;
      }
    }
    goto LABEL_90;
  }
  LODWORD(v11) = SecurityQos_low + 40;
  if ( SecurityQos_low + 40 > DesiredAccess )
  {
LABEL_90:
    if ( v46 )
      goto LABEL_99;
    LODWORD(v11) = v48;
    v41 = v47;
    goto LABEL_92;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
    v40 = (char *)&SecurityContext[1] + SecurityQos_low;
  AccessState = *(_BYTE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
LABEL_98:
  v39 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
  v37 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
LABEL_99:
  if ( v40 )
  {
    SecurityQos = *v40;
    goto LABEL_102;
  }
LABEL_15:
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
