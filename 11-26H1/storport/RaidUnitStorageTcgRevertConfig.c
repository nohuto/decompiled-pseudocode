/*
 * XREFs of RaidUnitStorageTcgRevertConfig @ 0x14008A830
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidRevertTcgConfiguration @ 0x140095CD8 (RaidRevertTcgConfiguration.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgRevertConfig(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rbx
  int v3; // r14d
  char v6; // si
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v9; // eax
  int TcgProperties; // r13d
  int v11; // edx
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rbx
  int v16; // r9d
  const wchar_t *v17; // rsi
  bool v18; // zf
  unsigned __int64 v19; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // di
  char v26; // r11
  char v27; // bl
  char v28; // r10
  char v29; // si
  char *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r12
  char v36; // cl
  char v37; // al
  char v38; // r8
  char *v39; // r10
  unsigned int v40; // eax
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-130h]
  __int64 v43; // [rsp+28h] [rbp-128h]
  __int64 v44; // [rsp+30h] [rbp-120h]
  __int64 v45; // [rsp+38h] [rbp-118h]
  __int64 v46; // [rsp+40h] [rbp-110h]
  __int64 v47; // [rsp+48h] [rbp-108h]
  char v48; // [rsp+D0h] [rbp-80h]
  char v49; // [rsp+D1h] [rbp-7Fh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+D4h] [rbp-7Ch]
  _IRP *v52; // [rsp+D8h] [rbp-78h]
  unsigned int v53; // [rsp+D8h] [rbp-78h]
  GUID v54; // [rsp+E0h] [rbp-70h] BYREF
  char v55[16]; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v56; // [rsp+100h] [rbp-50h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  v52 = 0LL;
  v6 = 0;
  v54 = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v52 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( MdlAddress_high > 0x20 )
    goto LABEL_14;
  v9 = MdlAddress_high + 16;
  if ( v9 < 0x14 )
    v9 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      v6 = 1;
      TcgProperties = RaidGetTcgProperties(a1, v55);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v11) = (__int64)MasterIrp->MdlAddress & 1;
        TcgProperties = RaidRevertTcgConfiguration(a1, v11, HIDWORD(MasterIrp->MdlAddress), (int)MasterIrp + 16, v55);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
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
      v50 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v54);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5144);
        v15 = v13 + 5128;
        v16 = *(_DWORD *)(v13 + 56);
        v17 = (const wchar_t *)&unk_140153274;
        if ( v14 )
          v17 = v14;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          LODWORD(v52->MdlAddress),
          a1 + 242,
          a1 + 177,
          v16,
          v12,
          SBYTE1(v50),
          SBYTE2(v50),
          a1 + 2104,
          v15,
          *(const wchar_t **)v54.Data4,
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgRevertConfiguration",
          v55,
          TcgProperties,
          (char)v52->MdlAddress,
          HIDWORD(v52->MdlAddress),
          0,
          0,
          0);
      }
    }
  }
  v18 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( !v18 )
  {
    v54 = 0LL;
    IoGetActivityIdIrp(Irp, &v54);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_87;
      v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
            v3 = *Information;
          LODWORD(v43) = Irp->IoStatus.Status;
          LODWORD(pszDest) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v19, (__int64)CurrentStackLocation, &v54, Irp, pszDest, v43);
        }
        goto LABEL_87;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_87;
      v22 = &EventPnpRequestComplete;
LABEL_86:
      LODWORD(pszDest) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v19, v22, &v54, Irp, pszDest);
      goto LABEL_87;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_87;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v24 = 0LL;
    v48 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v36 = *(_BYTE *)(SecurityContext + 72);
      v24 = *(_BYTE **)(SecurityContext + 32);
      v25 = *(_BYTE *)(SecurityContext + 11);
      v35 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_87;
LABEL_61:
      LOBYTE(v19) = v36 - 8;
      if ( (v19 & 0x5D) != 0 )
        goto LABEL_87;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v24 || !v25 )
        goto LABEL_80;
      v37 = *v24 & 0x7F;
      if ( v37 == 114 || v37 == 115 )
      {
        v19 = (unsigned __int64)&v24[v25];
        v38 = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_78;
        v27 = v24[2];
        v26 = v24[1] & 0xF;
        v28 = v24[3];
      }
      else
      {
        v19 = (unsigned __int64)&v24[v25];
        v38 = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_78;
        v39 = v24 + 13;
        v26 = v24[2] & 0xF;
        v40 = v25;
        if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
          v40 = (unsigned __int8)v24[7] + 8;
        v19 = (unsigned __int64)&v24[v40];
        if ( (unsigned __int64)v39 <= v19 )
          v27 = v24[12];
        if ( (unsigned __int64)(v24 + 14) > v19 )
          v28 = 0;
        else
          v28 = *v39;
      }
      v38 = 1;
LABEL_78:
      if ( v38 )
        v29 = 1;
LABEL_80:
      if ( byte_140173441 < 0 )
      {
        if ( !v29 )
        {
          v28 = 0;
          v27 = 0;
          v26 = 0;
        }
        LOBYTE(v47) = v28;
        LOBYTE(v46) = v27;
        LOBYTE(v45) = v26;
        LOBYTE(v44) = v35;
        LOBYTE(v43) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(pszDest) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v19, SecurityContext, &v54, Irp, pszDest, v43, v44, v45, v46, v47, Irp);
      }
      goto LABEL_87;
    }
    v30 = 0LL;
    v49 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v31 = 0LL;
      v51 = 0;
      v53 = *(_DWORD *)(SecurityContext + 56);
      if ( v53 )
      {
        do
        {
          v19 = *(unsigned int *)(SecurityContext + 4 * v31 + 120);
          if ( (unsigned int)v19 >= 0x80 )
          {
            v32 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v19 < (unsigned int)v32 )
            {
              v33 = (unsigned int)v19;
              v34 = *(_DWORD *)(v19 + SecurityContext) - 64;
              if ( v34 )
              {
                v19 = (unsigned int)(v34 - 1);
                if ( (_DWORD)v19 )
                {
                  if ( (_DWORD)v19 == 1 )
                  {
                    v19 = v33 + 40;
                    if ( v33 + 40 <= v32 )
                    {
                      if ( *(_DWORD *)(v33 + SecurityContext + 12) )
                        v30 = (char *)(v33 + SecurityContext + 32);
                      v24 = *(_BYTE **)(v33 + SecurityContext + 24);
LABEL_46:
                      v35 = *(_BYTE *)(v33 + SecurityContext + 8);
                      v25 = *(_BYTE *)(v33 + SecurityContext + 9);
                      goto LABEL_55;
                    }
                  }
                }
                else
                {
                  v19 = v33 + 56;
                  if ( v33 + 56 <= v32 )
                  {
                    v49 = 1;
                    if ( *(_BYTE *)(v33 + SecurityContext + 10) )
                      v30 = (char *)(v33 + SecurityContext + 24);
                    v24 = *(_BYTE **)(v33 + SecurityContext + 16);
                    v25 = *(_BYTE *)(v33 + SecurityContext + 9);
                    v48 = *(_BYTE *)(v33 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v19 = v33 + 40;
                if ( v33 + 40 <= v32 )
                {
                  if ( *(_BYTE *)(v33 + SecurityContext + 10) )
                    v30 = (char *)(v33 + SecurityContext + 24);
                  v24 = *(_BYTE **)(v33 + SecurityContext + 16);
                  goto LABEL_46;
                }
              }
              if ( v49 )
                break;
            }
          }
          v31 = (unsigned int)(v51 + 1);
          v51 = v31;
        }
        while ( (unsigned int)v31 < v53 );
        v35 = v48;
LABEL_55:
        if ( v30 )
        {
          v36 = *v30;
          v29 = 0;
          goto LABEL_61;
        }
      }
    }
  }
LABEL_87:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
