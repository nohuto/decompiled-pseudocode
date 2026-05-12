/*
 * XREFs of sub_1400D2464 @ 0x1400D2464
 * Callers:
 *     sub_140018EE0 @ 0x140018EE0 (sub_140018EE0.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056A18 @ 0x140056A18 (sub_140056A18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14005D584 @ 0x14005D584 (sub_14005D584.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 *     sub_1400CD01C @ 0x1400CD01C (sub_1400CD01C.c)
 *     sub_1400D35C8 @ 0x1400D35C8 (sub_1400D35C8.c)
 *     sub_1400D3B1C @ 0x1400D3B1C (sub_1400D3B1C.c)
 *     sub_1400D67D4 @ 0x1400D67D4 (sub_1400D67D4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14018AA98 @ 0x14018AA98 (sub_14018AA98.c)
 *     sub_14018D660 @ 0x14018D660 (sub_14018D660.c)
 *     sub_1401914A8 @ 0x1401914A8 (sub_1401914A8.c)
 *     sub_140191538 @ 0x140191538 (sub_140191538.c)
 *     sub_1401915E0 @ 0x1401915E0 (sub_1401915E0.c)
 *     sub_140191680 @ 0x140191680 (sub_140191680.c)
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 */

__int64 __fastcall sub_1400D2464(__int64 Context, PIRP Irp)
{
  int v2; // edi
  char v3; // r12
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int MinorFunction; // esi
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  struct _IO_STACK_LOCATION *v14; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 ProviderId; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // si
  char v22; // r11
  char v23; // r13
  char *v24; // r11
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  unsigned int v35; // esi
  unsigned int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // eax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // [rsp+20h] [rbp-59h]
  __int64 v45; // [rsp+28h] [rbp-51h]
  __int64 v46; // [rsp+30h] [rbp-49h]
  char v47; // [rsp+60h] [rbp-19h]
  char v48; // [rsp+61h] [rbp-18h]
  unsigned int v49; // [rsp+64h] [rbp-15h]
  int v50; // [rsp+6Ch] [rbp-Dh]
  unsigned __int64 v51; // [rsp+70h] [rbp-9h]
  GUID v52; // [rsp+78h] [rbp-1h] BYREF
  GUID v53; // [rsp+88h] [rbp+Fh] BYREF

  v2 = 0;
  v3 = 0;
  v52 = 0LL;
  v6 = sub_1400CA35C(Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v49 = v6;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(Irp, &v52);
    if ( MinorFunction > 0x16 || (v11 = 4718720, !_bittest(&v11, MinorFunction)) )
    {
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(v8, v7, &v52, Irp, MinorFunction, 0, *(_QWORD *)(Context + 8));
    }
    v6 = v49;
  }
  if ( v6 >= 0 )
  {
    v3 = 1;
    goto LABEL_80;
  }
  if ( v6 == -1073741738 && (MinorFunction == 2 || MinorFunction == 20) && *(_DWORD *)(Context + 84) == 5 )
  {
LABEL_80:
    if ( MinorFunction > 7 )
    {
      switch ( MinorFunction )
      {
        case 8u:
          v40 = sub_1400D3B1C(Context, Irp);
          goto LABEL_125;
        case 9u:
          v40 = sub_1401914A8(Context, Irp);
          goto LABEL_125;
        case 0xDu:
          v40 = sub_14018D660(Context, Irp);
          goto LABEL_125;
        case 0x13u:
          if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
          {
            LODWORD(v45) = CurrentStackLocation->Parameters.Read.Length;
            LODWORD(v44) = MinorFunction;
            sub_140056A18(v8, v7, &v52, Irp, v44, v45, *(_QWORD *)(Context + 8));
          }
          v40 = sub_14005D584(Context, Irp);
          goto LABEL_125;
        case 0x14u:
          v40 = sub_140191538(Context, Irp);
          goto LABEL_125;
        case 0x16u:
          if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
          {
            LODWORD(v45) = CurrentStackLocation->Parameters.Create.Options;
            LODWORD(v44) = MinorFunction;
            sub_140056A18(v8, v7, &v52, Irp, v44, v45, *(_QWORD *)(Context + 8));
          }
          v40 = sub_1400CD01C(Context, (__int64)Irp);
          goto LABEL_125;
      }
      if ( MinorFunction != 23 )
      {
LABEL_108:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 152));
        if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
        {
          LODWORD(v44) = Irp->IoStatus.Status;
          sub_140052F3C(v43, &stru_140149FE8, &v52, Irp, v44);
        }
        return (unsigned int)sub_14001B0D0(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
      }
      return (unsigned int)sub_1401942EC(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 7 )
      {
        if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
        {
          LODWORD(v45) = CurrentStackLocation->Parameters.Read.Length;
          LODWORD(v44) = 7;
          sub_140056A18(v8, v7, &v52, Irp, v44, v45, *(_QWORD *)(Context + 8));
        }
        v40 = sub_1400D35C8(Context, Irp);
        goto LABEL_125;
      }
      if ( !MinorFunction )
      {
        v40 = sub_1400D67D4((PVOID)Context, Irp);
        goto LABEL_125;
      }
      v35 = MinorFunction - 1;
      if ( !v35 )
      {
        v40 = sub_1401915E0(Context, Irp);
        goto LABEL_125;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_89;
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 == 1 )
            {
LABEL_89:
              v40 = sub_14018AA98(Context, Irp);
              goto LABEL_125;
            }
            goto LABEL_108;
          }
          v40 = sub_140191680(Context, Irp);
        }
        else
        {
          v40 = sub_1401929D8(Context, Irp);
        }
LABEL_125:
        v42 = v40;
        if ( v3 )
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 152));
        return v42;
      }
      return (unsigned int)sub_140191D68(Context, Irp);
    }
  }
  v12 = byte_140168DAA == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v6;
  if ( v12 )
    goto LABEL_78;
  v53 = 0LL;
  IoGetActivityIdIrp(Irp, &v53);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v14->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_78;
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_77;
  }
  if ( v14->MajorFunction != 15 )
  {
    if ( v14->MajorFunction != 27 )
      goto LABEL_78;
    if ( v14->MinorFunction == 7 && !v14->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v45) = Irp->IoStatus.Status;
        LODWORD(v44) = v2;
        sub_140056AB0(v13, (__int64)v14, &v53, Irp, v44, v45);
      }
      goto LABEL_78;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_78;
    v16 = &stru_140149FE8;
LABEL_77:
    LODWORD(v44) = Irp->IoStatus.Status;
    sub_140052F3C(v13, v16, &v53, Irp, v44);
    goto LABEL_78;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_78;
  ProviderId = v14->Parameters.WMI.ProviderId;
  v18 = 0;
  v19 = 0LL;
  v47 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v29 = *(_BYTE *)(ProviderId + 72);
    v19 = *(_BYTE **)(ProviderId + 32);
    v20 = *(_BYTE *)(ProviderId + 11);
    v18 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v24 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_78;
  v13 = 0LL;
  v50 = 0;
  if ( !*(_DWORD *)(ProviderId + 56) )
    goto LABEL_51;
  v25 = *(_DWORD *)(ProviderId + 56);
  v26 = (unsigned int *)(ProviderId + 120);
  v51 = ProviderId + 120;
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_45:
    v13 = (unsigned int)(v13 + 1);
    v26 = (unsigned int *)(v51 + 4);
    v50 = v13;
    v51 += 4LL;
    if ( (unsigned int)v13 >= v25 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v27 + ProviderId) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v27 + ProviderId) - 65);
    if ( *(_DWORD *)(v27 + ProviderId) == 65 )
    {
      v13 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v27 + ProviderId + 10) )
          v24 = (char *)(v27 + ProviderId + 24);
        v18 = *(_BYTE *)(v27 + ProviderId + 8);
        v19 = *(_BYTE **)(v27 + ProviderId + 16);
        v20 = *(_BYTE *)(v27 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + ProviderId) == 66 )
    {
      v13 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + ProviderId + 12) )
          v24 = (char *)(v27 + ProviderId + 32);
        v19 = *(_BYTE **)(v27 + ProviderId + 24);
        goto LABEL_50;
      }
    }
    goto LABEL_43;
  }
  v13 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_43:
    if ( v48 )
      goto LABEL_51;
    LODWORD(v13) = v50;
    v25 = *(_DWORD *)(ProviderId + 56);
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v27 + ProviderId + 10) )
    v24 = (char *)(v27 + ProviderId + 24);
  v19 = *(_BYTE **)(v27 + ProviderId + 16);
LABEL_50:
  v20 = *(_BYTE *)(v27 + ProviderId + 9);
  v18 = *(_BYTE *)(v27 + ProviderId + 8);
LABEL_51:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_54:
    LOBYTE(v13) = v29 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(ProviderId + 3);
      if ( v30 == 1 || !v19 || !v20 )
        goto LABEL_73;
      LOBYTE(ProviderId) = 0;
      v13 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          LOBYTE(ProviderId) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          ProviderId = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > ProviderId )
            v47 = 0;
          else
            v47 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= ProviderId )
            v23 = *(_BYTE *)v13;
          LOBYTE(ProviderId) = 1;
        }
        v22 = v47;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v2) = v22;
        v33 = v23;
      }
      else
      {
LABEL_73:
        v21 = 0;
        v33 = 0;
      }
      LOBYTE(v46) = v18;
      LOBYTE(v45) = v30;
      LODWORD(v44) = Irp->IoStatus.Status;
      sub_140052E64(v13, ProviderId, &v53, Irp, v44, v45, v46, v21, v2, v33, Irp);
    }
  }
LABEL_78:
  IofCompleteRequest(Irp, 0);
  return v49;
}
