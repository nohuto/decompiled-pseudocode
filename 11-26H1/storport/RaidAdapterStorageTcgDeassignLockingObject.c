/*
 * XREFs of RaidAdapterStorageTcgDeassignLockingObject @ 0x140083E90
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgDeassignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // r14
  char v6; // dl
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // r15d
  int v11; // r8d
  const wchar_t *v12; // r8
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
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v39; // [rsp+30h] [rbp-120h]
  __int64 v40; // [rsp+38h] [rbp-118h]
  __int64 v41; // [rsp+40h] [rbp-110h]
  __int64 v42; // [rsp+48h] [rbp-108h]
  char v43; // [rsp+D0h] [rbp-80h]
  char v44; // [rsp+D1h] [rbp-7Fh]
  int v45; // [rsp+D4h] [rbp-7Ch]
  unsigned int *v46; // [rsp+D8h] [rbp-78h]
  unsigned int v47; // [rsp+D8h] [rbp-78h]
  GUID v48; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-60h] BYREF
  char v50[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v51; // [rsp+110h] [rbp-40h]

  v2 = 0;
  v46 = 0LL;
  v49 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v48 = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  if ( !MasterIrp )
    goto LABEL_18;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v46 = (unsigned int *)MasterIrp;
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
        TcgProperties = RaidGetTcgProperties(a1, v50);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6128) + 53LL) )
          {
            LOBYTE(v11) = (__int64)MasterIrp->MdlAddress & 1;
            TcgProperties = RaidDeassignTcgLockingObject(
                              a1,
                              HIDWORD(MasterIrp->MdlAddress),
                              v11,
                              MasterIrp->Flags,
                              (__int64)(&MasterIrp->Flags + 1),
                              v50);
          }
          else
          {
            TcgProperties = -1073741637;
          }
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v48);
      if ( (byte_140173447 & 2) != 0 )
      {
        v12 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v12 = *(const wchar_t **)(a1 + 5144);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v46[4],
          v46[2],
          (__int64)v12,
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
          "TcgDeassignLockingObject",
          v50,
          TcgProperties,
          v46[2],
          v46[4],
          v46[3],
          0,
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
        goto LABEL_91;
      v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
          LODWORD(pszDest) = Irp->IoStatus.Status;
          LODWORD(v37) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v14, (__int64)CurrentStackLocation, &v48, Irp, v37, pszDest);
        }
        goto LABEL_91;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_91;
      v17 = &EventPnpRequestComplete;
LABEL_90:
      LODWORD(v37) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v14, v17, &v48, Irp, v37);
      goto LABEL_91;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_91;
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
        goto LABEL_91;
LABEL_65:
      LOBYTE(v14) = v31 - 8;
      if ( (v14 & 0x5D) != 0 )
        goto LABEL_91;
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v19 || !v20 )
        goto LABEL_84;
      v32 = *v19 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_82;
        v22 = v19[2];
        v21 = v19[1] & 0xF;
        v23 = v19[3];
      }
      else
      {
        v14 = (unsigned __int64)&v19[v20];
        v33 = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_82;
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
LABEL_82:
      if ( v33 )
        v24 = 1;
LABEL_84:
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
        LOBYTE(v40) = v21;
        LOBYTE(v39) = v30;
        LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
        LODWORD(v37) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, SecurityContext, &v48, Irp, v37, pszDest, v39, v40, v41, v42, Irp);
      }
      goto LABEL_91;
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
LABEL_50:
                      v30 = *(_BYTE *)(v28 + SecurityContext + 8);
                      v20 = *(_BYTE *)(v28 + SecurityContext + 9);
                      goto LABEL_59;
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
                  goto LABEL_50;
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
LABEL_59:
        if ( v25 )
        {
          v31 = *v25;
          v24 = 0;
          goto LABEL_65;
        }
      }
    }
  }
LABEL_91:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
