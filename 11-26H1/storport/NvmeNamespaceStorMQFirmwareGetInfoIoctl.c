/*
 * XREFs of NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00
 * Callers:
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x14010613C (NvmeNamespaceFirmwareGetInfoIoctl.c)
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

__int64 __fastcall NvmeNamespaceStorMQFirmwareGetInfoIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v4; // ebx
  union _SLIST_HEADER *v5; // r15
  int DmaBuffer; // esi
  _DWORD *v10; // rax
  __int64 *ExtendedCommand; // r14
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  char v19; // r13
  _BYTE *v20; // r9
  unsigned __int8 v21; // r15
  char v22; // r10
  char v23; // r14
  char v24; // r11
  char v25; // r12
  char *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r11
  unsigned int v35; // eax
  __int64 v36; // [rsp+20h] [rbp-59h]
  __int64 v37; // [rsp+28h] [rbp-51h]
  __int64 v38; // [rsp+30h] [rbp-49h]
  __int64 v39; // [rsp+38h] [rbp-41h]
  __int64 v40; // [rsp+40h] [rbp-39h]
  __int64 v41; // [rsp+48h] [rbp-31h]
  char v42; // [rsp+60h] [rbp-19h]
  int v43; // [rsp+68h] [rbp-11h]
  unsigned int v44; // [rsp+6Ch] [rbp-Dh]
  __int128 v45; // [rsp+70h] [rbp-9h] BYREF
  GUID v46; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(union _SLIST_HEADER **)(a1 + 16);
  *a3 = 1;
  v45 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v3 + 16) >= 0x10u )
  {
    if ( *(_DWORD *)(v3 + 8) >= 0x38u )
    {
      v10 = *(_DWORD **)(a2 + 24);
      if ( *v10 == 16 && v10[1] >= 0x10u && (v10[2] & 1) != 0 )
      {
        ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(v5);
        if ( ExtendedCommand )
        {
          DmaBuffer = NvmeAllocateDmaBuffer((__int64)v5, 0x200u, (__int64)a3, (void **)&v45, (_QWORD *)&v45 + 1, 0);
          if ( DmaBuffer >= 0 )
          {
            *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
            *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
            *(_WORD *)(*ExtendedCommand + 4252) = 0;
            *(_QWORD *)(*ExtendedCommand + 4184) = a2;
            *(_QWORD *)(*ExtendedCommand + 4192) = NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion;
            *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
            *(_QWORD *)(*ExtendedCommand + 4216) = a1;
            *(_OWORD *)(*ExtendedCommand + 4160) = v45;
            *(_DWORD *)(*ExtendedCommand + 4248) = 512;
            BuildGetLogPageCommand(
              (__int64)v5,
              *ExtendedCommand + 4096,
              0x203u,
              0x200u,
              *((__int64 *)&v45 + 1),
              -1,
              0LL,
              0,
              *ExtendedCommand,
              ExtendedCommand[1]);
            DmaBuffer = NvmeControllerProcessCommand((__int64)v5, ExtendedCommand);
            if ( DmaBuffer >= 0 )
            {
              *a3 = 0;
              return 259LL;
            }
          }
          _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
          NvmeControllerReclaimExtendedCommand(v5, (__int64)ExtendedCommand);
        }
        else
        {
          DmaBuffer = -1073741670;
        }
      }
      else
      {
        DmaBuffer = -1073741811;
      }
    }
    else
    {
      DmaBuffer = -1073741789;
    }
  }
  else
  {
    DmaBuffer = -1073741820;
  }
  if ( (_QWORD)v45 )
    NvmeFreeDmaBuffer((__int64)v5, 0x200u, (__int64)a3, v45, *((__int64 *)&v45 + 1));
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = DmaBuffer;
  if ( v13 )
    goto LABEL_83;
  v46 = 0LL;
  IoGetActivityIdIrp(a2, &v46);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_83;
    v17 = &EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v4 = *v16;
        LODWORD(v37) = *(_DWORD *)(a2 + 48);
        LODWORD(v36) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v46, a2, v36, v37);
      }
      goto LABEL_83;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_83;
    v17 = &EventPnpRequestComplete;
LABEL_82:
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v46, a2, v36);
    goto LABEL_83;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_83;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v18 + 2) == 40 )
  {
    v26 = 0LL;
    v42 = 0;
    if ( *(_DWORD *)(v18 + 20) )
      goto LABEL_83;
    v27 = 0LL;
    v43 = 0;
    v44 = *(_DWORD *)(v18 + 56);
    if ( !v44 )
      goto LABEL_83;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v18 + 4 * v27 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v28 = *(unsigned int *)(v18 + 16);
        if ( (unsigned int)v14 < (unsigned int)v28 )
        {
          v29 = (unsigned int)v14;
          v30 = *(_DWORD *)(v14 + v18) - 64;
          if ( v30 )
          {
            v14 = (unsigned int)(v30 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
              {
                v14 = v29 + 40;
                if ( v29 + 40 <= v28 )
                {
                  if ( *(_DWORD *)(v29 + v18 + 12) )
                    v26 = (char *)(v29 + v18 + 32);
                  v20 = *(_BYTE **)(v29 + v18 + 24);
                  goto LABEL_53;
                }
              }
            }
            else
            {
              v14 = v29 + 56;
              if ( v29 + 56 <= v28 )
              {
                v42 = 1;
                if ( *(_BYTE *)(v29 + v18 + 10) )
                  v26 = (char *)(v29 + v18 + 24);
                v19 = *(_BYTE *)(v29 + v18 + 8);
                v20 = *(_BYTE **)(v29 + v18 + 16);
                v21 = *(_BYTE *)(v29 + v18 + 9);
              }
            }
          }
          else
          {
            v14 = v29 + 40;
            if ( v29 + 40 <= v28 )
            {
              if ( *(_BYTE *)(v29 + v18 + 10) )
                v26 = (char *)(v29 + v18 + 24);
              v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_53:
              v21 = *(_BYTE *)(v29 + v18 + 9);
              v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_54:
              if ( v26 )
              {
                v31 = *v26;
                v25 = 0;
                goto LABEL_57;
              }
              goto LABEL_83;
            }
          }
          if ( v42 )
            goto LABEL_54;
        }
      }
      v27 = (unsigned int)(v43 + 1);
      v43 = v27;
      if ( (unsigned int)v27 >= v44 )
        goto LABEL_54;
    }
  }
  v31 = *(_BYTE *)(v18 + 72);
  v20 = *(_BYTE **)(v18 + 32);
  v21 = *(_BYTE *)(v18 + 11);
  v19 = *(_BYTE *)(v18 + 4);
  if ( *(_BYTE *)(v18 + 2) )
    goto LABEL_83;
LABEL_57:
  LOBYTE(v14) = v31 - 8;
  if ( (v14 & 0x5D) == 0 )
  {
    v32 = *(_BYTE *)(v18 + 3);
    if ( v32 == 1 || !v20 || !v21 )
    {
LABEL_76:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        LOBYTE(v41) = v24;
        LOBYTE(v40) = v23;
        LOBYTE(v39) = v22;
        LOBYTE(v38) = v19;
        LOBYTE(v37) = v32;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v46, a2, v36, v37, v38, v39, v40, v41, a2);
      }
      goto LABEL_83;
    }
    v33 = *v20 & 0x7F;
    if ( v33 == 114 || v33 == 115 )
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_74;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v14 = (unsigned __int64)&v20[v21];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v20 + 8) > v14 )
        goto LABEL_74;
      v34 = v20 + 13;
      v22 = v20[2] & 0xF;
      v35 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v35 = (unsigned __int8)v20[7] + 8;
      v14 = (unsigned __int64)&v20[v35];
      if ( (unsigned __int64)v34 <= v14 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v14 )
        v24 = 0;
      else
        v24 = *v34;
    }
    LOBYTE(v18) = 1;
LABEL_74:
    if ( (_BYTE)v18 )
      v25 = 1;
    goto LABEL_76;
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)DmaBuffer;
}
