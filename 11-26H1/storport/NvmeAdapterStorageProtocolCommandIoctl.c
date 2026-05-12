/*
 * XREFs of NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
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

__int64 __fastcall NvmeAdapterStorageProtocolCommandIoctl(__int64 a1, union _SLIST_HEADER *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  _DWORD *v6; // rsi
  char *v9; // r12
  _QWORD **ExtendedCommand; // r15
  int ProtocolCommandEffects; // edi
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r12
  int v19; // edi
  int v20; // edx
  __int64 v21; // rcx
  _DWORD *v22; // r8
  int v23; // edx
  int v24; // eax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned __int8 v29; // r15
  char v30; // r10
  char v31; // si
  char v32; // r11
  char v33; // r12
  char *v34; // r12
  int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // r8
  int v39; // ecx
  char v40; // r13
  char v41; // cl
  char v42; // r8
  char v43; // al
  char *v44; // r11
  unsigned int v45; // eax
  __int64 v46; // [rsp+20h] [rbp-99h]
  __int64 v47; // [rsp+28h] [rbp-91h]
  __int64 v48; // [rsp+30h] [rbp-89h]
  __int64 v49; // [rsp+38h] [rbp-81h]
  __int64 v50; // [rsp+40h] [rbp-79h]
  __int64 v51; // [rsp+48h] [rbp-71h]
  char v52; // [rsp+A0h] [rbp-19h] BYREF
  char v53[3]; // [rsp+A1h] [rbp-18h] BYREF
  size_t Size; // [rsp+A4h] [rbp-15h]
  void *v55[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+7h]
  GUID v57; // [rsp+C8h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *a4 = 1;
  v6 = *(_DWORD **)(a3 + 24);
  *(_QWORD *)&v57.Data1 = a4;
  v56 = a1;
  v9 = 0LL;
  v53[0] = 0;
  ExtendedCommand = 0LL;
  v52 = 0;
  LODWORD(Size) = 0;
  *(_OWORD *)v55 = 0LL;
  if ( !v6 || !a2 )
  {
    ProtocolCommandEffects = -1073741811;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    StorEtwNvmeControllerEvent(
      (__int64)a2,
      0,
      2LL,
      (__int64)L"Input buffer does not contain a valid STORAGE_PROTOCOL_COMMAND.",
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    ProtocolCommandEffects = -1073741820;
    goto LABEL_13;
  }
  ProtocolCommandEffects = NvmeValidateProtocolCommandIoctl((__int64)a2, a3);
  if ( ProtocolCommandEffects >= 0 )
  {
    ProtocolCommandEffects = NvmeGetProtocolCommandEffects((__int64)a2, a3, v53, &v52);
    if ( ProtocolCommandEffects >= 0 )
    {
      v12 = v6[20] & 3;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          if ( v12 != 2 || v6[8] || !v6[9] )
            goto LABEL_11;
          goto LABEL_33;
        }
        if ( !v6[8] )
          goto LABEL_11;
      }
      else if ( v6[8] )
      {
LABEL_11:
        ProtocolCommandEffects = -1056964602;
LABEL_12:
        v6[4] = 3;
        goto LABEL_13;
      }
      if ( v6[9] )
        goto LABEL_11;
LABEL_33:
      if ( v6[14] == 2 && !_bittest64((const signed __int64 *)&a2[36].Region, 0x25u) )
      {
        ProtocolCommandEffects = -1056964601;
        goto LABEL_12;
      }
      ExtendedCommand = (_QWORD **)NvmeControllerGetExtendedCommand(a2);
      if ( !ExtendedCommand )
      {
        ProtocolCommandEffects = -1073741670;
        goto LABEL_13;
      }
      v17 = v6[9];
      if ( v17 )
      {
        v18 = (unsigned int)v6[13];
      }
      else
      {
        v17 = v6[8];
        if ( !v17 )
        {
          v19 = 0;
LABEL_49:
          *((_DWORD *)*ExtendedCommand + 1064) = (v6[14] == 1) | (*ExtendedCommand)[532] & 0xFFFFFFFE;
          *((_DWORD *)*ExtendedCommand + 1064) |= 0x20u;
          *((_DWORD *)*ExtendedCommand + 1064) = (v9 != 0LL ? 2 : 0) | (*ExtendedCommand)[532] & 0xFFFFFFFD;
          *((_DWORD *)*ExtendedCommand + 1064) &= ~0x40u;
          if ( v52 || (v20 = 0, v53[0]) )
            v20 = 256;
          *((_DWORD *)*ExtendedCommand + 1064) = v20 | (*ExtendedCommand)[532] & 0xFFFFFEFF;
          *((_WORD *)*ExtendedCommand + 2126) = 0;
          (*ExtendedCommand)[523] = a3;
          (*ExtendedCommand)[524] = NvmeAdapterStorageProtocolCommandIoctlCompletion;
          v21 = v56;
          (*ExtendedCommand)[525] = ExtendedCommand;
          (*ExtendedCommand)[527] = 0LL;
          (*ExtendedCommand)[528] = v21;
          (*ExtendedCommand)[520] = v55[0];
          (*ExtendedCommand)[521] = v55[1];
          *((_DWORD *)*ExtendedCommand + 1062) = v19;
          v22 = *ExtendedCommand;
          v23 = v6[21];
          *((_BYTE *)v22 + 4096) = *((_BYTE *)v6 + 80);
          v24 = v22[1024];
          LODWORD(v21) = v6[20] ^ v24;
          v22[1025] = v23;
          v22[1024] = v24 ^ v21 & 0x300;
          v22[1034] = v6[30];
          v22[1035] = v6[31];
          v22[1036] = v6[32];
          v22[1037] = v6[33];
          v22[1038] = v6[34];
          v22[1039] = v6[35];
          if ( !v9
            || (unsigned int)SetPrpFromBuffer(
                               (__int64)*ExtendedCommand,
                               (__int64)(*ExtendedCommand + 512),
                               (__int64)v55[1],
                               v19,
                               *ExtendedCommand,
                               (__int64)ExtendedCommand[1]) )
          {
            ProtocolCommandEffects = NvmeControllerProcessCommand((__int64)a2, ExtendedCommand);
            if ( ProtocolCommandEffects >= 0 )
            {
              **(_BYTE **)&v57.Data1 = 0;
              return 259LL;
            }
          }
          else
          {
            ProtocolCommandEffects = -1073741595;
          }
          goto LABEL_13;
        }
        v18 = (unsigned int)v6[12];
      }
      v9 = (char *)v6 + v18;
      LODWORD(Size) = v17;
      if ( v9 )
      {
        ProtocolCommandEffects = NvmeAllocateDmaBuffer((__int64)a2, v17, a3, v55, &v55[1], 0);
        if ( ProtocolCommandEffects < 0 )
          goto LABEL_13;
        v19 = Size;
        if ( v6[9] )
          memset_0(v55[0], 0, (unsigned int)Size);
        else
          memmove(v55[0], v9, (unsigned int)Size);
      }
      else
      {
        v19 = Size;
      }
      goto LABEL_49;
    }
  }
LABEL_13:
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( ExtendedCommand )
  {
    _interlockedbittestandreset((volatile signed __int32 *)*ExtendedCommand + 1064, 3u);
    NvmeControllerReclaimExtendedCommand(a2, (__int64)ExtendedCommand);
  }
  if ( v55[0] )
    NvmeFreeDmaBuffer((__int64)a2, Size, a3, (__int64)v55[0], (__int64)v55[1]);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = ProtocolCommandEffects;
  if ( v13 )
    goto LABEL_113;
  v57 = 0LL;
  IoGetActivityIdIrp(a3, &v57);
  v15 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v15 != 14 )
  {
    if ( *(_BYTE *)v15 != 15 )
    {
      if ( *(_BYTE *)v15 == 27 )
      {
        if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v16 = *(int **)(a3 + 56);
            if ( v16 )
              v5 = *v16;
            LODWORD(v47) = *(_DWORD *)(a3 + 48);
            LODWORD(v46) = v5;
            McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v57, a3, v46, v47);
          }
          goto LABEL_113;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v26 = &EventPnpRequestComplete;
LABEL_112:
          LODWORD(v46) = *(_DWORD *)(a3 + 48);
          McTemplateK0pd_EtwWriteTransfer(v14, v26, &v57, a3, v46);
          goto LABEL_113;
        }
      }
      goto LABEL_113;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_113;
    v27 = *(_QWORD *)(v15 + 8);
    v28 = 0LL;
    v52 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( *(_BYTE *)(v27 + 2) == 40 )
    {
      v34 = 0LL;
      v53[0] = 0;
      if ( *(_DWORD *)(v27 + 20) )
        goto LABEL_113;
      v35 = *(_DWORD *)(v27 + 56);
      v36 = 0LL;
      LODWORD(Size) = 0;
      LODWORD(v56) = v35;
      if ( !v35 )
        goto LABEL_113;
      do
      {
        v14 = *(unsigned int *)(v27 + 4 * v36 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v37 = *(unsigned int *)(v27 + 16);
          if ( (unsigned int)v14 < (unsigned int)v37 )
          {
            v38 = (unsigned int)v14;
            v39 = *(_DWORD *)(v14 + v27) - 64;
            if ( v39 )
            {
              v14 = (unsigned int)(v39 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  v14 = v38 + 40;
                  if ( v38 + 40 <= v37 )
                  {
                    if ( *(_DWORD *)(v38 + v27 + 12) )
                      v34 = (char *)(v38 + v27 + 32);
                    v28 = *(_BYTE **)(v38 + v27 + 24);
LABEL_72:
                    v40 = *(_BYTE *)(v38 + v27 + 8);
                    v29 = *(_BYTE *)(v38 + v27 + 9);
                    goto LABEL_81;
                  }
                }
              }
              else
              {
                v14 = v38 + 56;
                if ( v38 + 56 <= v37 )
                {
                  v53[0] = 1;
                  if ( *(_BYTE *)(v38 + v27 + 10) )
                    v34 = (char *)(v38 + v27 + 24);
                  v28 = *(_BYTE **)(v38 + v27 + 16);
                  v29 = *(_BYTE *)(v38 + v27 + 9);
                  v52 = *(_BYTE *)(v38 + v27 + 8);
                }
              }
            }
            else
            {
              v14 = v38 + 40;
              if ( v38 + 40 <= v37 )
              {
                if ( *(_BYTE *)(v38 + v27 + 10) )
                  v34 = (char *)(v38 + v27 + 24);
                v28 = *(_BYTE **)(v38 + v27 + 16);
                goto LABEL_72;
              }
            }
            if ( v53[0] )
              break;
          }
        }
        v36 = (unsigned int)(Size + 1);
        LODWORD(Size) = v36;
      }
      while ( (unsigned int)v36 < (unsigned int)v56 );
      v40 = v52;
LABEL_81:
      if ( !v34 )
        goto LABEL_113;
      v41 = *v34;
      v33 = 0;
    }
    else
    {
      v41 = *(_BYTE *)(v27 + 72);
      v28 = *(_BYTE **)(v27 + 32);
      v29 = *(_BYTE *)(v27 + 11);
      v40 = *(_BYTE *)(v27 + 4);
      if ( *(_BYTE *)(v27 + 2) )
        goto LABEL_113;
    }
    LOBYTE(v14) = v41 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_113;
    v42 = *(_BYTE *)(v27 + 3);
    if ( v42 == 1 || !v28 || !v29 )
    {
LABEL_106:
      if ( byte_140173441 < 0 )
      {
        if ( !v33 )
        {
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        LOBYTE(v51) = v32;
        LOBYTE(v50) = v31;
        LOBYTE(v49) = v30;
        LOBYTE(v48) = v40;
        LOBYTE(v47) = v42;
        LODWORD(v46) = *(_DWORD *)(a3 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v27, &v57, a3, v46, v47, v48, v49, v50, v51, a3);
      }
      goto LABEL_113;
    }
    v43 = *v28 & 0x7F;
    if ( v43 == 114 || v43 == 115 )
    {
      v14 = (unsigned __int64)&v28[v29];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v28 + 8) > v14 )
        goto LABEL_104;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      v14 = (unsigned __int64)&v28[v29];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v28 + 8) > v14 )
        goto LABEL_104;
      v44 = v28 + 13;
      v30 = v28[2] & 0xF;
      v45 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v45 = (unsigned __int8)v28[7] + 8;
      v14 = (unsigned __int64)&v28[v45];
      if ( (unsigned __int64)v44 <= v14 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) > v14 )
        v32 = 0;
      else
        v32 = *v44;
    }
    LOBYTE(v27) = 1;
LABEL_104:
    if ( (_BYTE)v27 )
      v33 = 1;
    goto LABEL_106;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v26 = &EventNonReadWriteRequestComplete;
    goto LABEL_112;
  }
LABEL_113:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)ProtocolCommandEffects;
}
