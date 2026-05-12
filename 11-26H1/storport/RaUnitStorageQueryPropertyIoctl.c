/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1401B2144
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1400088DC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x14003A488 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x14003A9EC (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitQueryStorageStackPropertyIoctl @ 0x14003BE0C (RaUnitQueryStorageStackPropertyIoctl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1400A3DB4 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1400A4258 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1400A4754 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1400A4B80 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1400A5024 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitGetCryptoProperty @ 0x1400A754C (RaidUnitGetCryptoProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x14018DF50 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B2580 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1401B4AA4 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1401B7E64 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  int v3; // edi
  int *v4; // rdx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rcx
  NTSTATUS result; // eax
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  const EVENT_DESCRIPTOR *v18; // rdx
  int *v19; // rax
  char v20; // al
  __int64 v21; // rdx
  char *v22; // r10
  char v23; // r11
  unsigned int v24; // eax
  char v25; // si
  char v26; // r10
  char v27; // r14
  char v28; // r13
  _BYTE *v29; // r9
  unsigned __int8 v30; // bp
  char *v31; // r14
  unsigned int v32; // r12d
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  int v35; // ecx
  char v36; // cl
  char v37; // r8
  int v38; // [rsp+20h] [rbp-98h]
  char v39; // [rsp+60h] [rbp-58h]
  unsigned int v40; // [rsp+64h] [rbp-54h]
  GUID v41; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v4 = *(int **)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 8u )
  {
    v15 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741585;
    if ( v15 )
      goto LABEL_28;
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    v17 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v17 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_28;
        v16 = *(unsigned int *)(a2 + 48);
        v18 = &EventNonReadWriteRequestComplete;
        v38 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_28;
        v21 = *(_QWORD *)(v17 + 8);
        v28 = 0;
        v29 = 0LL;
        v30 = 0;
        v23 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        if ( *(_BYTE *)(v21 + 2) == 40 )
        {
          v31 = 0LL;
          v39 = 0;
          if ( *(_DWORD *)(v21 + 20) )
            goto LABEL_28;
          v32 = 0;
          v40 = *(_DWORD *)(v21 + 56);
          if ( !v40 )
            goto LABEL_28;
          while ( 1 )
          {
            v16 = *(unsigned int *)(v21 + 4LL * v32 + 120);
            if ( (unsigned int)v16 >= 0x80 )
            {
              v33 = *(unsigned int *)(v21 + 16);
              if ( (unsigned int)v16 < (unsigned int)v33 )
              {
                v34 = (unsigned int)v16;
                v35 = *(_DWORD *)(v16 + v21) - 64;
                if ( v35 )
                {
                  v16 = (unsigned int)(v35 - 1);
                  if ( (_DWORD)v16 )
                  {
                    if ( (_DWORD)v16 == 1 )
                    {
                      v16 = v34 + 40;
                      if ( v34 + 40 <= v33 )
                      {
                        if ( *(_DWORD *)(v34 + v21 + 12) )
                          v31 = (char *)(v34 + v21 + 32);
                        v29 = *(_BYTE **)(v34 + v21 + 24);
                        goto LABEL_100;
                      }
                    }
                  }
                  else
                  {
                    v16 = v34 + 56;
                    if ( v34 + 56 <= v33 )
                    {
                      v39 = 1;
                      if ( *(_BYTE *)(v34 + v21 + 10) )
                        v31 = (char *)(v34 + v21 + 24);
                      v28 = *(_BYTE *)(v34 + v21 + 8);
                      v29 = *(_BYTE **)(v34 + v21 + 16);
                      v30 = *(_BYTE *)(v34 + v21 + 9);
                    }
                  }
                }
                else
                {
                  v16 = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_BYTE *)(v34 + v21 + 10) )
                      v31 = (char *)(v34 + v21 + 24);
                    v29 = *(_BYTE **)(v34 + v21 + 16);
LABEL_100:
                    v30 = *(_BYTE *)(v34 + v21 + 9);
                    v28 = *(_BYTE *)(v34 + v21 + 8);
LABEL_101:
                    if ( v31 )
                    {
                      v36 = *v31;
                      v27 = 0;
                      goto LABEL_104;
                    }
                    goto LABEL_28;
                  }
                }
                if ( v39 )
                  goto LABEL_101;
              }
            }
            if ( ++v32 >= v40 )
              goto LABEL_101;
          }
        }
        v36 = *(_BYTE *)(v21 + 72);
        v29 = *(_BYTE **)(v21 + 32);
        v30 = *(_BYTE *)(v21 + 11);
        v28 = *(_BYTE *)(v21 + 4);
        if ( *(_BYTE *)(v21 + 2) )
          goto LABEL_28;
LABEL_104:
        LOBYTE(v16) = v36 - 8;
        if ( (v16 & 0x5D) != 0 )
        {
LABEL_28:
          IofCompleteRequest((PIRP)a2, 0);
          return -1073741585;
        }
        v37 = *(_BYTE *)(v21 + 3);
        if ( v37 == 1 || !v29 || !v30 )
        {
LABEL_56:
          if ( byte_140173441 < 0 )
          {
            if ( !v27 )
            {
              v26 = 0;
              v25 = 0;
              v23 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(v16, v21, &v41, a2, *(_DWORD *)(a2 + 48), v37, v28, v23, v25, v26, a2);
          }
          goto LABEL_28;
        }
        v20 = *v29 & 0x7F;
        if ( v20 == 114 || v20 == 115 )
        {
          v16 = (unsigned __int64)&v29[v30];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v29 + 8) > v16 )
          {
LABEL_54:
            if ( (_BYTE)v21 )
              v27 = 1;
            goto LABEL_56;
          }
          v25 = v29[2];
          v23 = v29[1] & 0xF;
          v26 = v29[3];
        }
        else
        {
          v16 = (unsigned __int64)&v29[v30];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v29 + 8) > v16 )
            goto LABEL_54;
          v22 = v29 + 13;
          v23 = v29[2] & 0xF;
          v24 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v24 = (unsigned __int8)v29[7] + 8;
          v16 = (unsigned __int64)&v29[v24];
          if ( (unsigned __int64)v22 <= v16 )
            v25 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v16 )
            v26 = 0;
          else
            v26 = *v22;
        }
        LOBYTE(v21) = 1;
        goto LABEL_54;
      case 0x1B:
        if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v19 = *(int **)(a2 + 56);
            if ( v19 )
              v3 = *v19;
            McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v41, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_28;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_28;
        v18 = &EventPnpRequestComplete;
        v38 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_28;
    }
    McTemplateK0pd_EtwWriteTransfer(v16, v18, &v41, a2, v38);
    goto LABEL_28;
  }
  v6 = *v4;
  if ( v6 > 59 )
  {
    v7 = v6 - 62;
    if ( !v7 )
      return RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, a2);
    v8 = v7 - 1;
    if ( !v8 )
      return RaUnitStorageQueryDeviceLedStatePropertyIoctl(a1, a2);
    v9 = v8 - 1;
    if ( !v9 )
      return RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl(a1, a2);
    v10 = v9 - 1;
    if ( !v10 )
      return RaUnitStorageQueryDeviceFruIdPropertyIoctl(a1, a2);
    v11 = v10 - 1;
    if ( !v11 )
      return RaUnitQueryStorageStackPropertyIoctl(a1, a2);
    v12 = v11 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        {
          result = RaidUnitGetCryptoProperty(a1, a2);
          if ( result != -1073741637 )
            return result;
        }
      }
      goto LABEL_10;
    }
    return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, a2);
  }
  switch ( v6 )
  {
    case 59:
      return RaUnitStorageQueryDeviceNumaPropertyIoctl(a1, a2);
    case 0:
      return RaUnitStorageQueryDevicePropertyIoctl(a1, a2);
    case 2:
      return RaUnitStorageQueryDeviceIdPropertyIoctl(a1, a2);
    case 12:
      return RaUnitStorageQueryDevicePowerPropertyIoctl(a1, a2);
    case 48:
      return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1, a2);
    case 50:
      return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, a2);
    case 52:
      return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, a2);
    case 54:
      return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, a2);
  }
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v13, &EventNonReadWriteRequestComplete, &v41, a2, *(_DWORD *)(a2 + 48));
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
}
