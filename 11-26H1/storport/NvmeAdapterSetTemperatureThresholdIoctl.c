/*
 * XREFs of NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterSetTemperatureThresholdIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  unsigned int v7; // r8d
  int v8; // esi
  __int64 v9; // rsi
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  __int16 v13; // r12
  __int64 ExtendedCommand; // rax
  _DWORD *v15; // r14
  __int64 v16; // r8
  char v17; // cl
  int v18; // eax
  int v19; // edx
  int v20; // edx
  unsigned int v21; // edx
  bool v23; // zf
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  const EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // rdx
  char v29; // r12
  _BYTE *v30; // r9
  unsigned __int8 v31; // r14
  char v32; // r10
  char v33; // bp
  char v34; // r11
  char v35; // r15
  char *v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  __int64 v39; // r8
  int v40; // ecx
  char v41; // cl
  char v42; // al
  char v43; // r8
  char *v44; // r11
  unsigned int v45; // eax
  int v46; // [rsp+20h] [rbp-A8h]
  char v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+64h] [rbp-64h]
  unsigned int v49; // [rsp+68h] [rbp-60h]
  GUID v50; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 1;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    if ( v7 < 0x10 )
      goto LABEL_25;
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_WORD *)(v9 + 8);
    if ( (v10 & 1) == 0 )
      *(_WORD *)(v9 + 8) = v10 | 1;
    if ( (v11 = *(_WORD *)(v9 + 10), v11 <= 8u)
      && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1152) + 592LL)) != 0
      && (v11 || *(_BYTE *)(v9 + 14) || *(_WORD *)(v12 + 266))
      && (v13 = *(_WORD *)(v9 + 12), v13 >= -273) )
    {
      ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 1152));
      v15 = (_DWORD *)ExtendedCommand;
      if ( ExtendedCommand )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
        *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = a2;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4224LL) = a1;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
        v16 = *(_QWORD *)ExtendedCommand;
        v17 = *(_BYTE *)(v9 + 14);
        v18 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
        v19 = (v18 ^ ((unsigned __int8)(*(_BYTE *)(v9 + 10) - 1) << 16)) & 0xF0000;
        *(_BYTE *)(v16 + 4096) = 9;
        v20 = v18 ^ v19;
        *(_BYTE *)(v16 + 4136) = 4;
        if ( v17 )
          v21 = v20 & 0xFFCFFFFF;
        else
          v21 = v20 & 0xFFCFFFFF | 0x100000;
        *(_DWORD *)(v16 + 4140) = v21;
        *(_WORD *)(v16 + 4140) = v13 + 273;
        v8 = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 1152), v15);
        if ( v8 >= 0 )
        {
          if ( a3 )
            *a3 = 0;
          return 259LL;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v15 + 4256LL), 3u);
        NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 1152), (__int64)v15);
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
LABEL_25:
      v8 = -1056964602;
    }
  }
  else
  {
    v8 = -1073741822;
  }
  v23 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v23 )
    goto LABEL_92;
  v50 = 0LL;
  IoGetActivityIdIrp(a2, &v50);
  v25 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v25 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_92;
    v46 = *(_DWORD *)(a2 + 48);
    v27 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_91;
  }
  if ( *(_BYTE *)v25 != 15 )
  {
    if ( *(_BYTE *)v25 != 27 )
      goto LABEL_92;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v26 = *(int **)(a2 + 56);
        if ( v26 )
          v3 = *v26;
        McTemplateK0pqd_EtwWriteTransfer(v24, v25, &v50, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_92;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_92;
    v27 = &EventPnpRequestComplete;
    v46 = *(_DWORD *)(a2 + 48);
LABEL_91:
    McTemplateK0pd_EtwWriteTransfer(v24, v27, &v50, a2, v46);
    goto LABEL_92;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_92;
  v28 = *(_QWORD *)(v25 + 8);
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(v28 + 2) == 40 )
  {
    v36 = 0LL;
    v47 = 0;
    if ( *(_DWORD *)(v28 + 20) )
      goto LABEL_92;
    v37 = 0LL;
    v48 = 0;
    v49 = *(_DWORD *)(v28 + 56);
    if ( !v49 )
      goto LABEL_92;
    while ( 1 )
    {
      v24 = *(unsigned int *)(v28 + 4 * v37 + 120);
      if ( (unsigned int)v24 >= 0x80 )
      {
        v38 = *(unsigned int *)(v28 + 16);
        if ( (unsigned int)v24 < (unsigned int)v38 )
        {
          v39 = (unsigned int)v24;
          v40 = *(_DWORD *)(v24 + v28) - 64;
          if ( v40 )
          {
            v24 = (unsigned int)(v40 - 1);
            if ( (_DWORD)v24 )
            {
              if ( (_DWORD)v24 == 1 )
              {
                v24 = v39 + 40;
                if ( v39 + 40 <= v38 )
                {
                  if ( *(_DWORD *)(v39 + v28 + 12) )
                    v36 = (char *)(v39 + v28 + 32);
                  v30 = *(_BYTE **)(v39 + v28 + 24);
                  goto LABEL_62;
                }
              }
            }
            else
            {
              v24 = v39 + 56;
              if ( v39 + 56 <= v38 )
              {
                v47 = 1;
                if ( *(_BYTE *)(v39 + v28 + 10) )
                  v36 = (char *)(v39 + v28 + 24);
                v29 = *(_BYTE *)(v39 + v28 + 8);
                v30 = *(_BYTE **)(v39 + v28 + 16);
                v31 = *(_BYTE *)(v39 + v28 + 9);
              }
            }
          }
          else
          {
            v24 = v39 + 40;
            if ( v39 + 40 <= v38 )
            {
              if ( *(_BYTE *)(v39 + v28 + 10) )
                v36 = (char *)(v39 + v28 + 24);
              v30 = *(_BYTE **)(v39 + v28 + 16);
LABEL_62:
              v31 = *(_BYTE *)(v39 + v28 + 9);
              v29 = *(_BYTE *)(v39 + v28 + 8);
LABEL_63:
              if ( v36 )
              {
                v41 = *v36;
                v35 = 0;
                goto LABEL_66;
              }
              goto LABEL_92;
            }
          }
          if ( v47 )
            goto LABEL_63;
        }
      }
      v37 = (unsigned int)(v48 + 1);
      v48 = v37;
      if ( (unsigned int)v37 >= v49 )
        goto LABEL_63;
    }
  }
  v41 = *(_BYTE *)(v28 + 72);
  v30 = *(_BYTE **)(v28 + 32);
  v31 = *(_BYTE *)(v28 + 11);
  v29 = *(_BYTE *)(v28 + 4);
  if ( *(_BYTE *)(v28 + 2) )
    goto LABEL_92;
LABEL_66:
  LOBYTE(v24) = v41 - 8;
  if ( (v24 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v28 + 3) == 1 || !v30 || !v31 )
    {
LABEL_85:
      if ( byte_140173441 < 0 )
      {
        if ( !v35 )
        {
          v34 = 0;
          v33 = 0;
          v32 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v24,
          v28,
          &v50,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v28 + 3),
          v29,
          v32,
          v33,
          v34,
          a2);
      }
      goto LABEL_92;
    }
    v42 = *v30 & 0x7F;
    if ( v42 == 114 || v42 == 115 )
    {
      v24 = (unsigned __int64)&v30[v31];
      v43 = 0;
      if ( (unsigned __int64)(v30 + 8) > v24 )
        goto LABEL_83;
      v33 = v30[2];
      v32 = v30[1] & 0xF;
      v34 = v30[3];
    }
    else
    {
      v24 = (unsigned __int64)&v30[v31];
      v43 = 0;
      if ( (unsigned __int64)(v30 + 8) > v24 )
        goto LABEL_83;
      v44 = v30 + 13;
      v32 = v30[2] & 0xF;
      v45 = v31;
      if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
        v45 = (unsigned __int8)v30[7] + 8;
      v24 = (unsigned __int64)&v30[v45];
      if ( (unsigned __int64)v44 <= v24 )
        v33 = v30[12];
      if ( (unsigned __int64)(v30 + 14) > v24 )
        v34 = 0;
      else
        v34 = *v44;
    }
    v43 = 1;
LABEL_83:
    if ( v43 )
      v35 = 1;
    goto LABEL_85;
  }
LABEL_92:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
