/*
 * XREFs of RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1400875CC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidSetTcgSpAuthorityKey @ 0x140096730 (RaidSetTcgSpAuthorityKey.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgSetSpAuthorityKey(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // r14
  int v3; // edi
  char v6; // r8
  unsigned int Options; // ecx
  unsigned int v8; // eax
  unsigned int IrpCount; // edx
  unsigned int v10; // eax
  int TcgProperties; // r15d
  const wchar_t *v12; // r9
  bool v13; // zf
  unsigned __int64 v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r14
  char v21; // r10
  char v22; // bl
  char v23; // r11
  char v24; // r12
  char *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r13
  char v31; // cl
  char v32; // al
  char v33; // r8
  char *v34; // r11
  unsigned int v35; // eax
  __int64 v37; // [rsp+20h] [rbp-130h]
  __int64 v38; // [rsp+28h] [rbp-128h]
  __int64 v39; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR pszDest; // [rsp+38h] [rbp-118h]
  __int64 v41; // [rsp+40h] [rbp-110h]
  __int64 v42; // [rsp+48h] [rbp-108h]
  char v43; // [rsp+D0h] [rbp-80h]
  char v44; // [rsp+D1h] [rbp-7Fh]
  int v45; // [rsp+D4h] [rbp-7Ch]
  _IRP *v46; // [rsp+D8h] [rbp-78h]
  unsigned int v47; // [rsp+D8h] [rbp-78h]
  GUID v48; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-60h] BYREF
  char v50[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v51; // [rsp+110h] [rbp-40h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v3 = 0;
  v46 = 0LL;
  v6 = 0;
  v49 = 0LL;
  v48 = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  if ( !MasterIrp )
    goto LABEL_15;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v46 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_15;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_15;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount > 0x20 )
    goto LABEL_15;
  v10 = IrpCount + v8 + 28;
  if ( v10 < 0x20 )
    v10 = 32;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v10 && Options >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      TcgProperties = RaidGetTcgProperties(a1, v50);
      if ( TcgProperties >= 0 )
        TcgProperties = RaidSetTcgSpAuthorityKey(
                          a1,
                          HIDWORD(MasterIrp->MdlAddress),
                          MasterIrp->Flags,
                          *(&MasterIrp->Flags + 1),
                          (__int64)&MasterIrp->AssociatedIrp.SystemBuffer + 4,
                          MasterIrp->AssociatedIrp.IrpCount,
                          (__int64)&MasterIrp->AssociatedIrp.SystemBuffer + *(&MasterIrp->Flags + 1) + 4,
                          v50);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
      v6 = 1;
    }
  }
  else
  {
LABEL_15:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v48);
      if ( (byte_140173447 & 2) != 0 )
      {
        v12 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v12 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          *(&v46->Flags + 1),
          (int)v46->Flags,
          SHIDWORD(v46->MdlAddress),
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v49,
          a1 + 5128,
          *(const wchar_t **)v48.Data4,
          byte_14015304C,
          byte_14015304C,
          byte_14015304C,
          v12,
          "TcgSetSpAuthorityKey",
          v50,
          TcgProperties,
          HIDWORD(v46->MdlAddress),
          v46->Flags,
          *(&v46->Flags + 1),
          v46->AssociatedIrp.IrpCount,
          0);
      }
    }
  }
  v13 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( !v13 )
  {
    v48 = 0LL;
    IoGetActivityIdIrp(Irp, &v48);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_88;
      v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
          LODWORD(v38) = Irp->IoStatus.Status;
          LODWORD(v37) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v14, (__int64)CurrentStackLocation, &v48, Irp, v37, v38);
        }
        goto LABEL_88;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_88;
      v17 = &EventPnpRequestComplete;
LABEL_87:
      LODWORD(v37) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v14, v17, &v48, Irp, v37);
      goto LABEL_88;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_88;
    SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
    v19 = 0LL;
    v44 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) != 40 )
    {
      v31 = *(_BYTE *)(SecurityContext + 72);
      v19 = *(_BYTE **)(SecurityContext + 32);
      v20 = *(_BYTE *)(SecurityContext + 11);
      v30 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_88;
LABEL_62:
      LOBYTE(v14) = v31 - 8;
      if ( (v14 & 0x5D) != 0 )
        goto LABEL_88;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v19 || !v20 )
        goto LABEL_81;
      v32 = *v19 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_79;
        v22 = v19[2];
        v21 = v19[1] & 0xF;
        v23 = v19[3];
      }
      else
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_79;
        v34 = v19 + 13;
        v21 = v19[2] & 0xF;
        v35 = v20;
        if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
          v35 = (unsigned __int8)v19[7] + 8;
        v14 = (unsigned __int64)&v19[v35];
        if ( (unsigned __int64)v34 <= v14 )
          v22 = v19[12];
        if ( (unsigned __int64)(v19 + 14) > v14 )
          v23 = 0;
        else
          v23 = *v34;
      }
      v33 = 1;
LABEL_79:
      if ( v33 )
        v24 = 1;
LABEL_81:
      if ( byte_140173441 < 0 )
      {
        if ( !v24 )
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
        }
        LOBYTE(v42) = v23;
        LOBYTE(v41) = v22;
        LOBYTE(pszDest) = v21;
        LOBYTE(v39) = v30;
        LOBYTE(v38) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v37) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, SecurityContext, &v48, Irp, v37, v38, v39, pszDest, v41, v42, Irp);
      }
      goto LABEL_88;
    }
    v25 = 0LL;
    v43 = 0;
    if ( !*(_DWORD *)(SecurityContext + 20) )
    {
      v26 = 0LL;
      v45 = 0;
      v47 = *(_DWORD *)(SecurityContext + 56);
      if ( v47 )
      {
        do
        {
          v14 = *(unsigned int *)(SecurityContext + 4 * v26 + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v27 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v14 < (unsigned int)v27 )
            {
              v28 = (unsigned int)v14;
              v29 = *(_DWORD *)(v14 + SecurityContext) - 64;
              if ( v29 )
              {
                v14 = (unsigned int)(v29 - 1);
                if ( (_DWORD)v14 )
                {
                  if ( (_DWORD)v14 == 1 )
                  {
                    v14 = v28 + 40;
                    if ( v28 + 40 <= v27 )
                    {
                      if ( *(_DWORD *)(v28 + SecurityContext + 12) )
                        v25 = (char *)(v28 + SecurityContext + 32);
                      v19 = *(_BYTE **)(v28 + SecurityContext + 24);
LABEL_47:
                      v30 = *(_BYTE *)(v28 + SecurityContext + 8);
                      v20 = *(_BYTE *)(v28 + SecurityContext + 9);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  v14 = v28 + 56;
                  if ( v28 + 56 <= v27 )
                  {
                    v43 = 1;
                    if ( *(_BYTE *)(v28 + SecurityContext + 10) )
                      v25 = (char *)(v28 + SecurityContext + 24);
                    v19 = *(_BYTE **)(v28 + SecurityContext + 16);
                    v20 = *(_BYTE *)(v28 + SecurityContext + 9);
                    v44 = *(_BYTE *)(v28 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v14 = v28 + 40;
                if ( v28 + 40 <= v27 )
                {
                  if ( *(_BYTE *)(v28 + SecurityContext + 10) )
                    v25 = (char *)(v28 + SecurityContext + 24);
                  v19 = *(_BYTE **)(v28 + SecurityContext + 16);
                  goto LABEL_47;
                }
              }
              if ( v43 )
                break;
            }
          }
          v26 = (unsigned int)(v45 + 1);
          v45 = v26;
        }
        while ( (unsigned int)v26 < v47 );
        v30 = v44;
LABEL_56:
        if ( v25 )
        {
          v31 = *v25;
          v24 = 0;
          goto LABEL_62;
        }
      }
    }
  }
LABEL_88:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
