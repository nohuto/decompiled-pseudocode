/*
 * XREFs of NvmeAdapterDeviceControlIrp @ 0x1401BE838
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14001EBF0 (StorageGetSystemFeatureSupportIoctl.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     NvmeAdapterReleaseRemoveLock @ 0x14005CBF8 (NvmeAdapterReleaseRemoveLock.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterPowerCapIoctl @ 0x1400DA940 (NvmeAdapterPowerCapIoctl.c)
 *     NvmeAdapterSetLedState @ 0x1400DCBC8 (NvmeAdapterSetLedState.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400DF840 (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     NvmeAdapterStorageSetProperty @ 0x1400E07EC (NvmeAdapterStorageSetProperty.c)
 *     NvmeAdapterAttemptQueueIrpForDfxPowerDown @ 0x140122F00 (NvmeAdapterAttemptQueueIrpForDfxPowerDown.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeAdapterStorageQueryProperty @ 0x14018377C (NvmeAdapterStorageQueryProperty.c)
 *     NvmeAdapterAddAuthenticationKey @ 0x140196CE4 (NvmeAdapterAddAuthenticationKey.c)
 *     NvmeAdapterAddController @ 0x1401971E8 (NvmeAdapterAddController.c)
 *     NvmeAdapterAddSubsystemPort @ 0x1401977B0 (NvmeAdapterAddSubsystemPort.c)
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140198C38 (NvmeAdapterCreateAuthenticationKey.c)
 *     NvmeAdapterDeleteAuthenticationKey @ 0x1401991D8 (NvmeAdapterDeleteAuthenticationKey.c)
 *     NvmeAdapterDisconnectController @ 0x140199708 (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterGetAuthenticationKeys @ 0x14019A1EC (NvmeAdapterGetAuthenticationKeys.c)
 *     NvmeAdapterGetControllers @ 0x14019A7FC (NvmeAdapterGetControllers.c)
 *     NvmeAdapterGetDeviceNumberEx @ 0x14019AE24 (NvmeAdapterGetDeviceNumberEx.c)
 *     NvmeAdapterGetHostGatewayByHandle @ 0x14019B214 (NvmeAdapterGetHostGatewayByHandle.c)
 *     NvmeAdapterGetHostGateways @ 0x14019B70C (NvmeAdapterGetHostGateways.c)
 *     NvmeAdapterGetHostInformation @ 0x14019BCB0 (NvmeAdapterGetHostInformation.c)
 *     NvmeAdapterGetNamespaces @ 0x14019C0D0 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019C654 (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019D2F4 (NvmeAdapterGetSubsystemPorts.c)
 *     NvmeAdapterRemoveController @ 0x14019DFFC (NvmeAdapterRemoveController.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019E8F8 (NvmeAdapterRemoveSubsystemPort.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019F2EC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationGetInfoIoctl @ 0x14019F744 (NvmeAdapterStorageNotificationGetInfoIoctl.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeAdapterStorageTestErrorInjectionIoctl @ 0x1401A02D8 (NvmeAdapterStorageTestErrorInjectionIoctl.c)
 */

__int64 __fastcall NvmeAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r15d
  unsigned int v8; // edi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // di
  char v19; // r10
  char v20; // r15
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  unsigned int v33; // edi
  unsigned __int64 v34; // rcx
  unsigned __int8 *v35; // rdx
  int v36; // eax
  int *v37; // rax
  const EVENT_DESCRIPTOR *v38; // rdx
  __int64 v39; // rdx
  _BYTE *v40; // r9
  unsigned __int8 v41; // r12
  char v42; // r11
  char v43; // r15
  char v44; // r10
  int v45; // eax
  char *v46; // r13
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  int v51; // ecx
  char v52; // cl
  char v53; // r13
  char v54; // r8
  char v55; // al
  char *v56; // r10
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int v60; // edi
  unsigned int v61; // edi
  unsigned int v62; // edi
  unsigned int v63; // edi
  unsigned int v64; // edi
  unsigned int v65; // edi
  unsigned int v66; // edi
  unsigned int DeviceNumber; // eax
  unsigned int InfoIoctl; // eax
  unsigned int v69; // edi
  unsigned int v70; // edi
  unsigned int v71; // edi
  unsigned int v72; // edi
  unsigned int v73; // edi
  unsigned int v74; // edi
  unsigned int v75; // edi
  unsigned int v76; // edi
  unsigned int v77; // edi
  unsigned int v78; // edi
  unsigned int v79; // edi
  unsigned int v80; // edi
  unsigned int v81; // edi
  unsigned int v82; // edi
  unsigned int v83; // edi
  unsigned int v84; // edi
  unsigned int v85; // edi
  unsigned int v86; // edi
  unsigned int v87; // edi
  unsigned int v88; // edi
  unsigned int v89; // edi
  char *v90; // r13
  unsigned int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // r8
  int v95; // ecx
  __int64 v96; // [rsp+20h] [rbp-59h]
  __int64 v97; // [rsp+28h] [rbp-51h]
  __int64 v98; // [rsp+30h] [rbp-49h]
  char v99; // [rsp+60h] [rbp-19h] BYREF
  char v100; // [rsp+61h] [rbp-18h]
  char v101; // [rsp+62h] [rbp-17h]
  unsigned int v102; // [rsp+64h] [rbp-15h]
  unsigned int v103; // [rsp+68h] [rbp-11h]
  unsigned int v104; // [rsp+6Ch] [rbp-Dh]
  GUID v105; // [rsp+70h] [rbp-9h] BYREF
  GUID v106; // [rsp+80h] [rbp+7h] BYREF

  v99 = 1;
  v106 = 0LL;
  v4 = NvmeAdapterAcquireRemoveLock(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  v7 = v4;
  v102 = v4;
  v8 = *(_DWORD *)(v5 + 24);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v106);
    if ( (byte_140173442 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        &EventIOCTL,
        &v106,
        a2,
        **(unsigned __int8 **)(a2 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        v8);
  }
  if ( v7 < 0 )
  {
    v9 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v7;
    if ( v9 )
      goto LABEL_71;
    v105 = 0LL;
    IoGetActivityIdIrp(a2, &v105);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v13 = &EventNonReadWriteRequestComplete;
        goto LABEL_70;
      }
LABEL_71:
      IofCompleteRequest((PIRP)a2, 0);
      return v102;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 == 27 )
      {
        if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v12 = *(int **)(a2 + 56);
            if ( v12 )
              v6 = *v12;
            LODWORD(v97) = *(_DWORD *)(a2 + 48);
            LODWORD(v96) = v6;
            McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v105, a2, v96, v97);
          }
          goto LABEL_71;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v13 = &EventPnpRequestComplete;
LABEL_70:
          LODWORD(v96) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v10, v13, &v105, a2, v96);
          goto LABEL_71;
        }
      }
      goto LABEL_71;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_71;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v100 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) == 40 )
    {
      v21 = 0LL;
      v99 = 0;
      if ( *(_DWORD *)(v14 + 20) )
        goto LABEL_71;
      v22 = 0;
      v103 = *(_DWORD *)(v14 + 56);
      if ( !v103 )
        goto LABEL_71;
      do
      {
        v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v23 = *(unsigned int *)(v14 + 16);
          if ( (unsigned int)v10 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v10;
            v25 = *(_DWORD *)(v10 + v14) - 64;
            if ( v25 )
            {
              v10 = (unsigned int)(v25 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v24 + 40;
                  if ( v24 + 40 <= v23 )
                  {
                    if ( *(_DWORD *)(v24 + v14 + 12) )
                      v21 = (char *)(v24 + v14 + 32);
                    v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_30:
                    v26 = *(_BYTE *)(v24 + v14 + 8);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    goto LABEL_39;
                  }
                }
              }
              else
              {
                v10 = v24 + 56;
                if ( v24 + 56 <= v23 )
                {
                  v99 = 1;
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  v16 = *(_BYTE *)(v24 + v14 + 9);
                  v100 = *(_BYTE *)(v24 + v14 + 8);
                }
              }
            }
            else
            {
              v10 = v24 + 40;
              if ( v24 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v24 + v14 + 10) )
                  v21 = (char *)(v24 + v14 + 24);
                v15 = *(_BYTE **)(v24 + v14 + 16);
                goto LABEL_30;
              }
            }
            if ( v99 )
              break;
          }
        }
        ++v22;
      }
      while ( v22 < v103 );
      v26 = v100;
LABEL_39:
      if ( !v21 )
        goto LABEL_71;
      v27 = *v21;
      v20 = 0;
    }
    else
    {
      v27 = *(_BYTE *)(v14 + 72);
      v15 = *(_BYTE **)(v14 + 32);
      v16 = *(_BYTE *)(v14 + 11);
      v26 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_71;
    }
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_71;
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v15 || !v16 )
    {
LABEL_64:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        LOBYTE(v98) = v26;
        LOBYTE(v97) = v28;
        LODWORD(v96) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v105, a2, v96, v97, v98, v17, v18, v19, a2);
      }
      goto LABEL_71;
    }
    v29 = *v15 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_62;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_62;
      v30 = v15 + 13;
      v17 = v15[2] & 0xF;
      v31 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v31 = (unsigned __int8)v15[7] + 8;
      v10 = (unsigned __int64)&v15[v31];
      if ( (unsigned __int64)v30 <= v10 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v10 )
        v19 = 0;
      else
        v19 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_62:
    if ( (_BYTE)v14 )
      v20 = 1;
    goto LABEL_64;
  }
  if ( !*(_QWORD *)(a1 + 608)
    || v8 != 2956288 && v8 != 2956492 && v8 != 3002880 && v8 != 3003328 && v8 != 3005444 && v8 != 3005448 )
  {
    if ( RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) && NvmeAdapterAttemptQueueIrpForDfxPowerDown(a1, a2, v8) )
    {
      v33 = 259;
      goto LABEL_253;
    }
    if ( v8 <= 0x32C038 )
    {
      if ( v8 != 3326008 )
      {
        if ( v8 <= 0x2D93FC )
        {
          if ( v8 == 2987004 )
          {
            InfoIoctl = NvmeAdapterStorageSetProperty(a1, a2, &v99);
          }
          else
          {
            v60 = v8 - 2953348;
            if ( !v60 )
            {
              DeviceNumber = NvmeAdapterGetDeviceNumberEx(a1, a2);
              goto LABEL_162;
            }
            v61 = v60 - 884;
            if ( !v61 )
            {
              DeviceNumber = NvmeAdapterStorageInternalQueryPropertyIoctl(a1, a2);
              goto LABEL_162;
            }
            v62 = v61 - 8;
            if ( v62 )
            {
              v63 = v62 - 2048;
              if ( v63 )
              {
                v64 = v63 - 148;
                if ( !v64 )
                {
                  DeviceNumber = NvmeAdapterPowerCapIoctl(a1, a2, v59);
                  goto LABEL_162;
                }
                v65 = v64 - 56;
                if ( !v65 )
                {
                  DeviceNumber = NvmeAdapterSetLedState((__int64 *)a1, a2);
                  goto LABEL_162;
                }
                v66 = v65 - 12112;
                if ( !v66 )
                {
                  DeviceNumber = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
                  goto LABEL_162;
                }
                if ( v66 == 1068 )
                {
                  DeviceNumber = NvmeAdapterStorageNotificationGetInfoIoctl(a1, a2);
LABEL_162:
                  v33 = DeviceNumber;
                  goto LABEL_253;
                }
LABEL_214:
                v9 = StorEtwLoggingEnabled == 0;
                v33 = -1073741637;
                *(_DWORD *)(a2 + 48) = -1073741637;
                *(_BYTE *)(a2 + 141) = -84;
                if ( v9 )
                  goto LABEL_145;
                v105 = 0LL;
                IoGetActivityIdIrp(a2, &v105);
                v35 = *(unsigned __int8 **)(a2 + 184);
                if ( *v35 != 14 )
                {
                  v36 = *v35 - 15;
                  if ( *v35 != 15 )
                    goto LABEL_82;
                  if ( byte_140173441 >= 0 )
                    goto LABEL_145;
                  v39 = *((_QWORD *)v35 + 1);
                  v40 = 0LL;
                  v100 = 0;
                  v41 = 0;
                  v42 = 0;
                  v43 = 0;
                  v44 = 0;
                  v45 = *(unsigned __int8 *)(v39 + 2);
                  if ( (_BYTE)v45 == 40 )
                  {
                    v90 = 0LL;
                    v101 = 0;
                    if ( *(_DWORD *)(v39 + 20) )
                      goto LABEL_145;
                    v91 = *(_DWORD *)(v39 + 56);
                    v92 = 0LL;
                    v103 = 0;
                    v104 = v91;
                    if ( !v91 )
                      goto LABEL_145;
                    while ( 1 )
                    {
                      v34 = *(unsigned int *)(v39 + 4 * v92 + 120);
                      if ( (unsigned int)v34 >= 0x80 )
                      {
                        v93 = *(unsigned int *)(v39 + 16);
                        if ( (unsigned int)v34 < (unsigned int)v93 )
                        {
                          v94 = (unsigned int)v34;
                          v95 = *(_DWORD *)(v39 + v34) - 64;
                          if ( v95 )
                          {
                            v34 = (unsigned int)(v95 - 1);
                            if ( (_DWORD)v34 )
                            {
                              if ( (_DWORD)v34 == 1 )
                              {
                                v34 = v94 + 40;
                                if ( v94 + 40 <= v93 )
                                {
                                  if ( *(_DWORD *)(v39 + v94 + 12) )
                                    v90 = (char *)(v94 + v39 + 32);
                                  v40 = *(_BYTE **)(v39 + v94 + 24);
LABEL_241:
                                  v41 = *(_BYTE *)(v39 + v94 + 9);
                                  v100 = *(_BYTE *)(v39 + v94 + 8);
LABEL_242:
                                  if ( !v90 )
                                    goto LABEL_145;
                                  v52 = *v90;
                                  v53 = v100;
LABEL_119:
                                  if ( ((v52 - 8) & 0x5D) != 0 )
                                    goto LABEL_145;
                                  v54 = *(_BYTE *)(v39 + 3);
                                  if ( v54 == 1 || !v40 || !v41 )
                                    goto LABEL_137;
                                  v55 = *v40 & 0x7F;
                                  if ( v55 == 114 || v55 == 115 )
                                  {
                                    v34 = (unsigned __int64)&v40[v41];
                                    LOBYTE(v39) = 0;
                                    if ( (unsigned __int64)(v40 + 8) <= v34 )
                                    {
                                      v44 = v40[3];
                                      v42 = v40[1] & 0xF;
                                      v43 = v40[2];
                                      goto LABEL_135;
                                    }
                                  }
                                  else
                                  {
                                    v34 = (unsigned __int64)&v40[v41];
                                    LOBYTE(v39) = 0;
                                    if ( (unsigned __int64)(v40 + 8) <= v34 )
                                    {
                                      v56 = v40 + 13;
                                      v42 = v40[2] & 0xF;
                                      v57 = v41;
                                      if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
                                        v57 = (unsigned __int8)v40[7] + 8;
                                      v34 = (unsigned __int64)&v40[v57];
                                      if ( (unsigned __int64)v56 <= v34 )
                                        v43 = v40[12];
                                      if ( (unsigned __int64)(v40 + 14) > v34 )
                                        v44 = 0;
                                      else
                                        v44 = *v56;
LABEL_135:
                                      LOBYTE(v39) = 1;
                                    }
                                  }
                                  LOBYTE(v34) = 1;
                                  if ( !(_BYTE)v39 )
LABEL_137:
                                    LOBYTE(v34) = 0;
                                  if ( byte_140173441 < 0 )
                                  {
                                    if ( !(_BYTE)v34 )
                                    {
                                      v44 = 0;
                                      v43 = 0;
                                      v42 = 0;
                                    }
                                    LOBYTE(v98) = v53;
                                    LOBYTE(v97) = v54;
                                    LODWORD(v96) = *(_DWORD *)(a2 + 48);
                                    McTemplateK0pduuuuup_EtwWriteTransfer(
                                      v34,
                                      v39,
                                      &v105,
                                      a2,
                                      v96,
                                      v97,
                                      v98,
                                      v42,
                                      v43,
                                      v44,
                                      a2);
                                  }
                                  goto LABEL_145;
                                }
                              }
                            }
                            else
                            {
                              v34 = v94 + 56;
                              if ( v94 + 56 <= v93 )
                              {
                                v101 = 1;
                                if ( *(_BYTE *)(v39 + v94 + 10) )
                                  v90 = (char *)(v94 + v39 + 24);
                                v40 = *(_BYTE **)(v39 + v94 + 16);
                                v41 = *(_BYTE *)(v39 + v94 + 9);
                                v100 = *(_BYTE *)(v39 + v94 + 8);
                              }
                            }
                          }
                          else
                          {
                            v34 = v94 + 40;
                            if ( v94 + 40 <= v93 )
                            {
                              if ( *(_BYTE *)(v39 + v94 + 10) )
                                v90 = (char *)(v94 + v39 + 24);
                              v40 = *(_BYTE **)(v39 + v94 + 16);
                              goto LABEL_241;
                            }
                          }
                          if ( v101 )
                            goto LABEL_242;
                        }
                      }
                      v92 = v103 + 1;
                      v103 = v92;
                      if ( (unsigned int)v92 >= v104 )
                        goto LABEL_242;
                    }
                  }
                  goto LABEL_118;
                }
LABEL_142:
                if ( (byte_140173442 & 8) == 0 )
                  goto LABEL_145;
                v38 = &EventNonReadWriteRequestComplete;
                goto LABEL_144;
              }
              InfoIoctl = NvmeAdapterFirmwareGetInfoIoctl(a1, *(union _SLIST_HEADER **)(a1 + 1152), a2, &v99);
            }
            else
            {
              InfoIoctl = NvmeAdapterStorageQueryProperty(a1, a2, &v99);
            }
          }
          goto LABEL_252;
        }
        v69 = v8 - 3002428;
        if ( !v69 )
        {
          DeviceNumber = NvmeAdapterStorageTestErrorInjectionIoctl(v58, a2);
          goto LABEL_162;
        }
        v70 = v69 - 8;
        if ( !v70 )
        {
          DeviceNumber = NvmeAdapterStorageNotificationConfigureIoctl(a1, a2);
          goto LABEL_162;
        }
        v71 = v70 - 12;
        if ( !v71 )
        {
          DeviceNumber = NvmeAdapterMiniportPassthroughRequestIoctl(a1, 0LL, a2);
          goto LABEL_162;
        }
        v72 = v71 - 432;
        if ( !v72 )
        {
          InfoIoctl = NvmeAdapterSetTemperatureThresholdIoctl(a1, a2, &v99);
          goto LABEL_252;
        }
        v73 = v72 - 448;
        if ( !v73 )
        {
          InfoIoctl = NvmeAdapterStorageProtocolCommandIoctl(a1, *(union _SLIST_HEADER **)(a1 + 1152), a2, &v99);
          goto LABEL_252;
        }
        v74 = v73 - 2116;
        if ( !v74 )
        {
          InfoIoctl = NvmeAdapterFirmwareDownloadIoctl(a1, *(union _SLIST_HEADER **)(a1 + 1152), a2, &v99);
          goto LABEL_252;
        }
        v75 = v74 - 4;
        if ( !v75 )
        {
          InfoIoctl = NvmeAdapterFirmwareActivateIoctl(a1, *(union _SLIST_HEADER **)(a1 + 1152), a2, 0LL, &v99);
          goto LABEL_252;
        }
        if ( v75 != 320504 )
          goto LABEL_214;
      }
      DeviceNumber = RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
      goto LABEL_162;
    }
    if ( v8 <= 0x628010 )
    {
      if ( v8 == 6455312 )
      {
        DeviceNumber = NvmeAdapterAddSubsystemPort(a1, a2);
        goto LABEL_162;
      }
      v76 = v8 - 6422528;
      if ( !v76 )
      {
        DeviceNumber = NvmeAdapterGetHostGateways(a1, (IRP *)a2);
        goto LABEL_162;
      }
      v77 = v76 - 4;
      if ( !v77 )
      {
        DeviceNumber = NvmeAdapterGetHostGatewayByHandle(a1, a2);
        goto LABEL_162;
      }
      v78 = v77 - 8;
      if ( !v78 )
      {
        DeviceNumber = NvmeAdapterGetSubsystemPorts(a1, (_QWORD *)a2);
        goto LABEL_162;
      }
      v79 = v78 - 12;
      if ( !v79 )
      {
        DeviceNumber = NvmeAdapterGetControllers(a1, (IRP *)a2);
        goto LABEL_162;
      }
      v80 = v79 - 20;
      if ( !v80 )
      {
        DeviceNumber = NvmeAdapterGetHostInformation(a1, a2);
        goto LABEL_162;
      }
      v81 = v80 - 4;
      if ( !v81 )
      {
        DeviceNumber = NvmeAdapterGetNamespaces(a1, a2);
        goto LABEL_162;
      }
      v82 = v81 - 4;
      if ( !v82 )
      {
        DeviceNumber = NvmeAdapterGetNvmeControllerDiscoveryEntries(a1, a2);
        goto LABEL_162;
      }
      if ( v82 == 4 )
      {
        DeviceNumber = NvmeAdapterGetAuthenticationKeys(a1, (_QWORD *)a2);
        goto LABEL_162;
      }
      goto LABEL_214;
    }
    v83 = v8 - 6455316;
    if ( v83 )
    {
      v84 = v83 - 8;
      if ( !v84 )
      {
        DeviceNumber = NvmeAdapterConnectController(a1, a2);
        goto LABEL_162;
      }
      v85 = v84 - 4;
      if ( !v85 )
      {
        DeviceNumber = NvmeAdapterDisconnectController(a1, a2);
        goto LABEL_162;
      }
      v86 = v85 - 4;
      if ( !v86 )
      {
        DeviceNumber = NvmeAdapterAddController(a1, a2);
        goto LABEL_162;
      }
      v87 = v86 - 4;
      if ( !v87 )
      {
        DeviceNumber = NvmeAdapterRemoveController(a1, a2);
        goto LABEL_162;
      }
      v88 = v87 - 20;
      if ( !v88 )
      {
        DeviceNumber = NvmeAdapterAddAuthenticationKey(a1, a2);
        goto LABEL_162;
      }
      v89 = v88 - 4;
      if ( !v89 )
      {
        DeviceNumber = NvmeAdapterCreateAuthenticationKey(a1, a2);
        goto LABEL_162;
      }
      if ( v89 == 4 )
      {
        DeviceNumber = NvmeAdapterDeleteAuthenticationKey(a1, a2);
        goto LABEL_162;
      }
      goto LABEL_214;
    }
    InfoIoctl = NvmeAdapterRemoveSubsystemPort(a1, a2);
LABEL_252:
    v33 = InfoIoctl;
    if ( v99 )
      goto LABEL_253;
    return v33;
  }
  v9 = StorEtwLoggingEnabled == 0;
  v33 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v9 )
    goto LABEL_145;
  v105 = 0LL;
  IoGetActivityIdIrp(a2, &v105);
  v35 = *(unsigned __int8 **)(a2 + 184);
  if ( *v35 == 14 )
    goto LABEL_142;
  v36 = *v35 - 15;
  if ( *v35 != 15 )
  {
LABEL_82:
    if ( v36 != 12 )
      goto LABEL_145;
    if ( v35[1] == 7 && !*((_DWORD *)v35 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v37 = *(int **)(a2 + 56);
        if ( v37 )
          v6 = *v37;
        LODWORD(v97) = *(_DWORD *)(a2 + 48);
        LODWORD(v96) = v6;
        McTemplateK0pqd_EtwWriteTransfer(v34, (__int64)v35, &v105, a2, v96, v97);
      }
      goto LABEL_145;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_145;
    v38 = &EventPnpRequestComplete;
LABEL_144:
    LODWORD(v96) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v34, v38, &v105, a2, v96);
    goto LABEL_145;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_145;
  v39 = *((_QWORD *)v35 + 1);
  v40 = 0LL;
  v99 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = *(unsigned __int8 *)(v39 + 2);
  if ( (_BYTE)v45 != 40 )
  {
LABEL_118:
    v53 = *(_BYTE *)(v39 + 4);
    v41 = *(_BYTE *)(v39 + 11);
    v40 = *(_BYTE **)(v39 + 32);
    v52 = *(_BYTE *)(v39 + 72);
    if ( v45 )
      goto LABEL_145;
    goto LABEL_119;
  }
  v46 = 0LL;
  v101 = 0;
  if ( *(_DWORD *)(v39 + 20) )
    goto LABEL_145;
  v47 = *(_DWORD *)(v39 + 56);
  v48 = 0LL;
  v103 = 0;
  v104 = v47;
  if ( !v47 )
    goto LABEL_145;
  while ( 1 )
  {
    v34 = *(unsigned int *)(v39 + 4 * v48 + 120);
    if ( (unsigned int)v34 >= 0x80 )
    {
      v49 = *(unsigned int *)(v39 + 16);
      if ( (unsigned int)v34 < (unsigned int)v49 )
        break;
    }
LABEL_110:
    v48 = v103 + 1;
    v103 = v48;
    if ( (unsigned int)v48 >= v104 )
      goto LABEL_116;
  }
  v50 = (unsigned int)v34;
  v51 = *(_DWORD *)(v39 + v34) - 64;
  if ( v51 )
  {
    v34 = (unsigned int)(v51 - 1);
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 == 1 )
      {
        v34 = v50 + 40;
        if ( v50 + 40 <= v49 )
        {
          if ( *(_DWORD *)(v39 + v50 + 12) )
            v46 = (char *)(v50 + v39 + 32);
          v40 = *(_BYTE **)(v39 + v50 + 24);
          goto LABEL_115;
        }
      }
    }
    else
    {
      v34 = v50 + 56;
      if ( v50 + 56 <= v49 )
      {
        v101 = 1;
        if ( *(_BYTE *)(v39 + v50 + 10) )
          v46 = (char *)(v50 + v39 + 24);
        v40 = *(_BYTE **)(v39 + v50 + 16);
        v41 = *(_BYTE *)(v39 + v50 + 9);
        v99 = *(_BYTE *)(v39 + v50 + 8);
      }
    }
    goto LABEL_109;
  }
  v34 = v50 + 40;
  if ( v50 + 40 > v49 )
  {
LABEL_109:
    if ( v101 )
      goto LABEL_116;
    goto LABEL_110;
  }
  if ( *(_BYTE *)(v39 + v50 + 10) )
    v46 = (char *)(v50 + v39 + 24);
  v40 = *(_BYTE **)(v39 + v50 + 16);
LABEL_115:
  v41 = *(_BYTE *)(v39 + v50 + 9);
  v99 = *(_BYTE *)(v39 + v50 + 8);
LABEL_116:
  if ( v46 )
  {
    v52 = *v46;
    v53 = v99;
    goto LABEL_119;
  }
LABEL_145:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_253:
  NvmeAdapterReleaseRemoveLock(a1);
  return v33;
}
