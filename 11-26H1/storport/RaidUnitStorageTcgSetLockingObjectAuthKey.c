/*
 * XREFs of RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x14008B3A0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObjectAuthKey(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdi
  int v3; // r12d
  char v6; // si
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // ebx
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  int v16; // r9d
  const wchar_t *v17; // r15
  bool v18; // zf
  unsigned __int64 v19; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // si
  char v26; // r10
  char v27; // di
  char v28; // r11
  char v29; // r14
  char *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r15
  char v36; // cl
  char v37; // al
  char v38; // r8
  char *v39; // r11
  unsigned int v40; // eax
  __int64 v42; // [rsp+20h] [rbp-130h]
  __int64 v43; // [rsp+28h] [rbp-128h]
  NTSTRSAFE_PSTR pszDest; // [rsp+30h] [rbp-120h]
  __int64 v45; // [rsp+38h] [rbp-118h]
  __int64 v46; // [rsp+40h] [rbp-110h]
  __int64 v47; // [rsp+48h] [rbp-108h]
  char v48; // [rsp+D0h] [rbp-80h]
  char v49; // [rsp+D1h] [rbp-7Fh]
  int TcgProperties; // [rsp+D4h] [rbp-7Ch]
  unsigned int v51; // [rsp+D4h] [rbp-7Ch]
  int v52; // [rsp+DCh] [rbp-74h]
  int v53; // [rsp+DCh] [rbp-74h]
  __int128 v54; // [rsp+E8h] [rbp-68h] BYREF
  GUID v55; // [rsp+F8h] [rbp-58h] BYREF
  char v56[16]; // [rsp+108h] [rbp-48h] BYREF
  __int128 v57; // [rsp+118h] [rbp-38h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  *(_QWORD *)&v55.Data1 = 0LL;
  v6 = 0;
  v54 = 0LL;
  *(_OWORD *)v56 = 0LL;
  v57 = 0LL;
  if ( !MasterIrp )
    goto LABEL_19;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_19;
  *(_QWORD *)&v55.Data1 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_19;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_19;
  v9 = *(&MasterIrp->Flags + 1);
  if ( v9 > 0x20 )
    goto LABEL_19;
  v10 = v9 + Flags + 24;
  if ( v10 < 0x1C )
    v10 = 28;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v10 || Options < v10 )
  {
LABEL_19:
    v11 = -1073741811;
    goto LABEL_20;
  }
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    v11 = -1073741637;
LABEL_20:
    TcgProperties = v11;
    goto LABEL_21;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v11 = -2147483631;
    goto LABEL_20;
  }
  v6 = 1;
  TcgProperties = RaidGetTcgProperties(a1, v56);
  v11 = TcgProperties;
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3600) + 53LL) )
    {
      v11 = RaidSetTcgLockingObjectAuthKey(
              a1,
              HIDWORD(MasterIrp->MdlAddress),
              MasterIrp->Flags,
              (int)MasterIrp + 24,
              *(&MasterIrp->Flags + 1),
              (__int64)&MasterIrp->AssociatedIrp + MasterIrp->Flags,
              v56);
      TcgProperties = v11;
    }
    else
    {
      v11 = -1073741637;
      TcgProperties = -1073741637;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_21:
  Irp->IoStatus.Information = 0LL;
  if ( v11 < 0 )
  {
    if ( v6 )
    {
      v52 = *(_DWORD *)(a1 + 104);
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
          *(unsigned int *)(*(_QWORD *)&v55.Data1 + 20LL),
          *(unsigned int *)(*(_QWORD *)&v55.Data1 + 16LL),
          *(unsigned int *)(*(_QWORD *)&v55.Data1 + 8LL),
          v16,
          v12,
          SBYTE1(v52),
          SBYTE2(v52),
          a1 + 2104,
          v15,
          *((const wchar_t **)&v54 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgSetLockingObjectAuthKey",
          v56,
          TcgProperties,
          *(_DWORD *)(*(_QWORD *)&v55.Data1 + 8LL),
          *(_DWORD *)(*(_QWORD *)&v55.Data1 + 16LL),
          *(_DWORD *)(*(_QWORD *)&v55.Data1 + 20LL),
          *(_DWORD *)(*(_QWORD *)&v55.Data1 + 12LL),
          0);
        v11 = TcgProperties;
      }
    }
  }
  v18 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v11;
  if ( !v18 )
  {
    v55 = 0LL;
    IoGetActivityIdIrp(Irp, &v55);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_93;
      v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_92;
    }
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction != 27 )
        goto LABEL_93;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v3 = *Information;
          LODWORD(v43) = Irp->IoStatus.Status;
          LODWORD(v42) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v19, (__int64)CurrentStackLocation, &v55, Irp, v42, v43);
        }
        goto LABEL_93;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_93;
      v22 = &EventPnpRequestComplete;
LABEL_92:
      LODWORD(v42) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v19, v22, &v55, Irp, v42);
      goto LABEL_93;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_93;
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
        goto LABEL_93;
LABEL_67:
      LOBYTE(v19) = v36 - 8;
      if ( (v19 & 0x5D) != 0 )
        goto LABEL_93;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v24 || !v25 )
        goto LABEL_86;
      v37 = *v24 & 0x7F;
      if ( v37 == 114 || v37 == 115 )
      {
        v19 = (unsigned __int64)&v24[v25];
        v38 = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_84;
        v27 = v24[2];
        v26 = v24[1] & 0xF;
        v28 = v24[3];
      }
      else
      {
        v19 = (unsigned __int64)&v24[v25];
        v38 = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_84;
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
LABEL_84:
      if ( v38 )
        v29 = 1;
LABEL_86:
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
        LOBYTE(pszDest) = v35;
        LOBYTE(v43) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v42) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v19, SecurityContext, &v55, Irp, v42, v43, pszDest, v45, v46, v47, Irp);
      }
      goto LABEL_93;
    }
    v30 = 0LL;
    v49 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v31 = 0LL;
      v53 = 0;
      v51 = *(_DWORD *)(SecurityContext + 56);
      if ( v51 )
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
LABEL_52:
                      v35 = *(_BYTE *)(v33 + SecurityContext + 8);
                      v25 = *(_BYTE *)(v33 + SecurityContext + 9);
                      goto LABEL_61;
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
                  goto LABEL_52;
                }
              }
              if ( v49 )
                break;
            }
          }
          v31 = (unsigned int)(v53 + 1);
          v53 = v31;
        }
        while ( (unsigned int)v31 < v51 );
        v35 = v48;
LABEL_61:
        if ( v30 )
        {
          v36 = *v30;
          v29 = 0;
          goto LABEL_67;
        }
      }
    }
  }
LABEL_93:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v11;
}
