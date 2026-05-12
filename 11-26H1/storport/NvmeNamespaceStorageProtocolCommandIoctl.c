/*
 * XREFs of NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeGetProtocolCommandEffects @ 0x14008FDE0 (NvmeGetProtocolCommandEffects.c)
 *     NvmeValidateProtocolCommandIoctl @ 0x140090310 (NvmeValidateProtocolCommandIoctl.c)
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageProtocolCommandIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  char *v8; // r12
  unsigned int v9; // esi
  _QWORD **ExtendedCommand; // r15
  int ProtocolCommandEffects; // edi
  _DWORD *v12; // rsi
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r12
  unsigned int v21; // edi
  unsigned __int16 v22; // dx
  _DWORD *v23; // r8
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rdx
  char v30; // r13
  _BYTE *v31; // r9
  unsigned __int8 v32; // r15
  char v33; // r10
  char v34; // si
  char v35; // r11
  char v36; // r12
  char *v37; // r12
  int v38; // ecx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ecx
  char v43; // cl
  char v44; // al
  char v45; // r8
  char *v46; // r11
  unsigned int v47; // eax
  __int64 v48; // [rsp+20h] [rbp-59h]
  __int64 v49; // [rsp+28h] [rbp-51h]
  unsigned __int8 v50[4]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-15h]
  char Size_4; // [rsp+68h] [rbp-11h] BYREF
  int v53; // [rsp+6Ch] [rbp-Dh]
  void *v54[2]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE *v55; // [rsp+80h] [rbp+7h]
  GUID v56; // [rsp+88h] [rbp+Fh] BYREF

  v3 = 0;
  v55 = a3;
  Size_4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *a3 = 1;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  *(_OWORD *)v54 = 0LL;
  v50[0] = 0;
  v9 = 0;
  Size = 0;
  ExtendedCommand = 0LL;
  if ( (*(_BYTE *)(v7 + 136) & 2) != 0 )
  {
    ProtocolCommandEffects = -1073741637;
    goto LABEL_6;
  }
  v12 = *(_DWORD **)(a2 + 24);
  if ( !v12 )
  {
    ProtocolCommandEffects = -1073741811;
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(v5 + 16) < 0x10u )
  {
    ProtocolCommandEffects = -1073741820;
    goto LABEL_5;
  }
  if ( (int)v12[3] < 0 )
    return NvmeAdapterDeviceControlIrpFromNamespace(*(_QWORD *)(v7 + 128), v7, a2);
  ProtocolCommandEffects = NvmeValidateProtocolCommandIoctl(v7, a2);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_5;
  ProtocolCommandEffects = NvmeGetProtocolCommandEffects(*(_QWORD *)(a1 + 16), a2, &Size_4, v50);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_5;
  if ( Size_4 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    return NvmeAdapterDeviceControlIrpFromNamespace(*(_QWORD *)(v7 + 128), v7, a2);
  }
  v18 = v12[20] & 3;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      if ( v18 != 2 || v12[8] || !v12[9] )
        goto LABEL_31;
      goto LABEL_38;
    }
    if ( !v12[8] )
      goto LABEL_31;
  }
  else if ( v12[8] )
  {
LABEL_31:
    v12[4] = 3;
    ProtocolCommandEffects = -1056964602;
    goto LABEL_5;
  }
  if ( v12[9] )
    goto LABEL_31;
LABEL_38:
  if ( v12[14] == 2 && !_bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 16) + 584LL), 0x25u) )
  {
    v12[4] = 3;
    ProtocolCommandEffects = -1056964601;
    goto LABEL_5;
  }
  ExtendedCommand = (_QWORD **)NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
  if ( !ExtendedCommand )
  {
    ProtocolCommandEffects = -1073741670;
    goto LABEL_5;
  }
  v19 = v12[9];
  if ( v19 )
  {
    v20 = (unsigned int)v12[13];
    goto LABEL_47;
  }
  v19 = v12[8];
  if ( v19 )
  {
    v20 = (unsigned int)v12[12];
LABEL_47:
    v8 = (char *)v12 + v20;
    Size = v19;
    if ( v8 )
    {
      ProtocolCommandEffects = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v19, (__int64)a3, v54, &v54[1], 0);
      if ( ProtocolCommandEffects < 0 )
      {
        v9 = Size;
        goto LABEL_6;
      }
      v21 = Size;
      if ( v12[9] )
        memset_0(v54[0], 0, Size);
      else
        memmove(v54[0], v8, Size);
    }
    else
    {
      v21 = Size;
    }
    goto LABEL_54;
  }
  v21 = 0;
LABEL_54:
  *((_DWORD *)*ExtendedCommand + 1064) = (v12[14] == 1) | (*ExtendedCommand)[532] & 0xFFFFFFFE;
  *((_DWORD *)*ExtendedCommand + 1064) |= 0x20u;
  *((_DWORD *)*ExtendedCommand + 1064) = (v8 != 0LL ? 2 : 0) | (*ExtendedCommand)[532] & 0xFFFFFFFD;
  v22 = v50[0] << 8;
  *((_DWORD *)*ExtendedCommand + 1064) &= ~0x40u;
  *((_DWORD *)*ExtendedCommand + 1064) ^= ((unsigned __int16)*((_DWORD *)*ExtendedCommand + 1064) ^ v22) & 0x100;
  *((_WORD *)*ExtendedCommand + 2126) = 0;
  (*ExtendedCommand)[523] = a2;
  (*ExtendedCommand)[524] = NvmeNamespaceStorageProtocolCommandIoctlCompletion;
  (*ExtendedCommand)[525] = ExtendedCommand;
  (*ExtendedCommand)[527] = a1;
  (*ExtendedCommand)[520] = v54[0];
  (*ExtendedCommand)[521] = v54[1];
  *((_DWORD *)*ExtendedCommand + 1062) = v21;
  v23 = *ExtendedCommand;
  v24 = *(_DWORD *)(a1 + 56);
  *((_BYTE *)v23 + 4096) = *((_BYTE *)v12 + 80);
  v25 = v23[1024];
  v26 = v12[20] ^ v25;
  v23[1025] = v24;
  v23[1024] = v25 ^ v26 & 0x300;
  v23[1034] = v12[30];
  v23[1035] = v12[31];
  v23[1036] = v12[32];
  v23[1037] = v12[33];
  v23[1038] = v12[34];
  v27 = v12[35];
  v9 = Size;
  v23[1039] = v27;
  if ( !v8
    || (unsigned int)SetPrpFromBuffer(
                       (__int64)*ExtendedCommand,
                       (__int64)(*ExtendedCommand + 512),
                       (__int64)v54[1],
                       v9,
                       *ExtendedCommand,
                       (__int64)ExtendedCommand[1]) )
  {
    ProtocolCommandEffects = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
    if ( ProtocolCommandEffects >= 0 )
    {
      *v55 = 0;
      return 259LL;
    }
  }
  else
  {
    ProtocolCommandEffects = -1073741595;
  }
LABEL_6:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( ExtendedCommand )
  {
    _interlockedbittestandreset((volatile signed __int32 *)*ExtendedCommand + 1064, 3u);
    NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), (__int64)ExtendedCommand);
  }
  if ( v54[0] )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v9, (__int64)a3, (__int64)v54[0], (__int64)v54[1]);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = ProtocolCommandEffects;
  if ( v13 )
    goto LABEL_116;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_116;
    v28 = &EventNonReadWriteRequestComplete;
    goto LABEL_115;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_116;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v49) = *(_DWORD *)(a2 + 48);
        LODWORD(v48) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v56, a2, v48, v49);
      }
      goto LABEL_116;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_116;
    v28 = &EventPnpRequestComplete;
LABEL_115:
    LODWORD(v48) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v28, &v56, a2, v48);
    goto LABEL_116;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_116;
  v29 = *(_QWORD *)(v15 + 8);
  v30 = 0;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(v29 + 2) == 40 )
  {
    v37 = 0LL;
    v50[0] = 0;
    if ( *(_DWORD *)(v29 + 20) )
      goto LABEL_116;
    v38 = *(_DWORD *)(v29 + 56);
    v39 = 0LL;
    v53 = 0;
    LODWORD(v55) = v38;
    if ( !v38 )
      goto LABEL_116;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v29 + 4 * v39 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v40 = *(unsigned int *)(v29 + 16);
        if ( (unsigned int)v14 < (unsigned int)v40 )
        {
          v41 = (unsigned int)v14;
          v42 = *(_DWORD *)(v14 + v29) - 64;
          if ( v42 )
          {
            v14 = (unsigned int)(v42 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
              {
                v14 = v41 + 40;
                if ( v41 + 40 <= v40 )
                {
                  if ( *(_DWORD *)(v41 + v29 + 12) )
                    v37 = (char *)(v41 + v29 + 32);
                  v31 = *(_BYTE **)(v41 + v29 + 24);
                  goto LABEL_86;
                }
              }
            }
            else
            {
              v14 = v41 + 56;
              if ( v41 + 56 <= v40 )
              {
                v50[0] = 1;
                if ( *(_BYTE *)(v41 + v29 + 10) )
                  v37 = (char *)(v41 + v29 + 24);
                v30 = *(_BYTE *)(v41 + v29 + 8);
                v31 = *(_BYTE **)(v41 + v29 + 16);
                v32 = *(_BYTE *)(v41 + v29 + 9);
              }
            }
          }
          else
          {
            v14 = v41 + 40;
            if ( v41 + 40 <= v40 )
            {
              if ( *(_BYTE *)(v41 + v29 + 10) )
                v37 = (char *)(v41 + v29 + 24);
              v31 = *(_BYTE **)(v41 + v29 + 16);
LABEL_86:
              v32 = *(_BYTE *)(v41 + v29 + 9);
              v30 = *(_BYTE *)(v41 + v29 + 8);
LABEL_87:
              if ( v37 )
              {
                v43 = *v37;
                v36 = 0;
                goto LABEL_90;
              }
              goto LABEL_116;
            }
          }
          if ( v50[0] )
            goto LABEL_87;
        }
      }
      v39 = (unsigned int)(v53 + 1);
      v53 = v39;
      if ( (unsigned int)v39 >= (unsigned int)v55 )
        goto LABEL_87;
    }
  }
  v43 = *(_BYTE *)(v29 + 72);
  v31 = *(_BYTE **)(v29 + 32);
  v32 = *(_BYTE *)(v29 + 11);
  v30 = *(_BYTE *)(v29 + 4);
  if ( *(_BYTE *)(v29 + 2) )
    goto LABEL_116;
LABEL_90:
  LOBYTE(v14) = v43 - 8;
  if ( (v14 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v29 + 3) == 1 || !v31 || !v32 )
    {
LABEL_109:
      if ( byte_140173441 < 0 )
      {
        if ( !v36 )
        {
          v35 = 0;
          v34 = 0;
          v33 = 0;
        }
        LOBYTE(v49) = *(_BYTE *)(v29 + 3);
        LODWORD(v48) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v29, &v56, a2, v48, v49, v30, v33, v34, v35, a2);
      }
      goto LABEL_116;
    }
    v44 = *v31 & 0x7F;
    if ( v44 == 114 || v44 == 115 )
    {
      v14 = (unsigned __int64)&v31[v32];
      v45 = 0;
      if ( (unsigned __int64)(v31 + 8) > v14 )
        goto LABEL_107;
      v34 = v31[2];
      v33 = v31[1] & 0xF;
      v35 = v31[3];
    }
    else
    {
      v14 = (unsigned __int64)&v31[v32];
      v45 = 0;
      if ( (unsigned __int64)(v31 + 8) > v14 )
        goto LABEL_107;
      v46 = v31 + 13;
      v33 = v31[2] & 0xF;
      v47 = v32;
      if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
        v47 = (unsigned __int8)v31[7] + 8;
      v14 = (unsigned __int64)&v31[v47];
      if ( (unsigned __int64)v46 <= v14 )
        v34 = v31[12];
      if ( (unsigned __int64)(v31 + 14) > v14 )
        v35 = 0;
      else
        v35 = *v46;
    }
    v45 = 1;
LABEL_107:
    if ( v45 )
      v36 = 1;
    goto LABEL_109;
  }
LABEL_116:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)ProtocolCommandEffects;
}
