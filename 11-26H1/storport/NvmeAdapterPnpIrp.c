/*
 * XREFs of NvmeAdapterPnpIrp @ 0x1400DA0D8
 * Callers:
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x14005D3D0 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQueryIdIrp @ 0x140064BB4 (NvmeAdapterQueryIdIrp.c)
 *     NvmeAdapterDeviceUsageNotificationIrp @ 0x1400D4AA0 (NvmeAdapterDeviceUsageNotificationIrp.c)
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterQueryInterfaceIrp @ 0x1400DB824 (NvmeAdapterQueryInterfaceIrp.c)
 *     NvmeAdapterStartDeviceIrp @ 0x1400DE2A4 (NvmeAdapterStartDeviceIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeAdapterCancelRemoveDeviceIrp @ 0x140197DD0 (NvmeAdapterCancelRemoveDeviceIrp.c)
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140199CA8 (NvmeAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterQueryCapabilitiesIrp @ 0x14019DC04 (NvmeAdapterQueryCapabilitiesIrp.c)
 *     NvmeAdapterQueryPnpDeviceStateIrp @ 0x14019DC98 (NvmeAdapterQueryPnpDeviceStateIrp.c)
 *     NvmeAdapterQueryRemoveDeviceIrp @ 0x14019DD40 (NvmeAdapterQueryRemoveDeviceIrp.c)
 *     NvmeAdapterQueryStopDeviceIrp @ 0x14019DDE4 (NvmeAdapterQueryStopDeviceIrp.c)
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall NvmeAdapterPnpIrp(__int64 Context, PIRP Irp)
{
  int v2; // ebx
  char v3; // r12
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int MinorFunction; // esi
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  _IO_STACK_LOCATION *v14; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // si
  char v21; // r11
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r13
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  unsigned int v36; // esi
  unsigned int v37; // esi
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // esi
  unsigned int InterfaceIrp; // eax
  unsigned int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-59h]
  __int64 v46; // [rsp+28h] [rbp-51h]
  __int64 v47; // [rsp+30h] [rbp-49h]
  char v48; // [rsp+60h] [rbp-19h]
  char v49; // [rsp+61h] [rbp-18h]
  unsigned int v50; // [rsp+64h] [rbp-15h]
  int v51; // [rsp+68h] [rbp-11h]
  unsigned int v52; // [rsp+6Ch] [rbp-Dh]
  GUID v53; // [rsp+70h] [rbp-9h] BYREF
  GUID v54; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v3 = 0;
  v53 = 0LL;
  v6 = NvmeAdapterAcquireRemoveLock(Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v50 = v6;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v53);
    if ( MinorFunction > 0x16 || (v11 = 4718720, !_bittest(&v11, MinorFunction)) )
    {
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v8, v7, &v53, Irp, MinorFunction, 0, *(_QWORD *)(Context + 8));
    }
    v6 = v50;
  }
  if ( v6 >= 0 )
  {
    v3 = 1;
  }
  else if ( v6 != -1073741738 || MinorFunction != 2 && MinorFunction != 20 || *(_DWORD *)(Context + 84) != 5 )
  {
    v12 = StorEtwLoggingEnabled == 0;
    Irp->IoStatus.Information = 0LL;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    Irp->IoStatus.Status = v6;
    if ( v12 )
      goto LABEL_78;
    v54 = 0LL;
    IoGetActivityIdIrp(Irp, &v54);
    v14 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v14->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_77;
      }
LABEL_78:
      IofCompleteRequest(Irp, 0);
      return v50;
    }
    if ( v14->MajorFunction != 15 )
    {
      if ( v14->MajorFunction == 27 )
      {
        if ( v14->MinorFunction == 7 && !v14->Parameters.Read.Length )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            Information = (int *)Irp->IoStatus.Information;
            if ( Information )
              v2 = *Information;
            LODWORD(v46) = Irp->IoStatus.Status;
            LODWORD(v45) = v2;
            McTemplateK0pqd_EtwWriteTransfer(v13, (__int64)v14, &v54, Irp, v45, v46);
          }
          goto LABEL_78;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v16 = &EventPnpRequestComplete;
LABEL_77:
          LODWORD(v45) = Irp->IoStatus.Status;
          McTemplateK0pd_EtwWriteTransfer(v13, v16, &v54, Irp, v45);
          goto LABEL_78;
        }
      }
      goto LABEL_78;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_78;
    SecurityContext = (__int64)v14->Parameters.Create.SecurityContext;
    v18 = 0LL;
    v48 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( *(_BYTE *)(SecurityContext + 2) == 40 )
    {
      v24 = 0LL;
      v49 = 0;
      if ( *(_DWORD *)(SecurityContext + 20) )
        goto LABEL_78;
      v25 = 0LL;
      v51 = 0;
      v52 = *(_DWORD *)(SecurityContext + 56);
      if ( !v52 )
        goto LABEL_78;
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
LABEL_37:
                    v29 = *(_BYTE *)(v27 + SecurityContext + 8);
                    v19 = *(_BYTE *)(v27 + SecurityContext + 9);
                    goto LABEL_46;
                  }
                }
              }
              else
              {
                v13 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v49 = 1;
                  if ( *(_BYTE *)(v27 + SecurityContext + 10) )
                    v24 = (char *)(v27 + SecurityContext + 24);
                  v18 = *(_BYTE **)(v27 + SecurityContext + 16);
                  v19 = *(_BYTE *)(v27 + SecurityContext + 9);
                  v48 = *(_BYTE *)(v27 + SecurityContext + 8);
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
                goto LABEL_37;
              }
            }
            if ( v49 )
              break;
          }
        }
        v25 = (unsigned int)(v51 + 1);
        v51 = v25;
      }
      while ( (unsigned int)v25 < v52 );
      v29 = v48;
LABEL_46:
      if ( !v24 )
        goto LABEL_78;
      v30 = *v24;
      v23 = 0;
    }
    else
    {
      v30 = *(_BYTE *)(SecurityContext + 72);
      v18 = *(_BYTE **)(SecurityContext + 32);
      v19 = *(_BYTE *)(SecurityContext + 11);
      v29 = *(_BYTE *)(SecurityContext + 4);
      if ( *(_BYTE *)(SecurityContext + 2) )
        goto LABEL_78;
    }
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_78;
    v31 = *(_BYTE *)(SecurityContext + 3);
    if ( v31 == 1 || !v18 || !v19 )
    {
LABEL_71:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v21 = 0;
          v20 = 0;
        }
        LOBYTE(v47) = v29;
        LOBYTE(v46) = v31;
        LODWORD(v45) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v13, SecurityContext, &v54, Irp, v45, v46, v47, v20, v21, v22, Irp);
      }
      goto LABEL_78;
    }
    v32 = *v18 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_69;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(SecurityContext) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_69;
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
    LOBYTE(SecurityContext) = 1;
LABEL_69:
    if ( (_BYTE)SecurityContext )
      v23 = 1;
    goto LABEL_71;
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = NvmeAdapterQueryInterfaceIrp(Context, Irp);
        goto LABEL_125;
      case 9u:
        InterfaceIrp = NvmeAdapterQueryCapabilitiesIrp(Context, Irp);
        goto LABEL_125;
      case 0xDu:
        InterfaceIrp = NvmeAdapterFilterResourceRequirementsIrp(Context, Irp);
        goto LABEL_125;
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
        {
          LODWORD(v46) = CurrentStackLocation->Parameters.Read.Length;
          LODWORD(v45) = MinorFunction;
          McTemplateK0pddp_EtwWriteTransfer(v8, v7, &v53, Irp, v45, v46, *(_QWORD *)(Context + 8));
        }
        InterfaceIrp = NvmeAdapterQueryIdIrp(Context, Irp);
        goto LABEL_125;
      case 0x14u:
        InterfaceIrp = NvmeAdapterQueryPnpDeviceStateIrp(Context, Irp);
        goto LABEL_125;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
        {
          LODWORD(v46) = CurrentStackLocation->Parameters.Create.Options;
          LODWORD(v45) = MinorFunction;
          McTemplateK0pddp_EtwWriteTransfer(v8, v7, &v53, Irp, v45, v46, *(_QWORD *)(Context + 8));
        }
        InterfaceIrp = NvmeAdapterDeviceUsageNotificationIrp(Context, (__int64)Irp);
        goto LABEL_125;
    }
    if ( MinorFunction != 23 )
    {
LABEL_108:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 152));
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
      {
        LODWORD(v45) = Irp->IoStatus.Status;
        McTemplateK0pd_EtwWriteTransfer(v44, &EventPnpRequestComplete, &v53, Irp, v45);
      }
      return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
    }
    return (unsigned int)NvmeAdapterSurpriseRemovalIrp(Context, Irp);
  }
  else
  {
    if ( MinorFunction == 7 )
    {
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
      {
        LODWORD(v46) = CurrentStackLocation->Parameters.Read.Length;
        LODWORD(v45) = 7;
        McTemplateK0pddp_EtwWriteTransfer(v8, v7, &v53, Irp, v45, v46, *(_QWORD *)(Context + 8));
      }
      InterfaceIrp = NvmeAdapterQueryDeviceRelationsIrp(Context, Irp);
      goto LABEL_125;
    }
    if ( !MinorFunction )
    {
      InterfaceIrp = NvmeAdapterStartDeviceIrp((PVOID)Context, Irp);
      goto LABEL_125;
    }
    v36 = MinorFunction - 1;
    if ( !v36 )
    {
      InterfaceIrp = NvmeAdapterQueryRemoveDeviceIrp(Context, Irp);
      goto LABEL_125;
    }
    v37 = v36 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_89;
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          if ( v40 == 1 )
          {
LABEL_89:
            InterfaceIrp = NvmeAdapterCancelRemoveDeviceIrp(Context, Irp);
            goto LABEL_125;
          }
          goto LABEL_108;
        }
        InterfaceIrp = NvmeAdapterQueryStopDeviceIrp(Context, Irp);
      }
      else
      {
        InterfaceIrp = NvmeAdapterStopDeviceIrp(Context, Irp);
      }
LABEL_125:
      v43 = InterfaceIrp;
      if ( v3 )
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 152));
      return v43;
    }
    return (unsigned int)NvmeAdapterRemoveDeviceIrp(Context, Irp);
  }
}
