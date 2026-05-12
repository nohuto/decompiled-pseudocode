/*
 * XREFs of RaidUnitStorageTcgSetLockingObject @ 0x14008AD88
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdi
  int v3; // r12d
  PIRP v4; // rbx
  char v6; // si
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int TcgProperties; // r13d
  int Flags; // eax
  int MdlAddress; // r8d
  char v13; // r10
  char v14; // r11
  __int64 v15; // rsi
  const wchar_t *v16; // r15
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 CurrentStackLocation; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // si
  char v25; // r10
  char v26; // di
  char v27; // r11
  char v28; // r14
  char *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r15
  char v35; // cl
  char v36; // al
  char v37; // r8
  char *v38; // r11
  unsigned int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-130h]
  __int64 v42; // [rsp+28h] [rbp-128h]
  __int64 v43; // [rsp+30h] [rbp-120h]
  __int64 v44; // [rsp+38h] [rbp-118h]
  int v45[2]; // [rsp+40h] [rbp-110h]
  __int64 v46; // [rsp+48h] [rbp-108h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  int v49; // [rsp+D4h] [rbp-7Ch]
  int v50; // [rsp+D4h] [rbp-7Ch]
  _IRP *v51; // [rsp+D8h] [rbp-78h]
  unsigned int v52; // [rsp+D8h] [rbp-78h]
  __int128 v53; // [rsp+E8h] [rbp-68h] BYREF
  GUID v54; // [rsp+F8h] [rbp-58h] BYREF
  char pszDest[16]; // [rsp+108h] [rbp-48h] BYREF
  __int128 v56; // [rsp+118h] [rbp-38h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  *(_QWORD *)&v54.Data1 = Irp;
  v51 = 0LL;
  v4 = Irp;
  v6 = 0;
  v53 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v56 = 0LL;
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v51 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_21;
  Information = MasterIrp->IoStatus.Information;
  if ( Information > 0x20 )
    goto LABEL_21;
  v9 = Information + 60;
  if ( v9 < 0x40 )
    v9 = 64;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v9 || Options < v9 )
    goto LABEL_21;
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    TcgProperties = -1073741637;
    goto LABEL_22;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    Flags = MasterIrp->Flags;
    if ( Flags < 1 || Flags > 3 )
    {
LABEL_21:
      TcgProperties = -1073741811;
      goto LABEL_22;
    }
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    v6 = 1;
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
      {
        MdlAddress = (int)MasterIrp->MdlAddress;
        v13 = MdlAddress;
        LOBYTE(MdlAddress) = MdlAddress & 1;
        TcgProperties = RaidSetTcgLockingObject(
                          a1,
                          HIDWORD(MasterIrp->MdlAddress),
                          MdlAddress,
                          MasterIrp->Flags,
                          ((__int64)MasterIrp->MdlAddress & 2) != 0,
                          *((_BYTE *)&MasterIrp->Flags + 4),
                          (v13 & 4) != 0,
                          (__int64)&MasterIrp->Flags + 5,
                          MasterIrp->IoStatus.Information,
                          (__int64)&MasterIrp->IoStatus.Information + 4,
                          pszDest);
      }
      else
      {
        TcgProperties = -1073741637;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  }
LABEL_22:
  v4->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      v49 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v53);
      v15 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v16 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(v15 + 5144) )
          v16 = *(const wchar_t **)(v15 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          LODWORD(v51->IoStatus.Information),
          *((unsigned __int8 *)&v51->Flags + 4),
          (int)v51->Flags,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          v14,
          SBYTE1(v49),
          SBYTE2(v49),
          a1 + 2104,
          v15 + 5128,
          *((const wchar_t **)&v53 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v16,
          "TcgSetLockingObject",
          pszDest,
          TcgProperties,
          (char)v51->MdlAddress,
          v51->Flags,
          *((_BYTE *)&v51->Flags + 4),
          v51->IoStatus.Information,
          HIDWORD(v51->MdlAddress));
        v4 = *(PIRP *)&v54.Data1;
      }
    }
  }
  v17 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v4->Tail.CompletionKey + 21) = -84;
  v4->IoStatus.Status = TcgProperties;
  if ( !v17 )
  {
    v54 = 0LL;
    IoGetActivityIdIrp(v4, &v54);
    CurrentStackLocation = (__int64)v4->Tail.Overlay.CurrentStackLocation;
    if ( *(_BYTE *)CurrentStackLocation == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_94;
      v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_93;
    }
    if ( *(_BYTE *)CurrentStackLocation != 15 )
    {
      if ( *(_BYTE *)CurrentStackLocation != 27 )
        goto LABEL_94;
      if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v20 = (int *)v4->IoStatus.Information;
          if ( v20 )
            v3 = *v20;
          LODWORD(v42) = v4->IoStatus.Status;
          LODWORD(v41) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v18, CurrentStackLocation, &v54, v4, v41, v42);
        }
        goto LABEL_94;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_94;
      v21 = &EventPnpRequestComplete;
LABEL_93:
      LODWORD(v41) = v4->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v18, v21, &v54, v4, v41);
      goto LABEL_94;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_94;
    v22 = *(_QWORD *)(CurrentStackLocation + 8);
    v23 = 0LL;
    v47 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( *(_BYTE *)(v22 + 2) != 40 )
    {
      v35 = *(_BYTE *)(v22 + 72);
      v23 = *(_BYTE **)(v22 + 32);
      v24 = *(_BYTE *)(v22 + 11);
      v34 = *(_BYTE *)(v22 + 4);
      if ( *(_BYTE *)(v22 + 2) )
        goto LABEL_94;
LABEL_68:
      LOBYTE(v18) = v35 - 8;
      if ( (v18 & 0x5D) != 0 )
        goto LABEL_94;
      if ( *(_BYTE *)(v22 + 3) == 1 || !v23 || !v24 )
        goto LABEL_87;
      v36 = *v23 & 0x7F;
      if ( v36 == 114 || v36 == 115 )
      {
        v18 = (unsigned __int64)&v23[v24];
        v37 = 0;
        if ( (unsigned __int64)(v23 + 8) > v18 )
          goto LABEL_85;
        v26 = v23[2];
        v25 = v23[1] & 0xF;
        v27 = v23[3];
      }
      else
      {
        v18 = (unsigned __int64)&v23[v24];
        v37 = 0;
        if ( (unsigned __int64)(v23 + 8) > v18 )
          goto LABEL_85;
        v38 = v23 + 13;
        v25 = v23[2] & 0xF;
        v39 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v39 = (unsigned __int8)v23[7] + 8;
        v18 = (unsigned __int64)&v23[v39];
        if ( (unsigned __int64)v38 <= v18 )
          v26 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v18 )
          v27 = 0;
        else
          v27 = *v38;
      }
      v37 = 1;
LABEL_85:
      if ( v37 )
        v28 = 1;
LABEL_87:
      if ( byte_140173441 < 0 )
      {
        if ( !v28 )
        {
          v27 = 0;
          v26 = 0;
          v25 = 0;
        }
        LOBYTE(v46) = v27;
        LOBYTE(v45[0]) = v26;
        LOBYTE(v44) = v25;
        LOBYTE(v43) = v34;
        LOBYTE(v42) = *(_BYTE *)(v22 + 3);
        LODWORD(v41) = v4->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v54, v4, v41, v42, v43, v44, *(_QWORD *)v45, v46, v4);
      }
      goto LABEL_94;
    }
    v29 = 0LL;
    v48 = 0;
    if ( !*(_DWORD *)(v22 + 20) )
    {
      v30 = 0LL;
      v50 = 0;
      v52 = *(_DWORD *)(v22 + 56);
      if ( v52 )
      {
        do
        {
          v18 = *(unsigned int *)(v22 + 4 * v30 + 120);
          if ( (unsigned int)v18 >= 0x80 )
          {
            v31 = *(unsigned int *)(v22 + 16);
            if ( (unsigned int)v18 < (unsigned int)v31 )
            {
              v32 = (unsigned int)v18;
              v33 = *(_DWORD *)(v18 + v22) - 64;
              if ( v33 )
              {
                v18 = (unsigned int)(v33 - 1);
                if ( (_DWORD)v18 )
                {
                  if ( (_DWORD)v18 == 1 )
                  {
                    v18 = v32 + 40;
                    if ( v32 + 40 <= v31 )
                    {
                      if ( *(_DWORD *)(v32 + v22 + 12) )
                        v29 = (char *)(v32 + v22 + 32);
                      v23 = *(_BYTE **)(v32 + v22 + 24);
LABEL_53:
                      v34 = *(_BYTE *)(v32 + v22 + 8);
                      v24 = *(_BYTE *)(v32 + v22 + 9);
                      goto LABEL_62;
                    }
                  }
                }
                else
                {
                  v18 = v32 + 56;
                  if ( v32 + 56 <= v31 )
                  {
                    v48 = 1;
                    if ( *(_BYTE *)(v32 + v22 + 10) )
                      v29 = (char *)(v32 + v22 + 24);
                    v23 = *(_BYTE **)(v32 + v22 + 16);
                    v24 = *(_BYTE *)(v32 + v22 + 9);
                    v47 = *(_BYTE *)(v32 + v22 + 8);
                  }
                }
              }
              else
              {
                v18 = v32 + 40;
                if ( v32 + 40 <= v31 )
                {
                  if ( *(_BYTE *)(v32 + v22 + 10) )
                    v29 = (char *)(v32 + v22 + 24);
                  v23 = *(_BYTE **)(v32 + v22 + 16);
                  goto LABEL_53;
                }
              }
              if ( v48 )
                break;
            }
          }
          v30 = (unsigned int)(v50 + 1);
          v50 = v30;
        }
        while ( (unsigned int)v30 < v52 );
        v34 = v47;
LABEL_62:
        if ( v29 )
        {
          v35 = *v29;
          v28 = 0;
          goto LABEL_68;
        }
      }
    }
  }
LABEL_94:
  IofCompleteRequest(v4, 0);
  return (unsigned int)TcgProperties;
}
