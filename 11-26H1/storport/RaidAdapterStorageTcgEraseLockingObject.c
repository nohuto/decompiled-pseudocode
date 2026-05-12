/*
 * XREFs of RaidAdapterStorageTcgEraseLockingObject @ 0x140084A2C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidEraseTcgLockingObject @ 0x140093DD8 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgEraseLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // r14
  char v6; // dl
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // r15d
  const wchar_t *v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r10
  char v21; // bl
  char v22; // r11
  char v23; // r12
  char *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r13
  char v30; // cl
  char v31; // al
  char v32; // r8
  char *v33; // r11
  unsigned int v34; // eax
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-130h]
  __int64 v37; // [rsp+28h] [rbp-128h]
  __int64 v38; // [rsp+30h] [rbp-120h]
  __int64 v39; // [rsp+38h] [rbp-118h]
  __int64 v40; // [rsp+40h] [rbp-110h]
  __int64 v41; // [rsp+48h] [rbp-108h]
  char v42; // [rsp+D0h] [rbp-80h]
  char v43; // [rsp+D1h] [rbp-7Fh]
  int v44; // [rsp+D4h] [rbp-7Ch]
  unsigned int *v45; // [rsp+D8h] [rbp-78h]
  unsigned int v46; // [rsp+D8h] [rbp-78h]
  GUID v47; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-60h] BYREF
  char v49[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v50; // [rsp+110h] [rbp-40h]

  v2 = 0;
  v45 = 0LL;
  v48 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v47 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  if ( !MasterIrp )
    goto LABEL_18;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v45 = (unsigned int *)MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_18;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(MasterIrp->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        TcgProperties = RaidGetTcgProperties(a1, v49);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
            TcgProperties = RaidEraseTcgLockingObject(
                              a1,
                              HIDWORD(MasterIrp->MdlAddress),
                              MasterIrp->Flags,
                              (int)MasterIrp + 20,
                              v49);
          else
            TcgProperties = -1073741637;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
        v6 = 1;
      }
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  else
  {
LABEL_18:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v47);
      if ( (byte_140173447 & 2) != 0 )
      {
        v11 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v11 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v45[4],
          v45[2],
          (__int64)v11,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v48,
          a1 + 5128,
          *(const wchar_t **)v47.Data4,
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v11,
          "TcgEraseLockingObject",
          v49,
          TcgProperties,
          v45[2],
          v45[4],
          v45[3],
          0,
          0);
      }
    }
  }
  v12 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( !v12 )
  {
    v47 = 0LL;
    IoGetActivityIdIrp(Irp, &v47);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_91;
      v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_90;
    }
    if ( CurrentStackLocation->MajorFunction != 15 )
    {
      if ( CurrentStackLocation->MajorFunction != 27 )
        goto LABEL_91;
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v2 = *Information;
          LODWORD(v37) = Irp->IoStatus.Status;
          LODWORD(pszDest) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v13, (__int64)CurrentStackLocation, &v47, Irp, pszDest, v37);
        }
        goto LABEL_91;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_91;
      v16 = &EventPnpRequestComplete;
LABEL_90:
      LODWORD(pszDest) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v13, v16, &v47, Irp, pszDest);
      goto LABEL_91;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_91;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v18 = 0LL;
    v43 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v30 = *(_BYTE *)(SecurityContext + 72);
      v18 = *(_BYTE **)(SecurityContext + 32);
      v19 = *(_BYTE *)(SecurityContext + 11);
      v29 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_91;
LABEL_65:
      LOBYTE(v13) = v30 - 8;
      if ( (v13 & 0x5D) != 0 )
        goto LABEL_91;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v18 || !v19 )
        goto LABEL_84;
      v31 = *v18 & 0x7F;
      if ( v31 == 114 || v31 == 115 )
      {
        v13 = (unsigned __int64)&v18[v19];
        v32 = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_82;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v13 = (unsigned __int64)&v18[v19];
        v32 = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_82;
        v33 = v18 + 13;
        v20 = v18[2] & 0xF;
        v34 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v34 = (unsigned __int8)v18[7] + 8;
        v13 = (unsigned __int64)&v18[v34];
        if ( (unsigned __int64)v33 <= v13 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) > v13 )
          v22 = 0;
        else
          v22 = *v33;
      }
      v32 = 1;
LABEL_82:
      if ( v32 )
        v23 = 1;
LABEL_84:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v21 = 0;
          v20 = 0;
        }
        LOBYTE(v41) = v22;
        LOBYTE(v40) = v21;
        LOBYTE(v39) = v20;
        LOBYTE(v38) = v29;
        LOBYTE(v37) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(pszDest) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v13, SecurityContext, &v47, Irp, pszDest, v37, v38, v39, v40, v41, Irp);
      }
      goto LABEL_91;
    }
    v24 = 0LL;
    v42 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v25 = 0LL;
      v44 = 0;
      v46 = *(_DWORD *)(SecurityContext + 56);
      if ( v46 )
      {
        do
        {
          v13 = *(unsigned int *)(SecurityContext + 4 * v25 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v26 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v13 < (unsigned int)v26 )
            {
              v27 = (unsigned int)v13;
              v28 = *(_DWORD *)(v13 + SecurityContext) - 64;
              if ( v28 )
              {
                v13 = (unsigned int)(v28 - 1);
                if ( (_DWORD)v13 )
                {
                  if ( (_DWORD)v13 == 1 )
                  {
                    v13 = v27 + 40;
                    if ( v27 + 40 <= v26 )
                    {
                      if ( *(_DWORD *)(v27 + SecurityContext + 12) )
                        v24 = (char *)(v27 + SecurityContext + 32);
                      v18 = *(_BYTE **)(v27 + SecurityContext + 24);
LABEL_50:
                      v29 = *(_BYTE *)(v27 + SecurityContext + 8);
                      v19 = *(_BYTE *)(v27 + SecurityContext + 9);
                      goto LABEL_59;
                    }
                  }
                }
                else
                {
                  v13 = v27 + 56;
                  if ( v27 + 56 <= v26 )
                  {
                    v42 = 1;
                    if ( *(_BYTE *)(v27 + SecurityContext + 10) )
                      v24 = (char *)(v27 + SecurityContext + 24);
                    v18 = *(_BYTE **)(v27 + SecurityContext + 16);
                    v19 = *(_BYTE *)(v27 + SecurityContext + 9);
                    v43 = *(_BYTE *)(v27 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v13 = v27 + 40;
                if ( v27 + 40 <= v26 )
                {
                  if ( *(_BYTE *)(v27 + SecurityContext + 10) )
                    v24 = (char *)(v27 + SecurityContext + 24);
                  v18 = *(_BYTE **)(v27 + SecurityContext + 16);
                  goto LABEL_50;
                }
              }
              if ( v42 )
                break;
            }
          }
          v25 = (unsigned int)(v44 + 1);
          v44 = v25;
        }
        while ( (unsigned int)v25 < v46 );
        v29 = v43;
LABEL_59:
        if ( v24 )
        {
          v30 = *v24;
          v23 = 0;
          goto LABEL_65;
        }
      }
    }
  }
LABEL_91:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
