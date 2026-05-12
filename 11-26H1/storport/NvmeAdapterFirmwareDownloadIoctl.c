/*
 * XREFs of NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 *     GetNvmeFirmwareGranularity @ 0x1400D1AF8 (GetNvmeFirmwareGranularity.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeAdapterFirmwareDownloadIoctl(__int64 a1, union _SLIST_HEADER *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  int DmaBuffer; // edi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int NvmeFirmwareGranularity; // eax
  _QWORD **ExtendedCommand; // r12
  const void *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // r13
  _BYTE *v28; // r9
  unsigned __int8 v29; // r15
  char v30; // r10
  char v31; // r14
  char v32; // r11
  char v33; // r12
  char *v34; // r12
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  char v39; // cl
  char v40; // al
  char v41; // r8
  char *v42; // r11
  unsigned int v43; // eax
  __int64 v44; // [rsp+20h] [rbp-59h]
  __int64 v45; // [rsp+28h] [rbp-51h]
  char v46; // [rsp+60h] [rbp-19h]
  int v48; // [rsp+68h] [rbp-11h]
  void *v49[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v50; // [rsp+80h] [rbp+7h]
  GUID v51; // [rsp+88h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  v50 = a1;
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v10 = *(unsigned int *)(v4 + 16);
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( !a2 )
    goto LABEL_28;
  v8 = *(_QWORD *)(a3 + 24);
  if ( (unsigned int)v10 < 0x28 )
  {
LABEL_3:
    DmaBuffer = -1073741820;
    goto LABEL_29;
  }
  if ( *(_DWORD *)v8 == 40 )
  {
    if ( (unsigned int)v10 < *(_DWORD *)(v8 + 4) )
      goto LABEL_3;
    v12 = *(_QWORD *)(v8 + 24);
    v13 = v12 + 32;
  }
  else
  {
    if ( *(_DWORD *)v8 != 48 )
      goto LABEL_28;
    v9 = *(_QWORD *)(a3 + 24);
    if ( (unsigned int)v10 < *(_DWORD *)(v8 + 4) )
      goto LABEL_3;
    v12 = *(_QWORD *)(v8 + 24);
    v13 = v12 + 40;
  }
  if ( v10 < v13 )
    goto LABEL_3;
  if ( !v12 || ((*(_BYTE *)(v8 + 16) | (unsigned __int8)v12) & 3) != 0 || v12 > *(unsigned int *)(a2[8].Alignment + 200) )
    goto LABEL_28;
  if ( (a2[60].Region & 0x800) == 0 )
    a2[60].Region |= 0x800uLL;
  NvmeFirmwareGranularity = GetNvmeFirmwareGranularity((__int64)a2);
  if ( NvmeFirmwareGranularity )
  {
    if ( *(_QWORD *)(v8 + 24) % (unsigned __int64)NvmeFirmwareGranularity )
    {
LABEL_28:
      DmaBuffer = -1073741811;
      goto LABEL_29;
    }
  }
  ExtendedCommand = (_QWORD **)NvmeControllerGetExtendedCommand(a2);
  if ( ExtendedCommand )
  {
    DmaBuffer = NvmeAllocateDmaBuffer((__int64)a2, *(_DWORD *)(v8 + 24), v10, v49, &v49[1], 0);
    if ( DmaBuffer >= 0 )
    {
      v16 = (const void *)(v9 + 40);
      if ( !v9 )
        v16 = (const void *)(v8 + 32);
      memmove(v49[0], v16, *(_QWORD *)(v8 + 24));
      *((_DWORD *)*ExtendedCommand + 1064) |= 1u;
      *((_DWORD *)*ExtendedCommand + 1064) |= 0x20u;
      *((_DWORD *)*ExtendedCommand + 1064) |= 2u;
      *((_DWORD *)*ExtendedCommand + 1064) &= ~0x40u;
      *((_WORD *)*ExtendedCommand + 2126) = 0;
      (*ExtendedCommand)[523] = a3;
      (*ExtendedCommand)[524] = NvmeAdapterFirmwareDownloadIoctlCompletion;
      v17 = v50;
      (*ExtendedCommand)[525] = ExtendedCommand;
      (*ExtendedCommand)[528] = v17;
      (*ExtendedCommand)[520] = v49[0];
      (*ExtendedCommand)[521] = v49[1];
      *((_DWORD *)*ExtendedCommand + 1062) = *(_DWORD *)(v8 + 24);
      v18 = *ExtendedCommand;
      v19 = (*(_QWORD *)(v8 + 24) >> 2) - 1;
      v18[1035] = *(_QWORD *)(v8 + 16) >> 2;
      v18[1034] = v19;
      *((_BYTE *)v18 + 4096) = 17;
      if ( (unsigned int)SetPrpFromBuffer(
                           (__int64)*ExtendedCommand,
                           (__int64)(*ExtendedCommand + 512),
                           (__int64)v49[1],
                           *(_DWORD *)(v8 + 24),
                           *ExtendedCommand,
                           (__int64)ExtendedCommand[1]) )
      {
        DmaBuffer = NvmeControllerProcessCommand((__int64)a2, ExtendedCommand);
        if ( DmaBuffer >= 0 )
        {
          *a4 = 0;
          return 259LL;
        }
      }
      else
      {
        DmaBuffer = -1073741595;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)*ExtendedCommand + 1064, 3u);
    NvmeControllerReclaimExtendedCommand(a2, (__int64)ExtendedCommand);
  }
  else
  {
    DmaBuffer = -1073741670;
  }
LABEL_29:
  if ( v49[0] )
    NvmeFreeDmaBuffer((_DWORD)a2, *(_DWORD *)(v8 + 24), v10, v49[0], (__int64)v49[1]);
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = DmaBuffer;
  if ( v21 )
    goto LABEL_97;
  v51 = 0LL;
  IoGetActivityIdIrp(a3, &v51);
  v23 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_97;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v24 = *(int **)(a3 + 56);
        if ( v24 )
          v5 = *v24;
        LODWORD(v45) = *(_DWORD *)(a3 + 48);
        LODWORD(v44) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v51, a3, v44, v45);
      }
      goto LABEL_97;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_97;
    v25 = &EventPnpRequestComplete;
LABEL_96:
    LODWORD(v44) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v51, a3, v44);
    goto LABEL_97;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_97;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v26 + 2) == 40 )
  {
    v34 = 0LL;
    v46 = 0;
    if ( *(_DWORD *)(v26 + 20) )
      goto LABEL_97;
    v35 = 0LL;
    v48 = 0;
    LODWORD(v50) = *(_DWORD *)(v26 + 56);
    if ( !(_DWORD)v50 )
      goto LABEL_97;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v26 + 4 * v35 + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v36 = *(unsigned int *)(v26 + 16);
        if ( (unsigned int)v22 < (unsigned int)v36 )
        {
          v37 = (unsigned int)v22;
          v38 = *(_DWORD *)(v22 + v26) - 64;
          if ( v38 )
          {
            v22 = (unsigned int)(v38 - 1);
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                v22 = v37 + 40;
                if ( v37 + 40 <= v36 )
                {
                  if ( *(_DWORD *)(v37 + v26 + 12) )
                    v34 = (char *)(v37 + v26 + 32);
                  v28 = *(_BYTE **)(v37 + v26 + 24);
                  goto LABEL_67;
                }
              }
            }
            else
            {
              v22 = v37 + 56;
              if ( v37 + 56 <= v36 )
              {
                v46 = 1;
                if ( *(_BYTE *)(v37 + v26 + 10) )
                  v34 = (char *)(v37 + v26 + 24);
                v27 = *(_BYTE *)(v37 + v26 + 8);
                v28 = *(_BYTE **)(v37 + v26 + 16);
                v29 = *(_BYTE *)(v37 + v26 + 9);
              }
            }
          }
          else
          {
            v22 = v37 + 40;
            if ( v37 + 40 <= v36 )
            {
              if ( *(_BYTE *)(v37 + v26 + 10) )
                v34 = (char *)(v37 + v26 + 24);
              v28 = *(_BYTE **)(v37 + v26 + 16);
LABEL_67:
              v29 = *(_BYTE *)(v37 + v26 + 9);
              v27 = *(_BYTE *)(v37 + v26 + 8);
LABEL_68:
              if ( v34 )
              {
                v39 = *v34;
                v33 = 0;
                goto LABEL_71;
              }
              goto LABEL_97;
            }
          }
          if ( v46 )
            goto LABEL_68;
        }
      }
      v35 = (unsigned int)(v48 + 1);
      v48 = v35;
      if ( (unsigned int)v35 >= (unsigned int)v50 )
        goto LABEL_68;
    }
  }
  v39 = *(_BYTE *)(v26 + 72);
  v28 = *(_BYTE **)(v26 + 32);
  v29 = *(_BYTE *)(v26 + 11);
  v27 = *(_BYTE *)(v26 + 4);
  if ( *(_BYTE *)(v26 + 2) )
    goto LABEL_97;
LABEL_71:
  LOBYTE(v22) = v39 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v26 + 3) == 1 || !v28 || !v29 )
    {
LABEL_90:
      if ( byte_140173441 < 0 )
      {
        if ( !v33 )
        {
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        LOBYTE(v45) = *(_BYTE *)(v26 + 3);
        LODWORD(v44) = *(_DWORD *)(a3 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v51, a3, v44, v45, v27, v30, v31, v32, a3);
      }
      goto LABEL_97;
    }
    v40 = *v28 & 0x7F;
    if ( v40 == 114 || v40 == 115 )
    {
      v22 = (unsigned __int64)&v28[v29];
      v41 = 0;
      if ( (unsigned __int64)(v28 + 8) > v22 )
        goto LABEL_88;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      v22 = (unsigned __int64)&v28[v29];
      v41 = 0;
      if ( (unsigned __int64)(v28 + 8) > v22 )
        goto LABEL_88;
      v42 = v28 + 13;
      v30 = v28[2] & 0xF;
      v43 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v43 = (unsigned __int8)v28[7] + 8;
      v22 = (unsigned __int64)&v28[v43];
      if ( (unsigned __int64)v42 <= v22 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) > v22 )
        v32 = 0;
      else
        v32 = *v42;
    }
    v41 = 1;
LABEL_88:
    if ( v41 )
      v33 = 1;
    goto LABEL_90;
  }
LABEL_97:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)DmaBuffer;
}
