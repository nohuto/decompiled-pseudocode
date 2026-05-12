/*
 * XREFs of RaidAdapterPnpIrp @ 0x1400355D8
 * Callers:
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAdapterStartDeviceIrp @ 0x140035C2C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1400360D4 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x14005D3D0 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQueryIdIrp @ 0x140064BB4 (NvmeAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x140064C48 (RaidAdapterQueryInterfaceIrp.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x140183FA8 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x140185B00 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x140185BA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1401B73BC (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1401B998C (RaidAdapterQueryPnpDeviceStateIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  int v4; // ebx
  char v5; // r12
  int v7; // edx
  BOOLEAN v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // eax
  unsigned int InterfaceIrp; // eax
  unsigned int v14; // r14d
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  char v20; // al
  __int64 v21; // rdx
  char *v22; // r10
  char v23; // si
  unsigned int v24; // eax
  char v25; // r11
  char v26; // r10
  char v27; // r15
  __int64 v28; // rcx
  _BYTE *v29; // r9
  unsigned __int8 v30; // r14
  char *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r13
  char v37; // cl
  char v38; // r8
  char v39; // [rsp+60h] [rbp-19h]
  char v40; // [rsp+61h] [rbp-18h]
  unsigned int v41; // [rsp+64h] [rbp-15h]
  int v42; // [rsp+68h] [rbp-11h]
  unsigned int v43; // [rsp+6Ch] [rbp-Dh]
  __int128 v44; // [rsp+70h] [rbp-9h] BYREF
  __int128 v45; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  LOBYTE(v4) = 0;
  v5 = 0;
  v45 = 0LL;
  v8 = ExAcquireRundownProtectionCacheAware(v3);
  v9 = v8 == 0 ? 0xC0000056 : 0;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  v41 = v9;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v45);
    if ( v10 > 0x16 || (v12 = 4718720, !_bittest(&v12, v10)) )
    {
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v11, v7, (unsigned int)&v45, a2, v10, 0, *(_QWORD *)(a1 + 8));
    }
    v9 = v8 == 0 ? 0xC0000056 : 0;
  }
  if ( v8 )
  {
    v5 = 1;
    goto LABEL_9;
  }
  if ( v10 != 2 && v10 != 20 || *(_DWORD *)(a1 + 88) != 5 )
  {
    v16 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v9;
    if ( v16 )
      goto LABEL_26;
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v18 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v17, &EventNonReadWriteRequestComplete, &v44, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_26;
    }
    if ( *(_BYTE *)v18 != 15 )
    {
      if ( *(_BYTE *)v18 == 27 )
      {
        if ( *(_BYTE *)(v18 + 1) != 7 || *(_DWORD *)(v18 + 8) )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v17, &EventPnpRequestComplete, &v44, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          v19 = *(int **)(a2 + 56);
          if ( v19 )
            v4 = *v19;
          McTemplateK0pqd_EtwWriteTransfer(v17, v18, (unsigned int)&v44, a2, v4, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_26;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_26;
    v21 = *(_QWORD *)(v18 + 8);
    v29 = 0LL;
    v39 = 0;
    v30 = 0;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( *(_BYTE *)(v21 + 2) == 40 )
    {
      v31 = 0LL;
      v40 = 0;
      if ( *(_DWORD *)(v21 + 20) )
        goto LABEL_26;
      v32 = 0LL;
      v42 = 0;
      v43 = *(_DWORD *)(v21 + 56);
      if ( !v43 )
        goto LABEL_26;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v21 + 4 * v32 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v33 = *(unsigned int *)(v21 + 16);
          if ( (unsigned int)v17 < (unsigned int)v33 )
          {
            v34 = (unsigned int)v17;
            v35 = *(_DWORD *)(v17 + v21) - 64;
            if ( v35 )
            {
              LODWORD(v17) = v35 - 1;
              if ( (_DWORD)v17 )
              {
                if ( (_DWORD)v17 == 1 )
                {
                  LODWORD(v17) = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_DWORD *)(v34 + v21 + 12) )
                      v31 = (char *)(v34 + v21 + 32);
                    v29 = *(_BYTE **)(v34 + v21 + 24);
                    goto LABEL_128;
                  }
                }
              }
              else
              {
                LODWORD(v17) = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v34 + v21 + 10) )
                    v31 = (char *)(v34 + v21 + 24);
                  v29 = *(_BYTE **)(v34 + v21 + 16);
                  v30 = *(_BYTE *)(v34 + v21 + 9);
                  v39 = *(_BYTE *)(v34 + v21 + 8);
                }
              }
            }
            else
            {
              LODWORD(v17) = v34 + 40;
              if ( v34 + 40 <= v33 )
              {
                if ( *(_BYTE *)(v34 + v21 + 10) )
                  v31 = (char *)(v34 + v21 + 24);
                v29 = *(_BYTE **)(v34 + v21 + 16);
LABEL_128:
                v36 = *(_BYTE *)(v34 + v21 + 8);
                v30 = *(_BYTE *)(v34 + v21 + 9);
LABEL_122:
                if ( v31 )
                {
                  v37 = *v31;
                  v27 = 0;
                  goto LABEL_130;
                }
                goto LABEL_26;
              }
            }
            if ( v40 )
              goto LABEL_121;
          }
        }
        v32 = (unsigned int)(v42 + 1);
        v42 = v32;
        if ( (unsigned int)v32 >= v43 )
        {
LABEL_121:
          v36 = v39;
          goto LABEL_122;
        }
      }
    }
    v37 = *(_BYTE *)(v21 + 72);
    v29 = *(_BYTE **)(v21 + 32);
    v30 = *(_BYTE *)(v21 + 11);
    v36 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_26;
LABEL_130:
    LOBYTE(v17) = v37 - 8;
    if ( (v17 & 0x5D) != 0 )
    {
LABEL_26:
      IofCompleteRequest((PIRP)a2, 0);
      return v41;
    }
    v38 = *(_BYTE *)(v21 + 3);
    if ( v38 == 1 || !v29 || !v30 )
    {
LABEL_75:
      if ( byte_140173441 < 0 )
      {
        if ( !v27 )
        {
          v26 = 0;
          v25 = 0;
          v23 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v17,
          v21,
          (unsigned int)&v44,
          a2,
          *(_DWORD *)(a2 + 48),
          v38,
          v36,
          v23,
          v25,
          v26,
          a2);
      }
      goto LABEL_26;
    }
    v20 = *v29 & 0x7F;
    if ( v20 == 114 || v20 == 115 )
    {
      v17 = (unsigned __int64)&v29[v30];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v29 + 8) > v17 )
      {
LABEL_73:
        if ( (_BYTE)v21 )
          v27 = 1;
        goto LABEL_75;
      }
      v25 = v29[2];
      v23 = v29[1] & 0xF;
      v26 = v29[3];
    }
    else
    {
      v17 = (unsigned __int64)&v29[v30];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v29 + 8) > v17 )
        goto LABEL_73;
      v22 = v29 + 13;
      v23 = v29[2] & 0xF;
      v24 = v30;
      if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
        v24 = (unsigned __int8)v29[7] + 8;
      v17 = (unsigned __int64)&v29[v24];
      if ( (unsigned __int64)v22 <= v17 )
        v25 = v29[12];
      if ( (unsigned __int64)(v29 + 14) > v17 )
        v26 = 0;
      else
        v26 = *v22;
    }
    LOBYTE(v21) = 1;
    goto LABEL_73;
  }
LABEL_9:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1, a2, v10);
  }
  if ( v10 > 7 )
  {
    switch ( v10 )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(a1, a2);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(a1, a2);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(a1, a2);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            *(_QWORD *)(a2 + 184),
            v7,
            (unsigned int)&v45,
            a2,
            v10,
            *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = NvmeAdapterQueryIdIrp(a1, a2);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(a1, a2);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            *(_QWORD *)(a2 + 184),
            v7,
            (unsigned int)&v45,
            a2,
            v10,
            *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(a1, a2);
        break;
      case 0x17u:
        v5 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(a1, a2);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
        v5 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v44 = 0LL;
          IoGetActivityIdIrp(a2, &v44);
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v28, &EventPnpRequestComplete, &v44, a2, *(_DWORD *)(a2 + 48));
        }
        InterfaceIrp = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
        break;
    }
    goto LABEL_15;
  }
  switch ( v10 )
  {
    case 7u:
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(
          *(_QWORD *)(a2 + 184),
          v7,
          (unsigned int)&v45,
          a2,
          7,
          *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
          *(_QWORD *)(a1 + 8));
      InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(a1, a2);
      break;
    case 0u:
      InterfaceIrp = RaidAdapterStartDeviceIrp((PVOID)a1, (PIRP)a2);
      break;
    case 1u:
      InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(a1, a2);
      break;
    case 2u:
      v5 = 0;
      InterfaceIrp = RaidAdapterRemoveDeviceIrp(a1, a2);
      break;
    case 3u:
      goto LABEL_85;
    case 4u:
      InterfaceIrp = RaidAdapterStopDeviceIrp(a1, a2);
      break;
    case 5u:
      InterfaceIrp = RaidAdapterQueryStopDeviceIrp(a1, a2);
      break;
    default:
LABEL_85:
      InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(a1, a2);
      break;
  }
LABEL_15:
  v14 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2,
      v10,
      InterfaceIrp);
  }
  if ( v5 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  return v14;
}
