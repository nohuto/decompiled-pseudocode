/*
 * XREFs of NvmeNamespacePnpIrp @ 0x140040B50
 * Callers:
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x14005D3D0 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceQueryInterfaceIrp @ 0x14010B414 (NvmeNamespaceQueryInterfaceIrp.c)
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010D4BC (NvmeNamespaceRemoveDeviceIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitIgnorePnpIrp @ 0x140189560 (RaUnitIgnorePnpIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x14018E7DC (RaUnitSucceedPnpIrp.c)
 *     NvmeNamespaceCancelStopDeviceIrp @ 0x1401A3C58 (NvmeNamespaceCancelStopDeviceIrp.c)
 *     NvmeNamespaceDeviceEnumeratedIrp @ 0x1401A4A28 (NvmeNamespaceDeviceEnumeratedIrp.c)
 *     NvmeNamespaceQueryCapabilitiesIrp @ 0x1401A7078 (NvmeNamespaceQueryCapabilitiesIrp.c)
 *     NvmeNamespaceQueryDeviceRelationsIrp @ 0x1401A779C (NvmeNamespaceQueryDeviceRelationsIrp.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A7B78 (NvmeNamespaceQueryDeviceTextIrp.c)
 *     NvmeNamespaceQueryIdIrp @ 0x1401A8648 (NvmeNamespaceQueryIdIrp.c)
 *     NvmeNamespaceQueryPnpDeviceStateIrp @ 0x1401A8A50 (NvmeNamespaceQueryPnpDeviceStateIrp.c)
 *     NvmeNamespaceQueryRemoveDeviceIrp @ 0x1401A8DDC (NvmeNamespaceQueryRemoveDeviceIrp.c)
 *     NvmeNamespaceQueryStopDeviceIrp @ 0x1401A9180 (NvmeNamespaceQueryStopDeviceIrp.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C (NvmeNamespaceStartDeviceIrp.c)
 *     NvmeNamespaceStopDeviceIrp @ 0x1401AA3C4 (NvmeNamespaceStopDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 */

__int64 __fastcall NvmeNamespacePnpIrp(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v5; // edx
  __int64 v6; // r15
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  void *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // bl
  char v21; // r11
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  int v29; // ecx
  char v30; // r13
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  char v37; // r12
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int PnpDeviceStateIrp; // eax
  unsigned int IdIrp; // eax
  unsigned int v44; // ebx
  char v45; // [rsp+60h] [rbp-19h] BYREF
  char v46; // [rsp+61h] [rbp-18h]
  unsigned int v47; // [rsp+64h] [rbp-15h]
  int v48; // [rsp+68h] [rbp-11h]
  unsigned int v49; // [rsp+6Ch] [rbp-Dh]
  __int128 v50; // [rsp+70h] [rbp-9h] BYREF
  __int128 v51; // [rsp+80h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  v51 = 0LL;
  v45 = 0;
  v47 = ((__int64 (*)(void))NvmeNamespaceAcquireRemoveLock)();
  if ( v47 == -1073741738 && *(_DWORD *)(a1 + 96) == 7 )
  {
    ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    v47 = NvmeNamespaceAcquireRemoveLock(a1, a2);
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(unsigned __int8 *)(v6 + 1);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v51);
    if ( v7 > 0x16 || (v9 = 4718720, !_bittest(&v9, v7)) )
    {
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v8, v5, (unsigned int)&v51, a2, v7, 0, *(_QWORD *)(a1 + 8));
    }
  }
  v10 = v47;
  if ( (v47 & 0x80000000) != 0 )
  {
    if ( v7 != 2 || (v11 = *(_DWORD *)(a1 + 96), v11 != 5) && v11 != 7 )
    {
      v12 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v10;
      if ( v12 )
        goto LABEL_79;
      v50 = 0LL;
      IoGetActivityIdIrp(a2, &v50);
      v14 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v14 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
        {
          v16 = &EventNonReadWriteRequestComplete;
          goto LABEL_78;
        }
LABEL_79:
        IofCompleteRequest((PIRP)a2, 0);
        return v47;
      }
      if ( *(_BYTE *)v14 != 15 )
      {
        if ( *(_BYTE *)v14 == 27 )
        {
          if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v15 = *(int **)(a2 + 56);
              if ( v15 )
                v2 = *v15;
              McTemplateK0pqd_EtwWriteTransfer(v13, v14, (unsigned int)&v50, a2, v2, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_79;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v16 = &EventPnpRequestComplete;
LABEL_78:
            McTemplateK0pd_EtwWriteTransfer(v13, v16, &v50, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_79;
          }
        }
        goto LABEL_79;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_79;
      v17 = *(_QWORD *)(v14 + 8);
      v18 = 0LL;
      v45 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      if ( *(_BYTE *)(v17 + 2) == 40 )
      {
        v24 = 0LL;
        v46 = 0;
        if ( *(_DWORD *)(v17 + 20) )
          goto LABEL_79;
        v25 = *(_DWORD *)(v17 + 56);
        v26 = 0LL;
        v48 = 0;
        v49 = v25;
        if ( !v25 )
          goto LABEL_79;
        do
        {
          v13 = *(unsigned int *)(v17 + 4 * v26 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v27 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v13 < (unsigned int)v27 )
            {
              v28 = (unsigned int)v13;
              v29 = *(_DWORD *)(v13 + v17) - 64;
              if ( v29 )
              {
                LODWORD(v13) = v29 - 1;
                if ( (_DWORD)v13 )
                {
                  if ( (_DWORD)v13 == 1 )
                  {
                    LODWORD(v13) = v28 + 40;
                    if ( v28 + 40 <= v27 )
                    {
                      if ( *(_DWORD *)(v28 + v17 + 12) )
                        v24 = (char *)(v28 + v17 + 32);
                      v18 = *(_BYTE **)(v28 + v17 + 24);
LABEL_38:
                      v30 = *(_BYTE *)(v28 + v17 + 8);
                      v19 = *(_BYTE *)(v28 + v17 + 9);
                      goto LABEL_47;
                    }
                  }
                }
                else
                {
                  LODWORD(v13) = v28 + 56;
                  if ( v28 + 56 <= v27 )
                  {
                    v46 = 1;
                    if ( *(_BYTE *)(v28 + v17 + 10) )
                      v24 = (char *)(v28 + v17 + 24);
                    v18 = *(_BYTE **)(v28 + v17 + 16);
                    v19 = *(_BYTE *)(v28 + v17 + 9);
                    v45 = *(_BYTE *)(v28 + v17 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v13) = v28 + 40;
                if ( v28 + 40 <= v27 )
                {
                  if ( *(_BYTE *)(v28 + v17 + 10) )
                    v24 = (char *)(v28 + v17 + 24);
                  v18 = *(_BYTE **)(v28 + v17 + 16);
                  goto LABEL_38;
                }
              }
              if ( v46 )
                break;
            }
          }
          v26 = (unsigned int)(v48 + 1);
          v48 = v26;
        }
        while ( (unsigned int)v26 < v49 );
        v30 = v45;
LABEL_47:
        if ( !v24 )
          goto LABEL_79;
        v31 = *v24;
        v23 = 0;
      }
      else
      {
        v31 = *(_BYTE *)(v17 + 72);
        v18 = *(_BYTE **)(v17 + 32);
        v19 = *(_BYTE *)(v17 + 11);
        v30 = *(_BYTE *)(v17 + 4);
        if ( *(_BYTE *)(v17 + 2) )
          goto LABEL_79;
      }
      LOBYTE(v13) = v31 - 8;
      if ( (v13 & 0x5D) != 0 )
        goto LABEL_79;
      v32 = *(_BYTE *)(v17 + 3);
      if ( v32 == 1 || !v18 || !v19 )
      {
LABEL_72:
        if ( byte_140173441 < 0 )
        {
          if ( !v23 )
          {
            v22 = 0;
            v21 = 0;
            v20 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v13,
            v17,
            (unsigned int)&v50,
            a2,
            *(_DWORD *)(a2 + 48),
            v32,
            v30,
            v20,
            v21,
            v22,
            a2);
        }
        goto LABEL_79;
      }
      v33 = *v18 & 0x7F;
      if ( v33 == 114 || v33 == 115 )
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_70;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v13 = (unsigned __int64)&v18[v19];
        LOBYTE(v17) = 0;
        if ( (unsigned __int64)(v18 + 8) > v13 )
          goto LABEL_70;
        v34 = v18 + 13;
        v20 = v18[2] & 0xF;
        v35 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v35 = (unsigned __int8)v18[7] + 8;
        v13 = (unsigned __int64)&v18[v35];
        if ( (unsigned __int64)v34 <= v13 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) > v13 )
          v22 = 0;
        else
          v22 = *v34;
      }
      LOBYTE(v17) = 1;
LABEL_70:
      if ( (_BYTE)v17 )
        v23 = 1;
      goto LABEL_72;
    }
    goto LABEL_93;
  }
  v37 = 1;
  v45 = 1;
  if ( v7 > 0xC )
  {
    if ( v7 > 0x13 )
    {
      switch ( v7 )
      {
        case 0x14u:
          PnpDeviceStateIrp = NvmeNamespaceQueryPnpDeviceStateIrp(a1, a2);
          goto LABEL_129;
        case 0x15u:
LABEL_111:
          PnpDeviceStateIrp = RaUnitIgnorePnpIrp(v47, a2);
          goto LABEL_129;
        case 0x16u:
          if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              v47,
              v5,
              (unsigned int)&v51,
              a2,
              v7,
              *(_DWORD *)(v6 + 16),
              *(_QWORD *)(a1 + 8));
          IdIrp = NvmeNamespaceDeviceUsageNotificationIrp(a1, a2);
          break;
        case 0x17u:
          return (unsigned int)NvmeNamespaceSurpriseRemovalIrp(a1, a2);
        case 0x19u:
          IdIrp = NvmeNamespaceDeviceEnumeratedIrp(a1, a2);
          break;
        default:
          goto LABEL_111;
      }
    }
    else
    {
      if ( v7 != 19 )
        goto LABEL_111;
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v47, v5, (unsigned int)&v51, a2, 19, *(_DWORD *)(v6 + 8), *(_QWORD *)(a1 + 8));
      IdIrp = NvmeNamespaceQueryIdIrp(a1, a2);
    }
    v44 = IdIrp;
LABEL_130:
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
    return v44;
  }
  if ( v7 == 12 )
  {
    PnpDeviceStateIrp = NvmeNamespaceQueryDeviceTextIrp(a1, a2);
    goto LABEL_129;
  }
  if ( v7 <= 6 )
  {
    if ( v7 == 6 )
      goto LABEL_92;
    if ( !v7 )
    {
      PnpDeviceStateIrp = NvmeNamespaceStartDeviceIrp(a1, a2);
      goto LABEL_129;
    }
    v38 = v7 - 1;
    if ( !v38 )
    {
      PnpDeviceStateIrp = NvmeNamespaceQueryRemoveDeviceIrp(a1, a2);
      goto LABEL_129;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
LABEL_93:
      PnpDeviceStateIrp = NvmeNamespaceRemoveDeviceIrp(a1, a2, &v45);
      v37 = v45;
      goto LABEL_129;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
LABEL_92:
      PnpDeviceStateIrp = NvmeNamespaceCancelStopDeviceIrp(a1, a2);
      goto LABEL_129;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      PnpDeviceStateIrp = NvmeNamespaceStopDeviceIrp(a1, a2);
      goto LABEL_129;
    }
    if ( v41 == 1 )
    {
      PnpDeviceStateIrp = NvmeNamespaceQueryStopDeviceIrp(a1, a2);
      goto LABEL_129;
    }
    goto LABEL_111;
  }
  if ( v7 != 7 )
  {
    if ( v7 == 8 )
    {
      PnpDeviceStateIrp = NvmeNamespaceQueryInterfaceIrp(a1, a2);
      goto LABEL_129;
    }
    if ( v7 == 9 )
    {
      PnpDeviceStateIrp = NvmeNamespaceQueryCapabilitiesIrp(a1, a2);
      goto LABEL_129;
    }
    if ( v7 - 10 <= 1 )
    {
      PnpDeviceStateIrp = RaUnitSucceedPnpIrp(v47, a2);
      goto LABEL_129;
    }
    goto LABEL_111;
  }
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
    McTemplateK0pddp_EtwWriteTransfer(v47, v5, (unsigned int)&v51, a2, 7, *(_DWORD *)(v6 + 8), *(_QWORD *)(a1 + 8));
  PnpDeviceStateIrp = NvmeNamespaceQueryDeviceRelationsIrp(a1, a2);
LABEL_129:
  v44 = PnpDeviceStateIrp;
  if ( v37 )
    goto LABEL_130;
  return v44;
}
