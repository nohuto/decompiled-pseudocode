/*
 * XREFs of NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50
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
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterFirmwareGetInfoIoctl(__int64 a1, union _SLIST_HEADER *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  int DmaBuffer; // esi
  _DWORD *v11; // rax
  __int64 *ExtendedCommand; // r14
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // r15
  char v23; // r10
  char v24; // r14
  char v25; // r11
  char v26; // r12
  char *v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r11
  unsigned int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-59h]
  __int64 v38; // [rsp+28h] [rbp-51h]
  __int64 v39; // [rsp+30h] [rbp-49h]
  __int64 v40; // [rsp+38h] [rbp-41h]
  __int64 v41; // [rsp+40h] [rbp-39h]
  __int64 v42; // [rsp+48h] [rbp-31h]
  char v43; // [rsp+60h] [rbp-19h]
  int v44; // [rsp+68h] [rbp-11h]
  unsigned int v45; // [rsp+6Ch] [rbp-Dh]
  __int128 v46; // [rsp+70h] [rbp-9h] BYREF
  GUID v47; // [rsp+80h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v46 = 0LL;
  if ( !a2 )
    goto LABEL_14;
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    DmaBuffer = -1073741820;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v4 + 8) < 0x38u )
  {
    DmaBuffer = -1073741789;
    goto LABEL_15;
  }
  v11 = *(_DWORD **)(a3 + 24);
  if ( *v11 != 16 || v11[1] < 0x10u )
  {
LABEL_14:
    DmaBuffer = -1073741811;
    goto LABEL_15;
  }
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a2);
  if ( ExtendedCommand )
  {
    DmaBuffer = NvmeAllocateDmaBuffer((__int64)a2, 0x200u, a3, (void **)&v46, (_QWORD *)&v46 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = a3;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeAdapterFirmwareGetInfoIoctlCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_QWORD *)(*ExtendedCommand + 4224) = a1;
      *(_OWORD *)(*ExtendedCommand + 4160) = v46;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        (__int64)a2,
        *ExtendedCommand + 4096,
        0x203u,
        0x200u,
        *((__int64 *)&v46 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      DmaBuffer = NvmeControllerProcessCommand((__int64)a2, ExtendedCommand);
      if ( DmaBuffer >= 0 )
      {
        *a4 = 0;
        return 259LL;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
    NvmeControllerReclaimExtendedCommand(a2, (__int64)ExtendedCommand);
  }
  else
  {
    DmaBuffer = -1073741670;
  }
LABEL_15:
  if ( (_QWORD)v46 )
    NvmeFreeDmaBuffer((_DWORD)a2, 512, a3, v46, *((__int64 *)&v46 + 1));
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = DmaBuffer;
  if ( v14 )
    goto LABEL_83;
  v47 = 0LL;
  IoGetActivityIdIrp(a3, &v47);
  v16 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_83;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a3 + 56);
        if ( v17 )
          v5 = *v17;
        LODWORD(v38) = *(_DWORD *)(a3 + 48);
        LODWORD(v37) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v47, a3, v37, v38);
      }
      goto LABEL_83;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_83;
    v18 = &EventPnpRequestComplete;
LABEL_82:
    LODWORD(v37) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v47, a3, v37);
    goto LABEL_83;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_83;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v19 + 2) == 40 )
  {
    v27 = 0LL;
    v43 = 0;
    if ( *(_DWORD *)(v19 + 20) )
      goto LABEL_83;
    v28 = 0LL;
    v44 = 0;
    v45 = *(_DWORD *)(v19 + 56);
    if ( !v45 )
      goto LABEL_83;
    while ( 1 )
    {
      v15 = *(unsigned int *)(v19 + 4 * v28 + 120);
      if ( (unsigned int)v15 >= 0x80 )
      {
        v29 = *(unsigned int *)(v19 + 16);
        if ( (unsigned int)v15 < (unsigned int)v29 )
        {
          v30 = (unsigned int)v15;
          v31 = *(_DWORD *)(v15 + v19) - 64;
          if ( v31 )
          {
            v15 = (unsigned int)(v31 - 1);
            if ( (_DWORD)v15 )
            {
              if ( (_DWORD)v15 == 1 )
              {
                v15 = v30 + 40;
                if ( v30 + 40 <= v29 )
                {
                  if ( *(_DWORD *)(v30 + v19 + 12) )
                    v27 = (char *)(v30 + v19 + 32);
                  v21 = *(_BYTE **)(v30 + v19 + 24);
                  goto LABEL_53;
                }
              }
            }
            else
            {
              v15 = v30 + 56;
              if ( v30 + 56 <= v29 )
              {
                v43 = 1;
                if ( *(_BYTE *)(v30 + v19 + 10) )
                  v27 = (char *)(v30 + v19 + 24);
                v20 = *(_BYTE *)(v30 + v19 + 8);
                v21 = *(_BYTE **)(v30 + v19 + 16);
                v22 = *(_BYTE *)(v30 + v19 + 9);
              }
            }
          }
          else
          {
            v15 = v30 + 40;
            if ( v30 + 40 <= v29 )
            {
              if ( *(_BYTE *)(v30 + v19 + 10) )
                v27 = (char *)(v30 + v19 + 24);
              v21 = *(_BYTE **)(v30 + v19 + 16);
LABEL_53:
              v22 = *(_BYTE *)(v30 + v19 + 9);
              v20 = *(_BYTE *)(v30 + v19 + 8);
LABEL_54:
              if ( v27 )
              {
                v32 = *v27;
                v26 = 0;
                goto LABEL_57;
              }
              goto LABEL_83;
            }
          }
          if ( v43 )
            goto LABEL_54;
        }
      }
      v28 = (unsigned int)(v44 + 1);
      v44 = v28;
      if ( (unsigned int)v28 >= v45 )
        goto LABEL_54;
    }
  }
  v32 = *(_BYTE *)(v19 + 72);
  v21 = *(_BYTE **)(v19 + 32);
  v22 = *(_BYTE *)(v19 + 11);
  v20 = *(_BYTE *)(v19 + 4);
  if ( *(_BYTE *)(v19 + 2) )
    goto LABEL_83;
LABEL_57:
  LOBYTE(v15) = v32 - 8;
  if ( (v15 & 0x5D) == 0 )
  {
    v33 = *(_BYTE *)(v19 + 3);
    if ( v33 == 1 || !v21 || !v22 )
    {
LABEL_76:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        LOBYTE(v42) = v25;
        LOBYTE(v41) = v24;
        LOBYTE(v40) = v23;
        LOBYTE(v39) = v20;
        LOBYTE(v38) = v33;
        LODWORD(v37) = *(_DWORD *)(a3 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v47, a3, v37, v38, v39, v40, v41, v42, a3);
      }
      goto LABEL_83;
    }
    v34 = *v21 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v15 = (unsigned __int64)&v21[v22];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v21 + 8) > v15 )
        goto LABEL_74;
      v24 = v21[2];
      v23 = v21[1] & 0xF;
      v25 = v21[3];
    }
    else
    {
      v15 = (unsigned __int64)&v21[v22];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v21 + 8) > v15 )
        goto LABEL_74;
      v35 = v21 + 13;
      v23 = v21[2] & 0xF;
      v36 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v36 = (unsigned __int8)v21[7] + 8;
      v15 = (unsigned __int64)&v21[v36];
      if ( (unsigned __int64)v35 <= v15 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v15 )
        v25 = 0;
      else
        v25 = *v35;
    }
    LOBYTE(v19) = 1;
LABEL_74:
    if ( (_BYTE)v19 )
      v26 = 1;
    goto LABEL_76;
  }
LABEL_83:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)DmaBuffer;
}
