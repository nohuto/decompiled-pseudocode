/*
 * XREFs of RaidAdapterStorageTcgSetLockingObject @ 0x140086498
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
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

__int64 __fastcall RaidAdapterStorageTcgSetLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // r15
  int v3; // edi
  char v6; // r12
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int TcgProperties; // esi
  int Flags; // eax
  int MdlAddress; // r8d
  char v13; // cl
  const wchar_t *v14; // r10
  bool v15; // zf
  unsigned __int64 v16; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r15
  char v23; // r10
  char v24; // bl
  char v25; // r11
  char v26; // r12
  char *v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r13
  char v33; // cl
  char v34; // al
  char v35; // r8
  char *v36; // r11
  unsigned int v37; // eax
  __int64 v39; // [rsp+20h] [rbp-130h]
  __int64 v40; // [rsp+28h] [rbp-128h]
  __int64 v41; // [rsp+30h] [rbp-120h]
  __int64 v42; // [rsp+38h] [rbp-118h]
  int v43[2]; // [rsp+40h] [rbp-110h]
  __int64 v44; // [rsp+48h] [rbp-108h]
  char v45; // [rsp+D0h] [rbp-80h]
  char v46; // [rsp+D1h] [rbp-7Fh]
  int v47; // [rsp+D4h] [rbp-7Ch]
  _IRP *v48; // [rsp+D8h] [rbp-78h]
  unsigned int v49; // [rsp+D8h] [rbp-78h]
  GUID v50; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v53; // [rsp+110h] [rbp-40h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  v48 = 0LL;
  v6 = 0;
  v51 = 0LL;
  v50 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v53 = 0LL;
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v48 = MasterIrp;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    v6 = 1;
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
      {
        MdlAddress = (int)MasterIrp->MdlAddress;
        v13 = MdlAddress;
        LOBYTE(MdlAddress) = MdlAddress & 1;
        TcgProperties = RaidSetTcgLockingObject(
                          a1,
                          HIDWORD(MasterIrp->MdlAddress),
                          MdlAddress,
                          MasterIrp->Flags,
                          (v13 & 2) != 0,
                          *((_BYTE *)&MasterIrp->Flags + 4),
                          ((__int64)MasterIrp->MdlAddress & 4) != 0,
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
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  }
LABEL_22:
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v50);
      if ( (byte_140173447 & 2) != 0 )
      {
        v14 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v14 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          LODWORD(v48->IoStatus.Information),
          *((unsigned __int8 *)&v48->Flags + 4),
          (int)v48->Flags,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v51,
          a1 + 5128,
          *(const wchar_t **)v50.Data4,
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v14,
          "TcgSetLockingObject",
          pszDest,
          TcgProperties,
          (char)v48->MdlAddress,
          v48->Flags,
          *((_BYTE *)&v48->Flags + 4),
          v48->IoStatus.Information,
          HIDWORD(v48->MdlAddress));
      }
    }
  }
  v15 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( !v15 )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(Irp, &v50);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_94;
      v19 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_93;
    }
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction != 27 )
        goto LABEL_94;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v18 = (int *)Irp->IoStatus.Information;
          if ( v18 )
            v3 = *v18;
          LODWORD(v40) = Irp->IoStatus.Status;
          LODWORD(v39) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v16, (__int64)CurrentStackLocation, &v50, Irp, v39, v40);
        }
        goto LABEL_94;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_94;
      v19 = &EventPnpRequestComplete;
LABEL_93:
      LODWORD(v39) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v16, v19, &v50, Irp, v39);
      goto LABEL_94;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_94;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v21 = 0LL;
    v45 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v33 = *(_BYTE *)(SecurityContext + 72);
      v21 = *(_BYTE **)(SecurityContext + 32);
      v22 = *(_BYTE *)(SecurityContext + 11);
      v32 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_94;
LABEL_68:
      LOBYTE(v16) = v33 - 8;
      if ( (v16 & 0x5D) != 0 )
        goto LABEL_94;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v21 || !v22 )
        goto LABEL_87;
      v34 = *v21 & 0x7F;
      if ( v34 == 114 || v34 == 115 )
      {
        v16 = (unsigned __int64)&v21[v22];
        v35 = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_85;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
      else
      {
        v16 = (unsigned __int64)&v21[v22];
        v35 = 0;
        if ( (unsigned __int64)(v21 + 8) > v16 )
          goto LABEL_85;
        v36 = v21 + 13;
        v23 = v21[2] & 0xF;
        v37 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v37 = (unsigned __int8)v21[7] + 8;
        v16 = (unsigned __int64)&v21[v37];
        if ( (unsigned __int64)v36 <= v16 )
          v24 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v16 )
          v25 = 0;
        else
          v25 = *v36;
      }
      v35 = 1;
LABEL_85:
      if ( v35 )
        v26 = 1;
LABEL_87:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        LOBYTE(v44) = v25;
        LOBYTE(v43[0]) = v24;
        LOBYTE(v42) = v23;
        LOBYTE(v41) = v32;
        LOBYTE(v40) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v39) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v16,
          SecurityContext,
          &v50,
          Irp,
          v39,
          v40,
          v41,
          v42,
          *(_QWORD *)v43,
          v44,
          Irp);
      }
      goto LABEL_94;
    }
    v27 = 0LL;
    v46 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v28 = 0LL;
      v47 = 0;
      v49 = *(_DWORD *)(SecurityContext + 56);
      if ( v49 )
      {
        do
        {
          v16 = *(unsigned int *)(SecurityContext + 4 * v28 + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v29 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v16 < (unsigned int)v29 )
            {
              v30 = (unsigned int)v16;
              v31 = *(_DWORD *)(v16 + SecurityContext) - 64;
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
                      if ( *(_DWORD *)(v30 + SecurityContext + 12) )
                        v27 = (char *)(v30 + SecurityContext + 32);
                      v21 = *(_BYTE **)(v30 + SecurityContext + 24);
LABEL_53:
                      v32 = *(_BYTE *)(v30 + SecurityContext + 8);
                      v22 = *(_BYTE *)(v30 + SecurityContext + 9);
                      goto LABEL_62;
                    }
                  }
                }
                else
                {
                  v16 = v30 + 56;
                  if ( v30 + 56 <= v29 )
                  {
                    v46 = 1;
                    if ( *(_BYTE *)(v30 + SecurityContext + 10) )
                      v27 = (char *)(v30 + SecurityContext + 24);
                    v21 = *(_BYTE **)(v30 + SecurityContext + 16);
                    v22 = *(_BYTE *)(v30 + SecurityContext + 9);
                    v45 = *(_BYTE *)(v30 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v16 = v30 + 40;
                if ( v30 + 40 <= v29 )
                {
                  if ( *(_BYTE *)(v30 + SecurityContext + 10) )
                    v27 = (char *)(v30 + SecurityContext + 24);
                  v21 = *(_BYTE **)(v30 + SecurityContext + 16);
                  goto LABEL_53;
                }
              }
              if ( v46 )
                break;
            }
          }
          v28 = (unsigned int)(v47 + 1);
          v47 = v28;
        }
        while ( (unsigned int)v28 < v49 );
        v32 = v45;
LABEL_62:
        if ( v27 )
        {
          v33 = *v27;
          v26 = 0;
          goto LABEL_68;
        }
      }
    }
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
