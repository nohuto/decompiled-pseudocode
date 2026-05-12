/*
 * XREFs of RaidAdapterStorageTcgActivateLocking @ 0x140083308
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // r14
  char v6; // dl
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // r15d
  int v11; // edx
  int v12; // r8d
  const wchar_t *v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r14
  char v22; // r10
  char v23; // bl
  char v24; // r11
  char v25; // r12
  char *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // al
  char v34; // r8
  char *v35; // r11
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-120h]
  __int64 v41; // [rsp+38h] [rbp-118h]
  __int64 v42; // [rsp+40h] [rbp-110h]
  __int64 v43; // [rsp+48h] [rbp-108h]
  char v44; // [rsp+D0h] [rbp-80h]
  char v45; // [rsp+D1h] [rbp-7Fh]
  int v46; // [rsp+D4h] [rbp-7Ch]
  _IRP *v47; // [rsp+D8h] [rbp-78h]
  unsigned int v48; // [rsp+D8h] [rbp-78h]
  GUID v49; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-60h] BYREF
  char v51[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v52; // [rsp+110h] [rbp-40h]

  v2 = 0;
  v47 = 0LL;
  v50 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v49 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v47 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      TcgProperties = RaidGetTcgProperties(a1, v51);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v12) = BYTE5(MasterIrp->MdlAddress);
        LOBYTE(v11) = BYTE4(MasterIrp->MdlAddress);
        TcgProperties = RaidActivateTcgLocking(a1, v11, v12, MasterIrp->Flags, (__int64)(&MasterIrp->Flags + 1), v51);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
      v6 = 1;
    }
  }
  else
  {
LABEL_14:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v49);
      if ( (byte_140173447 & 2) != 0 )
      {
        v13 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v13 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          BYTE5(v47->MdlAddress),
          BYTE4(v47->MdlAddress),
          (__int64)v13,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v50,
          a1 + 5128,
          *(const wchar_t **)v49.Data4,
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v13,
          "TcgActivateLocking",
          v51,
          TcgProperties,
          BYTE4(v47->MdlAddress),
          BYTE5(v47->MdlAddress),
          v47->Flags,
          0,
          0);
      }
    }
  }
  v14 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( !v14 )
  {
    v49 = 0LL;
    IoGetActivityIdIrp(Irp, &v49);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_87;
      v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_86;
    }
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction != 27 )
        goto LABEL_87;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v2 = *Information;
          LODWORD(pszDest) = Irp->IoStatus.Status;
          LODWORD(v38) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v15, (__int64)CurrentStackLocation, &v49, Irp, v38, pszDest);
        }
        goto LABEL_87;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_87;
      v18 = &EventPnpRequestComplete;
LABEL_86:
      LODWORD(v38) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v15, v18, &v49, Irp, v38);
      goto LABEL_87;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_87;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v20 = 0LL;
    v45 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v32 = *(_BYTE *)(SecurityContext + 72);
      v20 = *(_BYTE **)(SecurityContext + 32);
      v21 = *(_BYTE *)(SecurityContext + 11);
      v31 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_87;
LABEL_61:
      LOBYTE(v15) = v32 - 8;
      if ( (v15 & 0x5D) != 0 )
        goto LABEL_87;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v20 || !v21 )
        goto LABEL_80;
      v33 = *v20 & 0x7F;
      if ( v33 == 114 || v33 == 115 )
      {
        v15 = (unsigned __int64)&v20[v21];
        v34 = 0;
        if ( (unsigned __int64)(v20 + 8) > v15 )
          goto LABEL_78;
        v23 = v20[2];
        v22 = v20[1] & 0xF;
        v24 = v20[3];
      }
      else
      {
        v15 = (unsigned __int64)&v20[v21];
        v34 = 0;
        if ( (unsigned __int64)(v20 + 8) > v15 )
          goto LABEL_78;
        v35 = v20 + 13;
        v22 = v20[2] & 0xF;
        v36 = v21;
        if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
          v36 = (unsigned __int8)v20[7] + 8;
        v15 = (unsigned __int64)&v20[v36];
        if ( (unsigned __int64)v35 <= v15 )
          v23 = v20[12];
        if ( (unsigned __int64)(v20 + 14) > v15 )
          v24 = 0;
        else
          v24 = *v35;
      }
      v34 = 1;
LABEL_78:
      if ( v34 )
        v25 = 1;
LABEL_80:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        LOBYTE(v43) = v24;
        LOBYTE(v42) = v23;
        LOBYTE(v41) = v22;
        LOBYTE(v40) = v31;
        LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v38) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v15, SecurityContext, &v49, Irp, v38, pszDest, v40, v41, v42, v43, Irp);
      }
      goto LABEL_87;
    }
    v26 = 0LL;
    v44 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v27 = 0LL;
      v46 = 0;
      v48 = *(_DWORD *)(SecurityContext + 56);
      if ( v48 )
      {
        do
        {
          v15 = *(unsigned int *)(SecurityContext + 4 * v27 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v28 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v15 < (unsigned int)v28 )
            {
              v29 = (unsigned int)v15;
              v30 = *(_DWORD *)(v15 + SecurityContext) - 64;
              if ( v30 )
              {
                v15 = (unsigned int)(v30 - 1);
                if ( (_DWORD)v15 )
                {
                  if ( (_DWORD)v15 == 1 )
                  {
                    v15 = v29 + 40;
                    if ( v29 + 40 <= v28 )
                    {
                      if ( *(_DWORD *)(v29 + SecurityContext + 12) )
                        v26 = (char *)(v29 + SecurityContext + 32);
                      v20 = *(_BYTE **)(v29 + SecurityContext + 24);
LABEL_46:
                      v31 = *(_BYTE *)(v29 + SecurityContext + 8);
                      v21 = *(_BYTE *)(v29 + SecurityContext + 9);
                      goto LABEL_55;
                    }
                  }
                }
                else
                {
                  v15 = v29 + 56;
                  if ( v29 + 56 <= v28 )
                  {
                    v44 = 1;
                    if ( *(_BYTE *)(v29 + SecurityContext + 10) )
                      v26 = (char *)(v29 + SecurityContext + 24);
                    v20 = *(_BYTE **)(v29 + SecurityContext + 16);
                    v21 = *(_BYTE *)(v29 + SecurityContext + 9);
                    v45 = *(_BYTE *)(v29 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v15 = v29 + 40;
                if ( v29 + 40 <= v28 )
                {
                  if ( *(_BYTE *)(v29 + SecurityContext + 10) )
                    v26 = (char *)(v29 + SecurityContext + 24);
                  v20 = *(_BYTE **)(v29 + SecurityContext + 16);
                  goto LABEL_46;
                }
              }
              if ( v44 )
                break;
            }
          }
          v27 = (unsigned int)(v46 + 1);
          v46 = v27;
        }
        while ( (unsigned int)v27 < v48 );
        v31 = v45;
LABEL_55:
        if ( v26 )
        {
          v32 = *v26;
          v25 = 0;
          goto LABEL_61;
        }
      }
    }
  }
LABEL_87:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
