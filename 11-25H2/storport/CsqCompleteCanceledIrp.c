/*
 * XREFs of CsqCompleteCanceledIrp @ 0x1401311E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall CsqCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  PIO_CSQ_COMPLETE_CANCELED_IRP *p_CsqCompleteCanceledIrp; // rbp
  bool v4; // zf
  __int64 v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int *Information; // rax
  __int64 v8; // rcx
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned __int64 ProviderId; // rdx
  char v11; // r14
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // di
  char v15; // r11
  unsigned __int8 v16; // r12
  char *v17; // r11
  unsigned int v18; // r13d
  unsigned int *v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rcx
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  __int64 v28; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  char v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+61h] [rbp-57h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  if ( !Csq )
    return;
  if ( !Irp )
    return;
  p_CsqCompleteCanceledIrp = &Csq[-2].CsqCompleteCanceledIrp;
  if ( Csq == (PIO_CSQ)80 )
    return;
  v4 = byte_140168DAA == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = -1073741536;
  if ( v4 )
    goto LABEL_70;
  v33 = 0LL;
  IoGetActivityIdIrp(Irp, &v33);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v9 = &stru_140148B18;
    goto LABEL_69;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_70;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (unsigned int *)Irp->IoStatus.Information;
        if ( Information )
          v8 = *Information;
        else
          v8 = 0LL;
        sub_140056AB0(v8, (__int64)CurrentStackLocation, &v33, Irp, v8, Irp->IoStatus.Status);
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v9 = &stru_140149FE8;
LABEL_69:
    sub_140052F3C(v5, v9, &v33, Irp, Irp->IoStatus.Status);
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v11 = 0;
  v12 = 0LL;
  v30 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v22 = *(_BYTE *)(ProviderId + 72);
    v12 = *(_BYTE **)(ProviderId + 32);
    v13 = *(_BYTE *)(ProviderId + 11);
    v11 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_45;
    goto LABEL_70;
  }
  v17 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_70;
  v18 = 0;
  v32 = *(_DWORD *)(ProviderId + 56);
  if ( !v32 )
    goto LABEL_39;
  v19 = (unsigned int *)(ProviderId + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_38:
    ++v18;
    ++v19;
    if ( v18 >= v32 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v20 + ProviderId) != 64 )
  {
    if ( *(_DWORD *)(v20 + ProviderId) == 65 )
    {
      if ( v20 + 56 <= v21 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v20 + ProviderId + 10) )
          v17 = (char *)(v20 + ProviderId + 24);
        v11 = *(_BYTE *)(v20 + ProviderId + 8);
        v12 = *(_BYTE **)(v20 + ProviderId + 16);
        v13 = *(_BYTE *)(v20 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + ProviderId) == 66 && v20 + 40 <= v21 )
    {
      if ( *(_DWORD *)(v20 + ProviderId + 12) )
        v17 = (char *)(v20 + ProviderId + 32);
      v12 = *(_BYTE **)(v20 + ProviderId + 24);
      goto LABEL_31;
    }
    goto LABEL_37;
  }
  if ( v20 + 40 > v21 )
  {
LABEL_37:
    if ( v31 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v20 + ProviderId + 10) )
    v17 = (char *)(v20 + ProviderId + 24);
  v12 = *(_BYTE **)(v20 + ProviderId + 16);
LABEL_31:
  v11 = *(_BYTE *)(v20 + ProviderId + 8);
  v13 = *(_BYTE *)(v20 + ProviderId + 9);
LABEL_39:
  if ( v17 )
  {
    v22 = *v17;
    v15 = 0;
LABEL_45:
    if ( ((v22 - 8) & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(ProviderId + 3);
      if ( v23 == 1 || !v12 || !v13 )
        goto LABEL_65;
      LOBYTE(ProviderId) = 0;
      v24 = &v12[v13];
      v25 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( v25 <= v24 )
        {
          LOBYTE(ProviderId) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( v25 <= v24 )
        {
          v14 = v12[2] & 0xF;
          v26 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v26 = (unsigned __int8)v12[7] + 8;
          ProviderId = (unsigned __int64)&v12[v26];
          if ( (unsigned __int64)(v12 + 13) > ProviderId )
            v30 = 0;
          else
            v30 = v12[12];
          if ( (unsigned __int64)(v12 + 14) > ProviderId )
            v16 = 0;
          else
            v16 = v12[13];
          LOBYTE(ProviderId) = 1;
        }
        v15 = v30;
      }
      if ( (_BYTE)ProviderId )
      {
        v27 = v15;
        v28 = v16;
      }
      else
      {
LABEL_65:
        v14 = 0;
        v27 = 0;
        v28 = 0LL;
      }
      sub_140052E64(v28, ProviderId, &v33, Irp, Irp->IoStatus.Status, v23, v11, v14, v27, v28, Irp);
    }
  }
LABEL_70:
  IofCompleteRequest(Irp, 0);
  if ( !_InterlockedCompareExchange16((volatile signed __int16 *)p_CsqCompleteCanceledIrp + 18, 0, 0) )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)p_CsqCompleteCanceledIrp[21]);
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, sub_140131730, DelayedWorkQueue, p_CsqCompleteCanceledIrp);
  }
}
