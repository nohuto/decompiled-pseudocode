/*
 * XREFs of sub_140195100 @ 0x140195100
 * Callers:
 *     sub_14019B054 @ 0x14019B054 (sub_14019B054.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140195100(_QWORD *SystemArgument2, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  struct _IRP *MasterIrp; // rsi
  unsigned int v7; // r12d
  char *v8; // r15
  NTSTATUS v9; // r14d
  int MdlAddress; // ecx
  int MdlAddress_high; // eax
  char v12; // dl
  char v13; // r13
  unsigned int v14; // r13d
  bool v15; // zf
  unsigned __int64 v16; // rcx
  struct _IO_STACK_LOCATION *v17; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 ProviderId; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // r11
  char v25; // r15
  char v26; // r8
  char *v27; // rsi
  unsigned int v28; // r13d
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // si
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-49h]
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  char v41; // [rsp+62h] [rbp-7h]
  ULONG Size; // [rsp+64h] [rbp-5h]
  unsigned int Size_4; // [rsp+68h] [rbp-1h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  P[0] = 0LL;
  v7 = 0;
  Size_4 = 0;
  v8 = 0LL;
  Size = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10
    || !MasterIrp
    || *(_DWORD *)&MasterIrp->Type != 16
    || *(_DWORD *)(&MasterIrp->Size + 1) != 16 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  if ( CurrentStackLocation->Parameters.Read.Length >= 0x2A8 )
  {
    MdlAddress = (int)MasterIrp->MdlAddress;
    if ( MdlAddress != 2 )
    {
      if ( MdlAddress == 1 )
        goto LABEL_16;
      if ( MdlAddress != 4 )
      {
        if ( MdlAddress != 3 )
        {
LABEL_11:
          v9 = -1073741811;
          goto LABEL_28;
        }
LABEL_15:
        v12 = 0;
        goto LABEL_17;
      }
    }
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    if ( !MdlAddress_high || MdlAddress_high >= 5 )
      goto LABEL_11;
    if ( (unsigned int)(MdlAddress - 1) > 1 )
      goto LABEL_15;
LABEL_16:
    v12 = 1;
    if ( MdlAddress == 1 )
    {
LABEL_18:
      v13 = 1;
LABEL_19:
      v9 = sub_1400EC648(SystemArgument2, v12, v13, &Size_4, P);
      if ( v9 < 0 )
      {
        v8 = (char *)P[0];
      }
      else
      {
        memset_0(MasterIrp, 0, Size);
        v8 = (char *)P[0];
        *(_DWORD *)&MasterIrp->Type = 176;
        *(_DWORD *)(&MasterIrp->Size + 1) = 176;
        LOBYTE(MasterIrp->ThreadListEntry.Flink) = 0;
        LOWORD(MasterIrp->MdlAddress) = *(_WORD *)(v8 + 5);
        BYTE2(MasterIrp->MdlAddress) = v8[7];
        MasterIrp->Flags = *((unsigned __int16 *)v8 + 4);
        *(&MasterIrp->Flags + 1) = *((unsigned __int16 *)v8 + 5);
        MasterIrp->AssociatedIrp.IrpCount = *((unsigned __int16 *)v8 + 6);
        HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = *((_DWORD *)v8 + 4);
        *(LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 4) = (LIST_ENTRY)*((_OWORD *)v8 + 24);
        *(_OWORD *)((char *)&MasterIrp->IoStatus.Pointer + 4) = *((_OWORD *)v8 + 25);
        *(_OWORD *)&MasterIrp->Cancel = *((_OWORD *)v8 + 26);
        *(_OWORD *)((char *)&MasterIrp->UserEvent + 4) = *((_OWORD *)v8 + 27);
        *(union _IRP::$6B96A96ED958C92F2CB4B83EAB343043 *)((char *)&MasterIrp->Overlay + 12) = (union _IRP::$6B96A96ED958C92F2CB4B83EAB343043)*((_OWORD *)v8 + 28);
        *(_OWORD *)((char *)&MasterIrp->UserBuffer + 4) = *((_OWORD *)v8 + 29);
        *(_OWORD *)((char *)&MasterIrp->Tail.CompletionKey + 12) = *((_OWORD *)v8 + 30);
        *(_OWORD *)((char *)&MasterIrp->Tail.CompletionKey + 28) = *((_OWORD *)v8 + 31);
        if ( v13 )
        {
          v7 = 168;
          v14 = 0;
        }
        else
        {
          v14 = Size_4;
          memmove(&MasterIrp->Tail.CompletionKey + 6, v8 + 0x40000, Size_4);
          v7 = v14 + 168;
        }
        *((_DWORD *)&MasterIrp->Tail.CompletionKey + 11) = v14;
        *(_DWORD *)(&MasterIrp->Size + 1) = v7;
      }
LABEL_26:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x4C4E6152u);
      goto LABEL_28;
    }
LABEL_17:
    v13 = 0;
    if ( MdlAddress != 3 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v9 = -1073741789;
LABEL_28:
  v15 = byte_140168DAA == 0;
  Irp->IoStatus.Information = v7;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v9;
  if ( v15 )
    goto LABEL_94;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(Irp, P);
  v17 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v17->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v19 = &stru_140148B18;
    goto LABEL_93;
  }
  if ( v17->MajorFunction != 15 )
  {
    if ( v17->MajorFunction != 27 )
      goto LABEL_94;
    if ( v17->MinorFunction == 7 && !v17->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v38) = v3;
        sub_140056AB0(v16, (__int64)v17, (const GUID *)P, Irp, v38, Irp->IoStatus.Status);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v19 = &stru_140149FE8;
LABEL_93:
    LODWORD(v38) = Irp->IoStatus.Status;
    sub_140052F3C(v16, v19, (const GUID *)P, Irp, v38);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  ProviderId = v17->Parameters.WMI.ProviderId;
  v21 = 0;
  v22 = 0LL;
  v40 = 0;
  v23 = 0;
  v39 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v32 = *(_BYTE *)(ProviderId + 72);
    v22 = *(_BYTE **)(ProviderId + 32);
    v23 = *(_BYTE *)(ProviderId + 11);
    v21 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_69;
    goto LABEL_94;
  }
  v27 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_94;
  v28 = 0;
  Size = *(_DWORD *)(ProviderId + 56);
  if ( !Size )
    goto LABEL_66;
  while ( 1 )
  {
    v16 = *(unsigned int *)(ProviderId + 4LL * v28 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v29 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v16 < (unsigned int)v29 )
        break;
    }
LABEL_59:
    if ( ++v28 >= Size )
      goto LABEL_65;
  }
  v30 = (unsigned int)v16;
  v31 = *(_DWORD *)(v16 + ProviderId) - 64;
  if ( v31 )
  {
    v16 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v16 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + ProviderId + 12) )
            v27 = (char *)(v30 + ProviderId + 32);
          v22 = *(_BYTE **)(v30 + ProviderId + 24);
          goto LABEL_64;
        }
      }
    }
    else
    {
      v16 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v30 + ProviderId + 10) )
          v27 = (char *)(v30 + ProviderId + 24);
        v21 = *(_BYTE *)(v30 + ProviderId + 8);
        v22 = *(_BYTE **)(v30 + ProviderId + 16);
        v23 = *(_BYTE *)(v30 + ProviderId + 9);
      }
    }
    goto LABEL_58;
  }
  v16 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_58:
    if ( v41 )
      goto LABEL_65;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(v30 + ProviderId + 10) )
    v27 = (char *)(v30 + ProviderId + 24);
  v22 = *(_BYTE **)(v30 + ProviderId + 16);
LABEL_64:
  v23 = *(_BYTE *)(v30 + ProviderId + 9);
  v21 = *(_BYTE *)(v30 + ProviderId + 8);
LABEL_65:
  v25 = 0;
  v26 = 0;
LABEL_66:
  if ( v27 )
  {
    v32 = *v27;
LABEL_69:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(ProviderId + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_89;
      LOBYTE(ProviderId) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          LOBYTE(ProviderId) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          ProviderId = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > ProviderId )
            v40 = 0;
          else
            v40 = v22[12];
          if ( (unsigned __int64)(v22 + 14) > ProviderId )
            v39 = 0;
          else
            v39 = *(_BYTE *)v16;
          LOBYTE(ProviderId) = 1;
        }
        v26 = v39;
        v25 = v40;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v3) = v25;
        v36 = v26;
      }
      else
      {
LABEL_89:
        v24 = 0;
        v36 = 0;
      }
      LODWORD(v38) = Irp->IoStatus.Status;
      sub_140052E64(v16, ProviderId, (const GUID *)P, Irp, v38, v33, v21, v24, v3, v36, Irp);
    }
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
