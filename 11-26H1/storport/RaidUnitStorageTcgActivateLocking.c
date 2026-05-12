/*
 * XREFs of RaidUnitStorageTcgActivateLocking @ 0x140087B5C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdi
  int v3; // r15d
  char v6; // r14
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  const wchar_t *v18; // r14
  bool v19; // zf
  unsigned __int64 v20; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v25; // r9
  unsigned __int8 v26; // si
  char v27; // r10
  char v28; // di
  char v29; // r11
  char v30; // r14
  char *v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r12
  char v37; // cl
  char v38; // al
  char v39; // r8
  char *v40; // r11
  unsigned int v41; // eax
  __int64 v43; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v45; // [rsp+30h] [rbp-120h]
  __int64 v46; // [rsp+38h] [rbp-118h]
  __int64 v47; // [rsp+40h] [rbp-110h]
  __int64 v48; // [rsp+48h] [rbp-108h]
  char v49; // [rsp+D0h] [rbp-80h]
  char v50; // [rsp+D1h] [rbp-7Fh]
  int TcgProperties; // [rsp+D4h] [rbp-7Ch]
  unsigned int v52; // [rsp+D4h] [rbp-7Ch]
  int v53; // [rsp+DCh] [rbp-74h]
  int v54; // [rsp+DCh] [rbp-74h]
  __int128 v55; // [rsp+E0h] [rbp-70h] BYREF
  GUID v56; // [rsp+F0h] [rbp-60h] BYREF
  char v57[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v58; // [rsp+110h] [rbp-40h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  *(_QWORD *)&v56.Data1 = 0LL;
  v6 = 0;
  v55 = 0LL;
  *(_OWORD *)v57 = 0LL;
  v58 = 0LL;
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  *(_QWORD *)&v56.Data1 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v9 || Options < v9 )
  {
LABEL_14:
    v10 = -1073741811;
    goto LABEL_15;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v10 = -2147483631;
LABEL_15:
    TcgProperties = v10;
    goto LABEL_16;
  }
  v6 = 1;
  TcgProperties = RaidGetTcgProperties(a1, v57);
  v10 = TcgProperties;
  if ( TcgProperties >= 0 )
  {
    LOBYTE(v12) = BYTE5(MasterIrp->MdlAddress);
    LOBYTE(v11) = BYTE4(MasterIrp->MdlAddress);
    v10 = RaidActivateTcgLocking(a1, v11, v12, MasterIrp->Flags, (__int64)(&MasterIrp->Flags + 1), v57);
    TcgProperties = v10;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_16:
  Irp->IoStatus.Information = 0LL;
  if ( v10 < 0 )
  {
    if ( v6 )
    {
      v53 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v55);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140173447 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5144);
        v16 = v14 + 5128;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_140153274;
        if ( v15 )
          v18 = v15;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)&v56.Data1 + 13LL),
          *(unsigned __int8 *)(*(_QWORD *)&v56.Data1 + 12LL),
          a1 + 242,
          v17,
          v13,
          SBYTE1(v53),
          SBYTE2(v53),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v55 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v18,
          "TcgActivateLocking",
          v57,
          TcgProperties,
          *(_BYTE *)(*(_QWORD *)&v56.Data1 + 12LL),
          *(_BYTE *)(*(_QWORD *)&v56.Data1 + 13LL),
          *(_DWORD *)(*(_QWORD *)&v56.Data1 + 16LL),
          0,
          0);
        v10 = TcgProperties;
      }
    }
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v10;
  if ( !v19 )
  {
    v56 = 0LL;
    IoGetActivityIdIrp(Irp, &v56);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_88;
      v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_87;
    }
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction != 27 )
        goto LABEL_88;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v3 = *Information;
          LODWORD(pszDest) = Irp->IoStatus.Status;
          LODWORD(v43) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v20, (__int64)CurrentStackLocation, &v56, Irp, v43, pszDest);
        }
        goto LABEL_88;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_88;
      v23 = &EventPnpRequestComplete;
LABEL_87:
      LODWORD(v43) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v20, v23, &v56, Irp, v43);
      goto LABEL_88;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_88;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v25 = 0LL;
    v49 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v37 = *(_BYTE *)(SecurityContext + 72);
      v25 = *(_BYTE **)(SecurityContext + 32);
      v26 = *(_BYTE *)(SecurityContext + 11);
      v36 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_88;
LABEL_62:
      LOBYTE(v20) = v37 - 8;
      if ( (v20 & 0x5D) != 0 )
        goto LABEL_88;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v25 || !v26 )
        goto LABEL_81;
      v38 = *v25 & 0x7F;
      if ( v38 == 114 || v38 == 115 )
      {
        v20 = (unsigned __int64)&v25[v26];
        v39 = 0;
        if ( (unsigned __int64)(v25 + 8) > v20 )
          goto LABEL_79;
        v28 = v25[2];
        v27 = v25[1] & 0xF;
        v29 = v25[3];
      }
      else
      {
        v20 = (unsigned __int64)&v25[v26];
        v39 = 0;
        if ( (unsigned __int64)(v25 + 8) > v20 )
          goto LABEL_79;
        v40 = v25 + 13;
        v27 = v25[2] & 0xF;
        v41 = v26;
        if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
          v41 = (unsigned __int8)v25[7] + 8;
        v20 = (unsigned __int64)&v25[v41];
        if ( (unsigned __int64)v40 <= v20 )
          v28 = v25[12];
        if ( (unsigned __int64)(v25 + 14) > v20 )
          v29 = 0;
        else
          v29 = *v40;
      }
      v39 = 1;
LABEL_79:
      if ( v39 )
        v30 = 1;
LABEL_81:
      if ( byte_140173441 < 0 )
      {
        if ( !v30 )
        {
          v29 = 0;
          v28 = 0;
          v27 = 0;
        }
        LOBYTE(v48) = v29;
        LOBYTE(v47) = v28;
        LOBYTE(v46) = v27;
        LOBYTE(v45) = v36;
        LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v43) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v20, SecurityContext, &v56, Irp, v43, pszDest, v45, v46, v47, v48, Irp);
      }
      goto LABEL_88;
    }
    v31 = 0LL;
    v50 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v32 = 0LL;
      v54 = 0;
      v52 = *(_DWORD *)(SecurityContext + 56);
      if ( v52 )
      {
        do
        {
          v20 = *(unsigned int *)(SecurityContext + 4 * v32 + 120);
          if ( (unsigned int)v20 >= 0x80 )
          {
            v33 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v20 < (unsigned int)v33 )
            {
              v34 = (unsigned int)v20;
              v35 = *(_DWORD *)(v20 + SecurityContext) - 64;
              if ( v35 )
              {
                v20 = (unsigned int)(v35 - 1);
                if ( (_DWORD)v20 )
                {
                  if ( (_DWORD)v20 == 1 )
                  {
                    v20 = v34 + 40;
                    if ( v34 + 40 <= v33 )
                    {
                      if ( *(_DWORD *)(v34 + SecurityContext + 12) )
                        v31 = (char *)(v34 + SecurityContext + 32);
                      v25 = *(_BYTE **)(v34 + SecurityContext + 24);
LABEL_47:
                      v36 = *(_BYTE *)(v34 + SecurityContext + 8);
                      v26 = *(_BYTE *)(v34 + SecurityContext + 9);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  v20 = v34 + 56;
                  if ( v34 + 56 <= v33 )
                  {
                    v50 = 1;
                    if ( *(_BYTE *)(v34 + SecurityContext + 10) )
                      v31 = (char *)(v34 + SecurityContext + 24);
                    v25 = *(_BYTE **)(v34 + SecurityContext + 16);
                    v26 = *(_BYTE *)(v34 + SecurityContext + 9);
                    v49 = *(_BYTE *)(v34 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v20 = v34 + 40;
                if ( v34 + 40 <= v33 )
                {
                  if ( *(_BYTE *)(v34 + SecurityContext + 10) )
                    v31 = (char *)(v34 + SecurityContext + 24);
                  v25 = *(_BYTE **)(v34 + SecurityContext + 16);
                  goto LABEL_47;
                }
              }
              if ( v50 )
                break;
            }
          }
          v32 = (unsigned int)(v54 + 1);
          v54 = v32;
        }
        while ( (unsigned int)v32 < v52 );
        v36 = v49;
LABEL_56:
        if ( v31 )
        {
          v37 = *v31;
          v30 = 0;
          goto LABEL_62;
        }
      }
    }
  }
LABEL_88:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
