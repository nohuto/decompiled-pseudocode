/*
 * XREFs of RaidAdapterStorageTcgAssignLockingObject @ 0x140083864
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v6; // r8
  _IRP *MasterIrp; // r15
  char v8; // r12
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v11; // eax
  int TcgProperties; // esi
  int v13; // ecx
  _IRP *v14; // r12
  __int64 v15; // rax
  int MdlAddress; // ecx
  int v17; // r9d
  int v18; // eax
  __int64 v19; // r8
  const wchar_t *v20; // rcx
  bool v21; // zf
  unsigned __int64 v22; // rcx
  _IO_STACK_LOCATION *v23; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v27; // r9
  unsigned __int8 v28; // r15
  char v29; // r10
  char v30; // bl
  char v31; // r11
  char v32; // r12
  char *v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  __int64 v36; // r8
  int v37; // ecx
  char v38; // r13
  char v39; // cl
  char v40; // r8
  char v41; // al
  char *v42; // r11
  unsigned int v43; // eax
  __int64 v45; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v47; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR v48; // [rsp+38h] [rbp-118h]
  __int64 v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+48h] [rbp-108h]
  char v51; // [rsp+D0h] [rbp-80h]
  char v52; // [rsp+D1h] [rbp-7Fh]
  int v53; // [rsp+D4h] [rbp-7Ch]
  _IRP *v54; // [rsp+D8h] [rbp-78h]
  unsigned int v55; // [rsp+D8h] [rbp-78h]
  char v56; // [rsp+E0h] [rbp-70h]
  char v57; // [rsp+E8h] [rbp-68h]
  __int128 v58; // [rsp+F0h] [rbp-60h] BYREF
  GUID v59; // [rsp+100h] [rbp-50h] BYREF
  __int128 v60; // [rsp+110h] [rbp-40h] BYREF
  char v61[16]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v62; // [rsp+130h] [rbp-20h]

  v2 = 0;
  *(_QWORD *)&v59.Data1 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v60 = 0LL;
  v6 = 0;
  v57 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  LOBYTE(v54) = 0;
  v8 = 0;
  v58 = 0LL;
  *(_OWORD *)v61 = 0LL;
  v62 = 0LL;
  if ( !MasterIrp )
    goto LABEL_29;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x28 )
    goto LABEL_29;
  if ( MasterIrp->Type != 1 )
    goto LABEL_29;
  Flink = (unsigned int)MasterIrp->ThreadListEntry.Flink;
  if ( Flink > 0x20 )
    goto LABEL_29;
  v11 = Flink + 36;
  if ( v11 < 0x28 )
    v11 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v11 || Options < v11 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
  {
LABEL_29:
    TcgProperties = -1073741811;
    goto LABEL_30;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x40 )
  {
    TcgProperties = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v13 = (int)MasterIrp->ThreadListEntry.Flink;
  v14 = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)&v59.Data1 = LODWORD(MasterIrp->MdlAddress);
  v57 = v13;
  if ( (v59.Data1 & 1) != 0 )
  {
    v54 = MasterIrp->AssociatedIrp.MasterIrp;
    v15 = *(_QWORD *)&MasterIrp->Flags;
  }
  else
  {
    LODWORD(v15) = MasterIrp->Flags;
    LOBYTE(v54) = 0;
  }
  v56 = v15;
  TcgProperties = RaidGetTcgProperties(a1, v61);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
    {
      MdlAddress = (int)MasterIrp->MdlAddress;
      v17 = 1;
      if ( (MdlAddress & 1) != 0 )
      {
        LOBYTE(v17) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v18 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v17,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v14,
                v61);
      }
      else
      {
        if ( (MdlAddress & 2) == 0 )
        {
          TcgProperties = -1073741811;
          goto LABEL_27;
        }
        v18 = RaidAssignTcgNamespaceLockingObject(
                a1,
                MasterIrp->Flags,
                (int)MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                (__int64)v14,
                v61);
      }
      TcgProperties = v18;
      if ( v18 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  if ( TcgProperties >= 0 )
    goto LABEL_35;
  v8 = v56;
  v6 = 1;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v6 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v58);
    if ( (byte_140173447 & 2) != 0 )
    {
      v20 = (const wchar_t *)&unk_140153274;
      if ( *(_QWORD *)(a1 + 5144) )
        v20 = *(const wchar_t **)(a1 + 5144);
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        (__int64)v20,
        a1 + 5128,
        v19,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v60,
        a1 + 5128,
        *((const wchar_t **)&v58 + 1),
        byte_14015304C,
        byte_14015304C,
        byte_14015304C,
        v20,
        "TcgAssignLockingObject",
        v61,
        TcgProperties,
        v59.Data1,
        v57,
        v8,
        (char)v54,
        0);
    }
  }
LABEL_35:
  v21 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v21 )
    goto LABEL_101;
  v59 = 0LL;
  IoGetActivityIdIrp(Irp, &v59);
  v23 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v23->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_101;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_100;
  }
  if ( v23->MajorFunction != 15 )
  {
    if ( v23->MajorFunction != 27 )
      goto LABEL_101;
    if ( v23->MinorFunction == 7 && !v23->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v45) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v22, (__int64)v23, &v59, Irp, v45, pszDest);
      }
      goto LABEL_101;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_101;
    v25 = &EventPnpRequestComplete;
LABEL_100:
    LODWORD(v45) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v59, Irp, v45);
    goto LABEL_101;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_101;
  SecurityContext = (__int64)v23->Parameters.Create.SecurityContext;
  v27 = 0LL;
  v52 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v39 = *(_BYTE *)(SecurityContext + 72);
    v27 = *(_BYTE **)(SecurityContext + 32);
    v28 = *(_BYTE *)(SecurityContext + 11);
    v38 = *(_BYTE *)(SecurityContext + 4);
    if ( *(_BYTE *)(SecurityContext + 2) )
      goto LABEL_101;
LABEL_75:
    LOBYTE(v22) = v39 - 8;
    if ( (v22 & 0x5D) != 0 )
      goto LABEL_101;
    v40 = *(_BYTE *)(SecurityContext + 3);
    if ( v40 == 1 || !v27 || !v28 )
      goto LABEL_94;
    v41 = *v27 & 0x7F;
    if ( v41 == 114 || v41 == 115 )
    {
      v22 = (unsigned __int64)&v27[v28];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v27 + 8) > v22 )
        goto LABEL_92;
      v30 = v27[2];
      v29 = v27[1] & 0xF;
      v31 = v27[3];
    }
    else
    {
      v22 = (unsigned __int64)&v27[v28];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v27 + 8) > v22 )
        goto LABEL_92;
      v42 = v27 + 13;
      v29 = v27[2] & 0xF;
      v43 = v28;
      if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
        v43 = (unsigned __int8)v27[7] + 8;
      v22 = (unsigned __int64)&v27[v43];
      if ( (unsigned __int64)v42 <= v22 )
        v30 = v27[12];
      if ( (unsigned __int64)(v27 + 14) > v22 )
        v31 = 0;
      else
        v31 = *v42;
    }
    LOBYTE(SecurityContext) = 1;
LABEL_92:
    if ( (_BYTE)SecurityContext )
      v32 = 1;
LABEL_94:
    if ( byte_140173441 < 0 )
    {
      if ( !v32 )
      {
        v31 = 0;
        v30 = 0;
        v29 = 0;
      }
      LOBYTE(v50) = v31;
      LOBYTE(v49) = v30;
      LOBYTE(v48) = v29;
      LOBYTE(v47) = v38;
      LOBYTE(pszDest) = v40;
      LODWORD(v45) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v22, SecurityContext, &v59, Irp, v45, pszDest, v47, v48, v49, v50, Irp);
    }
    goto LABEL_101;
  }
  v33 = 0LL;
  v51 = 0;
  if ( !*(_DWORD *)(SecurityContext + 20) )
  {
    v34 = 0LL;
    v53 = 0;
    v55 = *(_DWORD *)(SecurityContext + 56);
    if ( v55 )
    {
      do
      {
        v22 = *(unsigned int *)(SecurityContext + 4 * v34 + 120);
        if ( (unsigned int)v22 >= 0x80 )
        {
          v35 = *(unsigned int *)(SecurityContext + 16);
          if ( (unsigned int)v22 < (unsigned int)v35 )
          {
            v36 = (unsigned int)v22;
            v37 = *(_DWORD *)(v22 + SecurityContext) - 64;
            if ( v37 )
            {
              v22 = (unsigned int)(v37 - 1);
              if ( (_DWORD)v22 )
              {
                if ( (_DWORD)v22 == 1 )
                {
                  v22 = v36 + 40;
                  if ( v36 + 40 <= v35 )
                  {
                    if ( *(_DWORD *)(v36 + SecurityContext + 12) )
                      v33 = (char *)(v36 + SecurityContext + 32);
                    v27 = *(_BYTE **)(v36 + SecurityContext + 24);
LABEL_60:
                    v38 = *(_BYTE *)(v36 + SecurityContext + 8);
                    v28 = *(_BYTE *)(v36 + SecurityContext + 9);
                    goto LABEL_69;
                  }
                }
              }
              else
              {
                v22 = v36 + 56;
                if ( v36 + 56 <= v35 )
                {
                  v51 = 1;
                  if ( *(_BYTE *)(v36 + SecurityContext + 10) )
                    v33 = (char *)(v36 + SecurityContext + 24);
                  v27 = *(_BYTE **)(v36 + SecurityContext + 16);
                  v28 = *(_BYTE *)(v36 + SecurityContext + 9);
                  v52 = *(_BYTE *)(v36 + SecurityContext + 8);
                }
              }
            }
            else
            {
              v22 = v36 + 40;
              if ( v36 + 40 <= v35 )
              {
                if ( *(_BYTE *)(v36 + SecurityContext + 10) )
                  v33 = (char *)(v36 + SecurityContext + 24);
                v27 = *(_BYTE **)(v36 + SecurityContext + 16);
                goto LABEL_60;
              }
            }
            if ( v51 )
              break;
          }
        }
        v34 = (unsigned int)(v53 + 1);
        v53 = v34;
      }
      while ( (unsigned int)v34 < v55 );
      v38 = v52;
LABEL_69:
      if ( v33 )
      {
        v39 = *v33;
        v32 = 0;
        goto LABEL_75;
      }
    }
  }
LABEL_101:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
