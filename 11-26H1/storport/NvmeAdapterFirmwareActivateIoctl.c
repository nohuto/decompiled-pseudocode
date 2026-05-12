/*
 * XREFs of NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D62D0 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     IsNvmeFirmwareActivateWithoutResetEnabled @ 0x1400D1B20 (IsNvmeFirmwareActivateWithoutResetEnabled.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterFirmwareActivateIoctl(
        __int64 a1,
        union _SLIST_HEADER *a2,
        __int64 a3,
        _DWORD *a4,
        _BYTE *a5)
{
  int v5; // ebx
  _DWORD *ExtendedCommand; // r14
  unsigned int v9; // edx
  char v10; // r13
  __int64 v11; // rsi
  unsigned int v12; // esi
  int v13; // r12d
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  int v17; // edx
  unsigned int v18; // edx
  __int64 result; // rax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  char v26; // r12
  _BYTE *v27; // r9
  unsigned __int8 v28; // r14
  char v29; // r10
  char v30; // bp
  char v31; // r11
  char v32; // r15
  char *v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // al
  char v40; // r8
  char *v41; // r11
  unsigned int v42; // eax
  char v43; // [rsp+60h] [rbp-68h]
  char v44; // [rsp+60h] [rbp-68h]
  int v46; // [rsp+68h] [rbp-60h]
  unsigned int v48; // [rsp+70h] [rbp-58h]
  GUID v49; // [rsp+78h] [rbp-50h] BYREF

  v5 = 0;
  ExtendedCommand = a4;
  v9 = *(_DWORD *)(*(_QWORD *)(a3 + 184) + 16LL);
  v10 = 0;
  v43 = 0;
  if ( a5 )
    *a5 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( !a2 )
    goto LABEL_31;
  v11 = *(_QWORD *)(a3 + 24);
  if ( v9 < 0x10 )
  {
    v12 = -1073741820;
    goto LABEL_32;
  }
  if ( *(_DWORD *)v11 != 16
    || *(_DWORD *)(v11 + 4) != 16
    || *(_BYTE *)(v11 + 12) > (unsigned int)((*(_BYTE *)(a2[37].Alignment + 260) >> 1) & 7) )
  {
LABEL_31:
    v12 = -1073741811;
LABEL_32:
    if ( ExtendedCommand )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)ExtendedCommand + 4256LL), 3u);
      NvmeControllerReclaimExtendedCommand(a2, (__int64)ExtendedCommand);
    }
    goto LABEL_34;
  }
  v13 = *(_DWORD *)(v11 + 8) >> 31;
  if ( (a2[60].Region & 0x400) == 0
    && (IsNvmeFirmwareActivateWithoutResetEnabled((__int64)a2) || (*(_DWORD *)(v11 + 8) & 0x10000000) != 0) )
  {
    v10 = 1;
  }
  if ( (*(_DWORD *)(v11 + 8) & 0x40000000) != 0 )
  {
    v10 = 0;
    v43 = 1;
    a2[60].Region |= 0x10000uLL;
  }
  if ( a4 || (ExtendedCommand = (_DWORD *)NvmeControllerGetExtendedCommand(a2)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = a3;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeAdapterFirmwareActivateIoctlCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4224LL) = a1;
    v14 = *(_QWORD *)ExtendedCommand;
    v15 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4136LL);
    v16 = ((unsigned __int8)v15 ^ *(_BYTE *)(v11 + 12)) & 7;
    *(_BYTE *)(*(_QWORD *)ExtendedCommand + 4096LL) = 16;
    v17 = v15 ^ v16;
    if ( v43 )
    {
      v18 = v17 & 0xFFFFFFC7;
    }
    else if ( v10 )
    {
      v18 = v17 & 0xFFFFFFC7 | 0x18;
    }
    else if ( (_BYTE)v13 )
    {
      v18 = v17 & 0xFFFFFFC7 | 0x10;
    }
    else
    {
      v18 = v17 & 0xFFFFFFC7 | 8;
    }
    *(_DWORD *)(v14 + 4136) = v18;
    result = NvmeControllerProcessCommand((__int64)a2, ExtendedCommand);
    v12 = result;
    if ( (int)result >= 0 )
    {
      if ( a5 )
        *a5 = 0;
      return 259LL;
    }
    if ( a4 )
      return result;
    goto LABEL_32;
  }
  v12 = -1073741670;
LABEL_34:
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v12;
  if ( v20 )
    goto LABEL_100;
  v49 = 0LL;
  IoGetActivityIdIrp(a3, &v49);
  v22 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_100;
    v24 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_99;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_100;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v23 = *(int **)(a3 + 56);
        if ( v23 )
          v5 = *v23;
        McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v49, a3, v5, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_100;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_100;
    v24 = &EventPnpRequestComplete;
LABEL_99:
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v49, a3, *(_DWORD *)(a3 + 48));
    goto LABEL_100;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_100;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v25 + 2) == 40 )
  {
    v33 = 0LL;
    v44 = 0;
    if ( *(_DWORD *)(v25 + 20) )
      goto LABEL_100;
    v34 = 0LL;
    v46 = 0;
    v48 = *(_DWORD *)(v25 + 56);
    if ( !v48 )
      goto LABEL_100;
    while ( 1 )
    {
      v21 = *(unsigned int *)(v25 + 4 * v34 + 120);
      if ( (unsigned int)v21 >= 0x80 )
      {
        v35 = *(unsigned int *)(v25 + 16);
        if ( (unsigned int)v21 < (unsigned int)v35 )
        {
          v36 = (unsigned int)v21;
          v37 = *(_DWORD *)(v21 + v25) - 64;
          if ( v37 )
          {
            v21 = (unsigned int)(v37 - 1);
            if ( (_DWORD)v21 )
            {
              if ( (_DWORD)v21 == 1 )
              {
                v21 = v36 + 40;
                if ( v36 + 40 <= v35 )
                {
                  if ( *(_DWORD *)(v36 + v25 + 12) )
                    v33 = (char *)(v36 + v25 + 32);
                  v27 = *(_BYTE **)(v36 + v25 + 24);
                  goto LABEL_70;
                }
              }
            }
            else
            {
              v21 = v36 + 56;
              if ( v36 + 56 <= v35 )
              {
                v44 = 1;
                if ( *(_BYTE *)(v36 + v25 + 10) )
                  v33 = (char *)(v36 + v25 + 24);
                v26 = *(_BYTE *)(v36 + v25 + 8);
                v27 = *(_BYTE **)(v36 + v25 + 16);
                v28 = *(_BYTE *)(v36 + v25 + 9);
              }
            }
          }
          else
          {
            v21 = v36 + 40;
            if ( v36 + 40 <= v35 )
            {
              if ( *(_BYTE *)(v36 + v25 + 10) )
                v33 = (char *)(v36 + v25 + 24);
              v27 = *(_BYTE **)(v36 + v25 + 16);
LABEL_70:
              v28 = *(_BYTE *)(v36 + v25 + 9);
              v26 = *(_BYTE *)(v36 + v25 + 8);
LABEL_71:
              if ( v33 )
              {
                v38 = *v33;
                v32 = 0;
                goto LABEL_74;
              }
              goto LABEL_100;
            }
          }
          if ( v44 )
            goto LABEL_71;
        }
      }
      v34 = (unsigned int)(v46 + 1);
      v46 = v34;
      if ( (unsigned int)v34 >= v48 )
        goto LABEL_71;
    }
  }
  v38 = *(_BYTE *)(v25 + 72);
  v27 = *(_BYTE **)(v25 + 32);
  v28 = *(_BYTE *)(v25 + 11);
  v26 = *(_BYTE *)(v25 + 4);
  if ( *(_BYTE *)(v25 + 2) )
    goto LABEL_100;
LABEL_74:
  LOBYTE(v21) = v38 - 8;
  if ( (v21 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v25 + 3) == 1 || !v27 || !v28 )
    {
LABEL_93:
      if ( byte_140173441 < 0 )
      {
        if ( !v32 )
        {
          v31 = 0;
          v30 = 0;
          v29 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v21,
          v25,
          &v49,
          a3,
          *(_DWORD *)(a3 + 48),
          *(_BYTE *)(v25 + 3),
          v26,
          v29,
          v30,
          v31,
          a3);
      }
      goto LABEL_100;
    }
    v39 = *v27 & 0x7F;
    if ( v39 == 114 || v39 == 115 )
    {
      v21 = (unsigned __int64)&v27[v28];
      v40 = 0;
      if ( (unsigned __int64)(v27 + 8) > v21 )
        goto LABEL_91;
      v30 = v27[2];
      v29 = v27[1] & 0xF;
      v31 = v27[3];
    }
    else
    {
      v21 = (unsigned __int64)&v27[v28];
      v40 = 0;
      if ( (unsigned __int64)(v27 + 8) > v21 )
        goto LABEL_91;
      v41 = v27 + 13;
      v29 = v27[2] & 0xF;
      v42 = v28;
      if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
        v42 = (unsigned __int8)v27[7] + 8;
      v21 = (unsigned __int64)&v27[v42];
      if ( (unsigned __int64)v41 <= v21 )
        v30 = v27[12];
      if ( (unsigned __int64)(v27 + 14) > v21 )
        v31 = 0;
      else
        v31 = *v41;
    }
    v40 = 1;
LABEL_91:
    if ( v40 )
      v32 = 1;
    goto LABEL_93;
  }
LABEL_100:
  IofCompleteRequest((PIRP)a3, 0);
  return v12;
}
