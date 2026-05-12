/*
 * XREFs of RaidUnitStorageTcgAssignLockingObject @ 0x1400880D0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v6; // r13
  _IRP *MasterIrp; // rbx
  char v8; // r12
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v11; // eax
  int TcgProperties; // esi
  int v13; // ecx
  _IRP *v14; // r12
  __int64 v15; // rax
  int v16; // r9d
  int MdlAddress; // ecx
  int v18; // eax
  char v19; // r11
  __int64 v20; // r9
  const wchar_t *v21; // rax
  __int64 v22; // r8
  int v23; // r9d
  const wchar_t *v24; // rbx
  bool v25; // zf
  unsigned __int64 v26; // rcx
  _IO_STACK_LOCATION *v27; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v31; // r9
  unsigned __int8 v32; // r15
  char v33; // r10
  char v34; // bl
  char v35; // r11
  char v36; // r12
  char *v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __int64 v40; // r8
  int v41; // ecx
  char v42; // r13
  char v43; // cl
  char v44; // r8
  char v45; // al
  char *v46; // r11
  unsigned int v47; // eax
  __int64 v49; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v51; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR v52; // [rsp+38h] [rbp-118h]
  __int64 v53; // [rsp+40h] [rbp-110h]
  __int64 v54; // [rsp+48h] [rbp-108h]
  char v55; // [rsp+D0h] [rbp-80h]
  char v56; // [rsp+D1h] [rbp-7Fh]
  char v57; // [rsp+D8h] [rbp-78h]
  int v58; // [rsp+D8h] [rbp-78h]
  int v59; // [rsp+D8h] [rbp-78h]
  _IRP *v60; // [rsp+E0h] [rbp-70h]
  unsigned int v61; // [rsp+E0h] [rbp-70h]
  char v62; // [rsp+E8h] [rbp-68h]
  __int128 v63; // [rsp+F0h] [rbp-60h] BYREF
  GUID v64; // [rsp+100h] [rbp-50h] BYREF
  char v65[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v66; // [rsp+120h] [rbp-30h]

  v2 = 0;
  *(_QWORD *)&v64.Data1 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  v62 = 0;
  v63 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  LOBYTE(v60) = 0;
  v8 = 0;
  *(_OWORD *)v65 = 0LL;
  v66 = 0LL;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v6 = 1;
  v13 = (int)MasterIrp->ThreadListEntry.Flink;
  v14 = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)&v64.Data1 = LODWORD(MasterIrp->MdlAddress);
  v62 = v13;
  if ( (v64.Data1 & 1) != 0 )
  {
    v60 = MasterIrp->AssociatedIrp.MasterIrp;
    v15 = *(_QWORD *)&MasterIrp->Flags;
  }
  else
  {
    LODWORD(v15) = MasterIrp->Flags;
    LOBYTE(v60) = 0;
  }
  v57 = v15;
  TcgProperties = RaidGetTcgProperties(a1, v65);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
    {
      MdlAddress = (int)MasterIrp->MdlAddress;
      if ( (MdlAddress & 1) != 0 )
      {
        LOBYTE(v16) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v18 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v16,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v14,
                v65);
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
                v65);
      }
      TcgProperties = v18;
      if ( v18 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( TcgProperties >= 0 )
    goto LABEL_35;
  v8 = v57;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v6 )
  {
    v58 = *(_DWORD *)(a1 + 104);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v63);
    v20 = *(_QWORD *)(a1 + 24);
    if ( (byte_140173447 & 2) != 0 )
    {
      v21 = *(const wchar_t **)(v20 + 5144);
      v22 = v20 + 5128;
      v23 = *(_DWORD *)(v20 + 56);
      v24 = (const wchar_t *)&unk_140153274;
      if ( v21 )
        v24 = v21;
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        v22,
        v23,
        v19,
        SBYTE1(v58),
        SBYTE2(v58),
        a1 + 2104,
        v22,
        *((const wchar_t **)&v63 + 1),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v24,
        "TcgAssignLockingObject",
        v65,
        TcgProperties,
        v64.Data1,
        v62,
        v8,
        (char)v60,
        0);
    }
  }
LABEL_35:
  v25 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v25 )
    goto LABEL_101;
  v64 = 0LL;
  IoGetActivityIdIrp(Irp, &v64);
  v27 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v27->MajorFunction == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_101;
    v29 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_100;
  }
  if ( v27->MajorFunction != 15 )
  {
    if ( v27->MajorFunction != 27 )
      goto LABEL_101;
    if ( v27->MinorFunction == 7 && !v27->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v49) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v26, (__int64)v27, &v64, Irp, v49, pszDest);
      }
      goto LABEL_101;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_101;
    v29 = &EventPnpRequestComplete;
LABEL_100:
    LODWORD(v49) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v26, v29, &v64, Irp, v49);
    goto LABEL_101;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_101;
  SecurityContext = (__int64)v27->Parameters.Create.SecurityContext;
  v31 = 0LL;
  v55 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v43 = *(_BYTE *)(SecurityContext + 72);
    v31 = *(_BYTE **)(SecurityContext + 32);
    v32 = *(_BYTE *)(SecurityContext + 11);
    v42 = *(_BYTE *)(SecurityContext + 4);
    if ( *(_BYTE *)(SecurityContext + 2) )
      goto LABEL_101;
LABEL_75:
    LOBYTE(v26) = v43 - 8;
    if ( (v26 & 0x5D) != 0 )
      goto LABEL_101;
    v44 = *(_BYTE *)(SecurityContext + 3);
    if ( v44 == 1 || !v31 || !v32 )
      goto LABEL_94;
    v45 = *v31 & 0x7F;
    if ( v45 == 114 || v45 == 115 )
    {
      v26 = (unsigned __int64)&v31[v32];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v31 + 8) > v26 )
        goto LABEL_92;
      v34 = v31[2];
      v33 = v31[1] & 0xF;
      v35 = v31[3];
    }
    else
    {
      v26 = (unsigned __int64)&v31[v32];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v31 + 8) > v26 )
        goto LABEL_92;
      v46 = v31 + 13;
      v33 = v31[2] & 0xF;
      v47 = v32;
      if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
        v47 = (unsigned __int8)v31[7] + 8;
      v26 = (unsigned __int64)&v31[v47];
      if ( (unsigned __int64)v46 <= v26 )
        v34 = v31[12];
      if ( (unsigned __int64)(v31 + 14) > v26 )
        v35 = 0;
      else
        v35 = *v46;
    }
    LOBYTE(SecurityContext) = 1;
LABEL_92:
    if ( (_BYTE)SecurityContext )
      v36 = 1;
LABEL_94:
    if ( byte_140173441 < 0 )
    {
      if ( !v36 )
      {
        v35 = 0;
        v34 = 0;
        v33 = 0;
      }
      LOBYTE(v54) = v35;
      LOBYTE(v53) = v34;
      LOBYTE(v52) = v33;
      LOBYTE(v51) = v42;
      LOBYTE(pszDest) = v44;
      LODWORD(v49) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v26, SecurityContext, &v64, Irp, v49, pszDest, v51, v52, v53, v54, Irp);
    }
    goto LABEL_101;
  }
  v37 = 0LL;
  v56 = 0;
  if ( !*(_DWORD *)(SecurityContext + 20) )
  {
    v38 = 0LL;
    v59 = 0;
    v61 = *(_DWORD *)(SecurityContext + 56);
    if ( v61 )
    {
      do
      {
        v26 = *(unsigned int *)(SecurityContext + 4 * v38 + 120);
        if ( (unsigned int)v26 >= 0x80 )
        {
          v39 = *(unsigned int *)(SecurityContext + 16);
          if ( (unsigned int)v26 < (unsigned int)v39 )
          {
            v40 = (unsigned int)v26;
            v41 = *(_DWORD *)(v26 + SecurityContext) - 64;
            if ( v41 )
            {
              v26 = (unsigned int)(v41 - 1);
              if ( (_DWORD)v26 )
              {
                if ( (_DWORD)v26 == 1 )
                {
                  v26 = v40 + 40;
                  if ( v40 + 40 <= v39 )
                  {
                    if ( *(_DWORD *)(v40 + SecurityContext + 12) )
                      v37 = (char *)(v40 + SecurityContext + 32);
                    v31 = *(_BYTE **)(v40 + SecurityContext + 24);
LABEL_60:
                    v42 = *(_BYTE *)(v40 + SecurityContext + 8);
                    v32 = *(_BYTE *)(v40 + SecurityContext + 9);
                    goto LABEL_69;
                  }
                }
              }
              else
              {
                v26 = v40 + 56;
                if ( v40 + 56 <= v39 )
                {
                  v56 = 1;
                  if ( *(_BYTE *)(v40 + SecurityContext + 10) )
                    v37 = (char *)(v40 + SecurityContext + 24);
                  v31 = *(_BYTE **)(v40 + SecurityContext + 16);
                  v32 = *(_BYTE *)(v40 + SecurityContext + 9);
                  v55 = *(_BYTE *)(v40 + SecurityContext + 8);
                }
              }
            }
            else
            {
              v26 = v40 + 40;
              if ( v40 + 40 <= v39 )
              {
                if ( *(_BYTE *)(v40 + SecurityContext + 10) )
                  v37 = (char *)(v40 + SecurityContext + 24);
                v31 = *(_BYTE **)(v40 + SecurityContext + 16);
                goto LABEL_60;
              }
            }
            if ( v56 )
              break;
          }
        }
        v38 = (unsigned int)(v59 + 1);
        v59 = v38;
      }
      while ( (unsigned int)v38 < v61 );
      v42 = v55;
LABEL_69:
      if ( v37 )
      {
        v43 = *v37;
        v36 = 0;
        goto LABEL_75;
      }
    }
  }
LABEL_101:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
