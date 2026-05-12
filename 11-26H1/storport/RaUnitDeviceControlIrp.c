/*
 * XREFs of RaUnitDeviceControlIrp @ 0x14001D890
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x140007B84 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14001EBF0 (StorageGetSystemFeatureSupportIoctl.c)
 *     RaUnitStoragePowerIdle @ 0x140024E48 (RaUnitStoragePowerIdle.c)
 *     RaUnitProtocolCommandIoctl @ 0x140046E3C (RaUnitProtocolCommandIoctl.c)
 *     RaUnitStorageEnableIdlePower @ 0x140047354 (RaUnitStorageEnableIdlePower.c)
 *     RaUnitTelemetryIdIoctl @ 0x140048110 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x140057444 (RaidAdapterStorageResetBusIoctl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x14005AEB8 (RaUnitCheckRemoveStateForDisabled.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x14006A03C (RaidAdapterStorageDeviceResetIoctl.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x140087B5C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1400880D0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140088708 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x140088CB4 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400892C4 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140089860 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x140089E3C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008A358 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x14008A830 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x14008AD88 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x14008B3A0 (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x14008B974 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x14008BF3C (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaUnitAttributeManagement @ 0x1400991B0 (RaUnitAttributeManagement.c)
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x14009BD04 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitGetQOSIoctl @ 0x14009C1F4 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwBootPartitionActivateIoctl @ 0x14009C658 (RaUnitHwBootPartitionActivateIoctl.c)
 *     RaUnitHwBootPartitionDownloadIoctl @ 0x14009CA34 (RaUnitHwBootPartitionDownloadIoctl.c)
 *     RaUnitHwBootPartitionGetInfoIoctl @ 0x14009CE1C (RaUnitHwBootPartitionGetInfoIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x14009D200 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x14009D5D4 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x14009D9A8 (RaUnitPowerCapIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitSetPciLinkBandwidthIoctl @ 0x1400A0178 (RaUnitSetPciLinkBandwidthIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1400A0538 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1400A0F8C (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageNotificationConfigureIoctl @ 0x1400A3218 (RaUnitStorageNotificationConfigureIoctl.c)
 *     RaUnitStorageNotificationGetInfoIoctl @ 0x1400A35F0 (RaUnitStorageNotificationGetInfoIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1400A39D8 (RaUnitStoragePowerActive.c)
 *     RaUnitStreamsIoctl @ 0x1400A5B3C (RaUnitStreamsIoctl.c)
 *     RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x1400A5FE4 (RaUnitUnlockContiguousPhysicalPagesIoctl.c)
 *     RaidUnitSetLedState @ 0x1400A9A38 (RaidUnitSetLedState.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x14018B304 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x14018B6FC (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x14018BB30 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x14018C258 (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x14018C7E0 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x14018CBB0 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x14018D09C (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x14018D4F8 (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x14018D90C (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x14018E3C0 (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1401B3AD4 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1401B3CB8 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int v6; // r13d
  unsigned __int8 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int inserted; // r14d
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned int InfoIoctl; // eax
  void *v25; // rdx
  __int128 *v26; // r8
  void *v27; // rdx
  int *v28; // rax
  int v29; // ecx
  int *v30; // rax
  int *v31; // rax
  char v32; // al
  __int64 v33; // rdx
  char *v34; // r11
  char v35; // r10
  unsigned int v36; // eax
  char v37; // si
  char v38; // r11
  char v39; // al
  __int64 v40; // rdx
  char *v41; // rsi
  char v42; // r11
  unsigned int v43; // eax
  char v44; // si
  char v45; // al
  char v46; // al
  char v47; // r8
  char *v48; // r11
  unsigned int v49; // eax
  char v50; // r13
  char v51; // r11
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  _BYTE *v55; // r9
  unsigned __int8 v56; // r10
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int128 *v61; // r8
  _BYTE *v62; // r9
  int v63; // eax
  char *v64; // r13
  unsigned int v65; // ecx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // r8
  int v69; // ecx
  char v70; // cl
  char v71; // r8
  char v72; // r13
  char *v73; // r13
  unsigned int v74; // ecx
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // r8
  int v78; // ecx
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  int *v81; // rcx
  int v82; // ecx
  void *v83; // rdx
  __int64 v84; // rdx
  _BYTE *v85; // r9
  unsigned __int8 v86; // r14
  char v87; // r10
  char v88; // si
  char v89; // r11
  char *v90; // r12
  unsigned int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 v93; // r13
  __int64 v94; // r8
  int v95; // ecx
  char v96; // r13
  char v97; // cl
  char v98; // r8
  char v99; // al
  char *v100; // r11
  unsigned int v101; // eax
  char v102; // cl
  char v103; // r13
  _BYTE *v104; // r8
  unsigned __int8 v105; // r10
  unsigned int v106; // eax
  unsigned int v107; // r9d
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // r9
  int v111; // ecx
  unsigned int v112; // r9d
  __int64 v113; // rcx
  unsigned __int64 v114; // rax
  __int64 v115; // r8
  int v116; // ecx
  char v117; // cl
  char v118; // [rsp+60h] [rbp-29h]
  char v119; // [rsp+60h] [rbp-29h]
  char v120; // [rsp+61h] [rbp-28h] BYREF
  char v121; // [rsp+62h] [rbp-27h]
  char v122; // [rsp+63h] [rbp-26h]
  unsigned int v123; // [rsp+64h] [rbp-25h]
  int v124; // [rsp+68h] [rbp-21h]
  unsigned int v125; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v126; // [rsp+70h] [rbp-19h]
  __int128 v127; // [rsp+78h] [rbp-11h] BYREF
  __int128 v128; // [rsp+88h] [rbp-1h] BYREF
  __int128 v129; // [rsp+98h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v3) = 0;
  v120 = 0;
  v129 = 0LL;
  v6 = *(_DWORD *)(v2 + 24);
  v7 = 0;
  v123 = v6;
  if ( v6 == 2955532 )
  {
    if ( *(_BYTE *)(a2 + 64) )
    {
      v14 = StorEtwLoggingEnabled == 0;
      inserted = -1073741808;
      *(_DWORD *)(a2 + 48) = -1073741808;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v14 )
        goto LABEL_20;
      v127 = 0LL;
      IoGetActivityIdIrp(a2, &v127);
      v16 = *(unsigned __int8 **)(a2 + 184);
      if ( *v16 != 14 )
      {
        v17 = *v16 - 15;
        if ( *v16 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_20;
          v33 = *((_QWORD *)v16 + 1);
          v62 = 0LL;
          v121 = 0;
          v35 = 0;
          v37 = 0;
          v38 = 0;
          v63 = *(unsigned __int8 *)(v33 + 2);
          if ( (_BYTE)v63 == 40 )
          {
            v64 = 0LL;
            v120 = 0;
            if ( *(_DWORD *)(v33 + 20) )
              goto LABEL_20;
            v65 = *(_DWORD *)(v33 + 56);
            v66 = 0LL;
            v124 = 0;
            v125 = v65;
            if ( !v65 )
              goto LABEL_20;
            while ( 1 )
            {
              v15 = *(unsigned int *)(v33 + 4 * v66 + 120);
              if ( (unsigned int)v15 >= 0x80 )
              {
                v67 = *(unsigned int *)(v33 + 16);
                if ( (unsigned int)v15 < (unsigned int)v67 )
                {
                  v68 = (unsigned int)v15;
                  v69 = *(_DWORD *)(v15 + v33) - 64;
                  if ( v69 )
                  {
                    LODWORD(v15) = v69 - 1;
                    if ( (_DWORD)v15 )
                    {
                      if ( (_DWORD)v15 == 1 )
                      {
                        LODWORD(v15) = v68 + 40;
                        if ( v68 + 40 <= v67 )
                        {
                          if ( *(_DWORD *)(v68 + v33 + 12) )
                            v64 = (char *)(v68 + v33 + 32);
                          v62 = *(_BYTE **)(v68 + v33 + 24);
LABEL_274:
                          v7 = *(_BYTE *)(v68 + v33 + 9);
                          v121 = *(_BYTE *)(v68 + v33 + 8);
LABEL_275:
                          if ( !v64 )
                            goto LABEL_20;
                          v70 = *v64;
                          v71 = v121;
LABEL_278:
                          if ( ((v70 - 8) & 0x5D) != 0 )
                            goto LABEL_20;
                          v72 = *(_BYTE *)(v33 + 3);
                          if ( v72 == 1 || !v62 || !v7 )
                            goto LABEL_145;
                          v32 = *v62 & 0x7F;
                          if ( v32 == 114 || v32 == 115 )
                          {
                            v15 = (unsigned __int64)&v62[v7];
                            LOBYTE(v33) = 0;
                            if ( (unsigned __int64)(v62 + 8) <= v15 )
                            {
                              v38 = v62[3];
                              v35 = v62[1] & 0xF;
                              v37 = v62[2];
                              goto LABEL_140;
                            }
                          }
                          else
                          {
                            v15 = (unsigned __int64)&v62[v7];
                            LOBYTE(v33) = 0;
                            if ( (unsigned __int64)(v62 + 8) <= v15 )
                            {
                              v34 = v62 + 13;
                              v35 = v62[2] & 0xF;
                              v36 = v7;
                              if ( (unsigned int)(unsigned __int8)v62[7] + 8 <= v7 )
                                v36 = (unsigned __int8)v62[7] + 8;
                              v15 = (unsigned __int64)&v62[v36];
                              if ( (unsigned __int64)v34 <= v15 )
                                v37 = v62[12];
                              if ( (unsigned __int64)(v62 + 14) > v15 )
                                v38 = 0;
                              else
                                v38 = *v34;
LABEL_140:
                              LOBYTE(v33) = 1;
                            }
                          }
                          LOBYTE(v15) = 1;
                          if ( !(_BYTE)v33 )
LABEL_145:
                            LOBYTE(v15) = 0;
                          if ( byte_140173441 < 0 )
                          {
                            if ( !(_BYTE)v15 )
                            {
                              v38 = 0;
                              v37 = 0;
                              v35 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              v15,
                              v33,
                              (unsigned int)&v127,
                              a2,
                              *(_DWORD *)(a2 + 48),
                              v72,
                              v71,
                              v35,
                              v37,
                              v38,
                              a2);
                          }
                          goto LABEL_20;
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v15) = v68 + 56;
                      if ( v68 + 56 <= v67 )
                      {
                        v120 = 1;
                        if ( *(_BYTE *)(v68 + v33 + 10) )
                          v64 = (char *)(v68 + v33 + 24);
                        v62 = *(_BYTE **)(v68 + v33 + 16);
                        v7 = *(_BYTE *)(v68 + v33 + 9);
                        v121 = *(_BYTE *)(v68 + v33 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v15) = v68 + 40;
                    if ( v68 + 40 <= v67 )
                    {
                      if ( *(_BYTE *)(v68 + v33 + 10) )
                        v64 = (char *)(v68 + v33 + 24);
                      v62 = *(_BYTE **)(v68 + v33 + 16);
                      goto LABEL_274;
                    }
                  }
                  if ( v120 )
                    goto LABEL_275;
                }
              }
              v66 = (unsigned int)(v124 + 1);
              v124 = v66;
              if ( (unsigned int)v66 >= v125 )
                goto LABEL_275;
            }
          }
          goto LABEL_277;
        }
        goto LABEL_113;
      }
      goto LABEL_109;
    }
    if ( !*(_DWORD *)(v2 + 8) )
    {
      v14 = StorEtwLoggingEnabled == 0;
      inserted = -1073741789;
      *(_DWORD *)(a2 + 48) = -1073741789;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v14 )
        goto LABEL_20;
      v127 = 0LL;
      IoGetActivityIdIrp(a2, &v127);
      v16 = *(unsigned __int8 **)(a2 + 184);
      if ( *v16 != 14 )
      {
        v17 = *v16 - 15;
        if ( *v16 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_20;
          v33 = *((_QWORD *)v16 + 1);
          v62 = 0LL;
          v118 = 0;
          v35 = 0;
          v37 = 0;
          v38 = 0;
          v63 = *(unsigned __int8 *)(v33 + 2);
          if ( (_BYTE)v63 == 40 )
          {
            v73 = 0LL;
            v120 = 0;
            if ( *(_DWORD *)(v33 + 20) )
              goto LABEL_20;
            v74 = *(_DWORD *)(v33 + 56);
            v75 = 0LL;
            v124 = 0;
            v125 = v74;
            if ( !v74 )
              goto LABEL_20;
            while ( 1 )
            {
              v15 = *(unsigned int *)(v33 + 4 * v75 + 120);
              if ( (unsigned int)v15 >= 0x80 )
              {
                v76 = *(unsigned int *)(v33 + 16);
                if ( (unsigned int)v15 < (unsigned int)v76 )
                {
                  v77 = (unsigned int)v15;
                  v78 = *(_DWORD *)(v15 + v33) - 64;
                  if ( v78 )
                  {
                    LODWORD(v15) = v78 - 1;
                    if ( (_DWORD)v15 )
                    {
                      if ( (_DWORD)v15 == 1 )
                      {
                        LODWORD(v15) = v77 + 40;
                        if ( v77 + 40 <= v76 )
                        {
                          if ( *(_DWORD *)(v77 + v33 + 12) )
                            v73 = (char *)(v77 + v33 + 32);
                          v62 = *(_BYTE **)(v77 + v33 + 24);
LABEL_312:
                          v7 = *(_BYTE *)(v77 + v33 + 9);
                          v118 = *(_BYTE *)(v77 + v33 + 8);
LABEL_313:
                          if ( !v73 )
                            goto LABEL_20;
                          v70 = *v73;
                          v71 = v118;
                          goto LABEL_278;
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v15) = v77 + 56;
                      if ( v77 + 56 <= v76 )
                      {
                        v120 = 1;
                        if ( *(_BYTE *)(v77 + v33 + 10) )
                          v73 = (char *)(v77 + v33 + 24);
                        v62 = *(_BYTE **)(v77 + v33 + 16);
                        v7 = *(_BYTE *)(v77 + v33 + 9);
                        v118 = *(_BYTE *)(v77 + v33 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v15) = v77 + 40;
                    if ( v77 + 40 <= v76 )
                    {
                      if ( *(_BYTE *)(v77 + v33 + 10) )
                        v73 = (char *)(v77 + v33 + 24);
                      v62 = *(_BYTE **)(v77 + v33 + 16);
                      goto LABEL_312;
                    }
                  }
                  if ( v120 )
                    goto LABEL_313;
                }
              }
              v75 = (unsigned int)(v124 + 1);
              v124 = v75;
              if ( (unsigned int)v75 >= v125 )
                goto LABEL_313;
            }
          }
LABEL_277:
          v71 = *(_BYTE *)(v33 + 4);
          v7 = *(_BYTE *)(v33 + 11);
          v62 = *(_BYTE **)(v33 + 32);
          v70 = *(_BYTE *)(v33 + 72);
          if ( v63 )
            goto LABEL_20;
          goto LABEL_278;
        }
LABEL_113:
        if ( v17 != 12 )
          goto LABEL_20;
        if ( v16[1] == 7 && !*((_DWORD *)v16 + 2) )
        {
          if ( (byte_140173442 & 0x40) == 0 )
            goto LABEL_20;
          v31 = *(int **)(a2 + 56);
          if ( v31 )
            v3 = *v31;
          v61 = &v127;
          goto LABEL_250;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_20;
        v26 = &v127;
        goto LABEL_108;
      }
LABEL_109:
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_20;
      v26 = &v127;
      goto LABEL_111;
    }
    v14 = StorEtwLoggingEnabled == 0;
    **(_BYTE **)(a2 + 24) = (*(_BYTE *)(a1 + 504) & 4) == 0;
    *(_QWORD *)(a2 + 56) = 1LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v14 )
      goto LABEL_382;
    v127 = 0LL;
    IoGetActivityIdIrp(a2, &v127);
    v80 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v80 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_382;
      v83 = &EventNonReadWriteRequestComplete;
      goto LABEL_381;
    }
    if ( *(_BYTE *)v80 != 15 )
    {
      if ( *(_BYTE *)v80 != 27 )
        goto LABEL_382;
      if ( *(_BYTE *)(v80 + 1) == 7 && !*(_DWORD *)(v80 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v81 = *(int **)(a2 + 56);
          if ( v81 )
            v82 = *v81;
          else
            v82 = 0;
          McTemplateK0pqd_EtwWriteTransfer(v82, v80, (unsigned int)&v127, a2, v82, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_382;
      }
      if ( (byte_140173442 & 0x20) == 0 )
      {
LABEL_382:
        inserted = 0;
        goto LABEL_20;
      }
      v83 = &EventPnpRequestComplete;
LABEL_381:
      McTemplateK0pd_EtwWriteTransfer(v79, v83, &v127, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_382;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_382;
    v84 = *(_QWORD *)(v80 + 8);
    v85 = 0LL;
    v120 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    if ( *(_BYTE *)(v84 + 2) == 40 )
    {
      v90 = 0LL;
      v119 = 0;
      if ( *(_DWORD *)(v84 + 20) )
        goto LABEL_382;
      v91 = *(_DWORD *)(v84 + 56);
      v92 = 0LL;
      v124 = 0;
      v125 = v91;
      if ( !v91 )
        goto LABEL_382;
      while ( 1 )
      {
        v79 = *(unsigned int *)(v84 + 4 * v92 + 120);
        if ( (unsigned int)v79 >= 0x80 )
        {
          v93 = *(unsigned int *)(v84 + 16);
          if ( (unsigned int)v79 < (unsigned int)v93 )
          {
            v94 = (unsigned int)v79;
            v95 = *(_DWORD *)(v84 + v79) - 64;
            if ( v95 )
            {
              LODWORD(v79) = v95 - 1;
              if ( (_DWORD)v79 )
              {
                if ( (_DWORD)v79 == 1 )
                {
                  LODWORD(v79) = v94 + 40;
                  if ( v94 + 40 <= v93 )
                  {
                    if ( *(_DWORD *)(v84 + v94 + 12) )
                      v90 = (char *)(v94 + v84 + 32);
                    v85 = *(_BYTE **)(v84 + v94 + 24);
                    goto LABEL_354;
                  }
                }
              }
              else
              {
                LODWORD(v79) = v94 + 56;
                if ( v94 + 56 <= v93 )
                {
                  v119 = 1;
                  if ( *(_BYTE *)(v84 + v94 + 10) )
                    v90 = (char *)(v94 + v84 + 24);
                  v85 = *(_BYTE **)(v84 + v94 + 16);
                  v86 = *(_BYTE *)(v84 + v94 + 9);
                  v120 = *(_BYTE *)(v84 + v94 + 8);
                }
              }
            }
            else
            {
              LODWORD(v79) = v94 + 40;
              if ( v94 + 40 <= v93 )
              {
                if ( *(_BYTE *)(v84 + v94 + 10) )
                  v90 = (char *)(v94 + v84 + 24);
                v85 = *(_BYTE **)(v84 + v94 + 16);
LABEL_354:
                v96 = *(_BYTE *)(v84 + v94 + 8);
                v86 = *(_BYTE *)(v84 + v94 + 9);
LABEL_348:
                if ( v90 )
                {
                  v97 = *v90;
                  v7 = 0;
                  goto LABEL_356;
                }
                goto LABEL_382;
              }
            }
            if ( v119 )
              goto LABEL_347;
          }
        }
        v92 = (unsigned int)(v124 + 1);
        v124 = v92;
        if ( (unsigned int)v92 >= v125 )
        {
LABEL_347:
          v96 = v120;
          goto LABEL_348;
        }
      }
    }
    v97 = *(_BYTE *)(v84 + 72);
    v85 = *(_BYTE **)(v84 + 32);
    v86 = *(_BYTE *)(v84 + 11);
    v96 = *(_BYTE *)(v84 + 4);
    if ( *(_BYTE *)(v84 + 2) )
      goto LABEL_382;
LABEL_356:
    LOBYTE(v79) = v97 - 8;
    if ( (v79 & 0x5D) != 0 )
      goto LABEL_382;
    v98 = *(_BYTE *)(v84 + 3);
    if ( v98 == 1 || !v85 || !v86 )
    {
LABEL_375:
      if ( byte_140173441 < 0 )
      {
        if ( !v7 )
        {
          v89 = 0;
          v88 = 0;
          v87 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v79,
          v84,
          (unsigned int)&v127,
          a2,
          *(_DWORD *)(a2 + 48),
          v98,
          v96,
          v87,
          v88,
          v89,
          a2);
      }
      goto LABEL_382;
    }
    v99 = *v85 & 0x7F;
    if ( v99 == 114 || v99 == 115 )
    {
      v79 = (unsigned __int64)&v85[v86];
      LOBYTE(v84) = 0;
      if ( (unsigned __int64)(v85 + 8) > v79 )
        goto LABEL_373;
      v88 = v85[2];
      v87 = v85[1] & 0xF;
      v89 = v85[3];
    }
    else
    {
      v79 = (unsigned __int64)&v85[v86];
      LOBYTE(v84) = 0;
      if ( (unsigned __int64)(v85 + 8) > v79 )
        goto LABEL_373;
      v100 = v85 + 13;
      v87 = v85[2] & 0xF;
      v101 = v86;
      if ( (unsigned int)(unsigned __int8)v85[7] + 8 <= v86 )
        v101 = (unsigned __int8)v85[7] + 8;
      v79 = (unsigned __int64)&v85[v101];
      if ( (unsigned __int64)v100 <= v79 )
        v88 = v85[12];
      if ( (unsigned __int64)(v85 + 14) > v79 )
        v89 = 0;
      else
        v89 = *v100;
    }
    LOBYTE(v84) = 1;
LABEL_373:
    if ( (_BYTE)v84 )
      v7 = 1;
    goto LABEL_375;
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v129);
    if ( v6 == 315396 || (v8 = v6 - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( (byte_140173443 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v129,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v6);
    }
    else if ( (byte_140173442 & 2) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v129,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v6);
    }
  }
  v10 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v11 = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 40));
  while ( (v11 & 1) == 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + *(_QWORD *)(a1 + 40)), v11 + 2, v11);
    if ( v12 == v11 )
      goto LABEL_11;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1032), 1u);
LABEL_11:
  switch ( *(_DWORD *)(a1 + 56) )
  {
    case 5:
      v52 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v52 == 27 )
      {
        inserted = 0;
      }
      else if ( *(_BYTE *)v52 != 14 || (inserted = 0, *(_DWORD *)(v52 + 24) != 266276) )
      {
        inserted = -1073741738;
      }
LABEL_59:
      if ( (inserted & 0x80000000) != 0 )
        goto LABEL_14;
      break;
    case 6:
      inserted = -1073741738;
LABEL_14:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
      v14 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = inserted;
      if ( v14 )
        goto LABEL_20;
      v128 = 0LL;
      IoGetActivityIdIrp(a2, &v128);
      v16 = *(unsigned __int8 **)(a2 + 184);
      if ( *v16 != 14 )
      {
        if ( *v16 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_20;
          v40 = *((_QWORD *)v16 + 1);
          v102 = 0;
          v103 = 0;
          v104 = 0LL;
          v105 = 0;
          v42 = 0;
          v44 = 0;
          v106 = *(unsigned __int8 *)(v40 + 2);
          if ( (_BYTE)v106 != 40 )
          {
            v102 = *(_BYTE *)(v40 + 72);
            v104 = *(_BYTE **)(v40 + 32);
            v105 = *(_BYTE *)(v40 + 11);
            v103 = *(_BYTE *)(v40 + 4);
            goto LABEL_416;
          }
          v125 = *(_DWORD *)(v40 + 20);
          *(_QWORD *)&v127 = 0LL;
          v120 = 0;
          if ( v125 )
            goto LABEL_20;
          v107 = *(_DWORD *)(v40 + 56);
          v108 = 0LL;
          v124 = 0;
          v126 = v107;
          if ( !v107 )
            goto LABEL_415;
          while ( 1 )
          {
            v15 = *(unsigned int *)(v40 + 4 * v108 + 120);
            if ( (unsigned int)v15 >= 0x80 )
            {
              v109 = *(unsigned int *)(v40 + 16);
              if ( (unsigned int)v15 < (unsigned int)v109 )
              {
                v110 = (unsigned int)v15;
                v111 = *(_DWORD *)(v15 + v40) - 64;
                if ( v111 )
                {
                  LODWORD(v15) = v111 - 1;
                  if ( (_DWORD)v15 )
                  {
                    if ( (_DWORD)v15 == 1 )
                    {
                      LODWORD(v15) = v110 + 40;
                      if ( v110 + 40 <= v109 )
                      {
                        if ( *(_DWORD *)(v110 + v40 + 12) )
                          *(_QWORD *)&v127 = v110 + v40 + 32;
                        v104 = *(_BYTE **)(v110 + v40 + 24);
                        goto LABEL_410;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v15) = v110 + 56;
                    if ( v110 + 56 <= v109 )
                    {
                      v120 = 1;
                      if ( *(_BYTE *)(v110 + v40 + 10) )
                        *(_QWORD *)&v127 = v110 + v40 + 24;
                      v103 = *(_BYTE *)(v110 + v40 + 8);
                      v104 = *(_BYTE **)(v110 + v40 + 16);
                      v105 = *(_BYTE *)(v110 + v40 + 9);
                    }
                  }
                }
                else
                {
                  LODWORD(v15) = v110 + 40;
                  if ( v110 + 40 <= v109 )
                  {
                    if ( *(_BYTE *)(v110 + v40 + 10) )
                      *(_QWORD *)&v127 = v110 + v40 + 24;
                    v104 = *(_BYTE **)(v110 + v40 + 16);
LABEL_410:
                    v105 = *(_BYTE *)(v110 + v40 + 9);
                    v103 = *(_BYTE *)(v110 + v40 + 8);
LABEL_411:
                    if ( (_QWORD)v127 )
                    {
                      v102 = *(_BYTE *)v127;
                      v112 = inserted;
                      goto LABEL_417;
                    }
                    v102 = 0;
LABEL_415:
                    v106 = v125;
LABEL_416:
                    v112 = inserted;
                    if ( !v106 )
                    {
LABEL_417:
                      if ( ((v102 - 8) & 0x5D) == 0 )
                      {
                        v45 = *(_BYTE *)(v40 + 3);
                        v120 = v45;
                        if ( v45 == 1 || !v104 || !v105 )
                          goto LABEL_162;
                        v39 = *v104 & 0x7F;
                        if ( v39 == 114 || v39 == 115 )
                        {
                          v15 = (unsigned __int64)&v104[v105];
                          LOBYTE(v40) = 0;
                          if ( (unsigned __int64)(v104 + 8) <= v15 )
                          {
                            v7 = v104[2];
                            v42 = v104[1] & 0xF;
                            v44 = v104[3];
                            goto LABEL_157;
                          }
                        }
                        else
                        {
                          v15 = (unsigned __int64)&v104[v105];
                          LOBYTE(v40) = 0;
                          if ( (unsigned __int64)(v104 + 8) <= v15 )
                          {
                            v41 = v104 + 13;
                            v42 = v104[2] & 0xF;
                            v43 = v105;
                            if ( (unsigned int)(unsigned __int8)v104[7] + 8 <= v105 )
                              v43 = (unsigned __int8)v104[7] + 8;
                            v15 = (unsigned __int64)&v104[v43];
                            if ( (unsigned __int64)v41 <= v15 )
                              v7 = v104[12];
                            if ( (unsigned __int64)(v104 + 14) > v15 )
                              v44 = 0;
                            else
                              v44 = *v41;
LABEL_157:
                            LOBYTE(v40) = 1;
                          }
                        }
                        v45 = v120;
                        LOBYTE(v15) = 1;
                        if ( !(_BYTE)v40 )
LABEL_162:
                          LOBYTE(v15) = 0;
                        if ( byte_140173441 < 0 )
                        {
                          inserted = v112;
                          if ( !(_BYTE)v15 )
                          {
                            v44 = 0;
                            v7 = 0;
                            v42 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v15,
                            v40,
                            (unsigned int)&v128,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v45,
                            v103,
                            v42,
                            v7,
                            v44,
                            a2);
                        }
                      }
                    }
LABEL_20:
                    IofCompleteRequest((PIRP)a2, 0);
                    return inserted;
                  }
                }
                if ( v120 )
                  goto LABEL_411;
                v107 = v126;
              }
            }
            v108 = (unsigned int)(v124 + 1);
            v124 = v108;
            if ( (unsigned int)v108 >= v107 )
              goto LABEL_411;
          }
        }
        if ( *v16 != 27 )
          goto LABEL_20;
        if ( v16[1] == 7 && !*((_DWORD *)v16 + 2) )
        {
          if ( (byte_140173442 & 0x40) == 0 )
            goto LABEL_20;
          v30 = *(int **)(a2 + 56);
          if ( v30 )
            v3 = *v30;
          v61 = &v128;
LABEL_250:
          McTemplateK0pqd_EtwWriteTransfer(v15, (_DWORD)v16, (_DWORD)v61, a2, v3, *(_DWORD *)(a2 + 48));
          goto LABEL_20;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_20;
        v26 = &v128;
LABEL_108:
        v27 = &EventPnpRequestComplete;
LABEL_112:
        McTemplateK0pd_EtwWriteTransfer(v15, v27, v26, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_20;
      }
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_20;
      v26 = &v128;
LABEL_111:
      v27 = &EventNonReadWriteRequestComplete;
      goto LABEL_112;
    case 7:
      inserted = RaUnitCheckRemoveStateForDisabled((unsigned int)(*(_DWORD *)(a1 + 56) - 6), a2);
      goto LABEL_59;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1, a2, v6);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlReplace)(&dword_1401721E8, a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted == -1073741822 )
  {
    if ( !DisableExtensionDriver && EnableExtensionCalls )
    {
      _InterlockedAdd(&ExtRefCount, 1u);
      ((void (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlPre)(&dword_1401721E8, a1, a2);
      _InterlockedDecrement(&ExtRefCount);
    }
    if ( v6 <= 0x2D2830 )
    {
      if ( v6 != 2959408 )
      {
        if ( v6 <= 0x2D1C00 )
        {
          if ( v6 == 2956288 )
          {
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitHwFirmwareGetInfoIoctl((_QWORD *)a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          }
          if ( v6 <= 0x4D044 )
          {
            if ( v6 != 315460 )
            {
              switch ( v6 )
              {
                case 0x41018u:
                  InfoIoctl = RaUnitScsiGetAddressIoctl(a1, a2);
LABEL_82:
                  inserted = InfoIoctl;
LABEL_42:
                  if ( !DisableExtensionDriver )
                  {
                    if ( EnableExtensionCalls )
                    {
                      _InterlockedAdd(&ExtRefCount, 1u);
                      v60 = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlPost)(
                              &dword_1401721E8,
                              a1,
                              a2);
                      _InterlockedDecrement(&ExtRefCount);
                      if ( v60 != -1073741822 )
                        inserted = v60;
                    }
                  }
                  v7 = v120;
                  goto LABEL_45;
                case 0x41020u:
                  InfoIoctl = RaUnitScsiGetDumpPointersIoctl(a1, a2);
                  goto LABEL_82;
                case 0x41024u:
                  InfoIoctl = RaUnitScsiFreeDumpPointersIoctl(a1, a2);
                  goto LABEL_82;
              }
              if ( v6 != 315396 )
              {
                if ( v6 == 315400 )
                {
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    InfoIoctl = RaUnitScsiMiniportIoctl(a1, a2);
                    goto LABEL_82;
                  }
                  goto LABEL_594;
                }
                if ( v6 != 315412 )
                {
                  if ( v6 == 315436 )
                  {
                    if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                      && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
                    {
                      goto LABEL_594;
                    }
                    v53 = 0LL;
                  }
                  else
                  {
                    if ( v6 != 315440 )
                      goto LABEL_37;
                    if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                      && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
                    {
                      goto LABEL_594;
                    }
                    LOBYTE(v53) = 1;
                  }
                  InfoIoctl = RaUnitAtaPassThroughIoctl(a1, a2, v53);
                  goto LABEL_82;
                }
              }
            }
          }
          else if ( v6 != 315464 )
          {
            switch ( v6 )
            {
              case 0x2D08C0u:
                InfoIoctl = RaUnitStorageManageBypassIOIoctl(a1, a2);
                goto LABEL_82;
              case 0x2D11D0u:
                InfoIoctl = RaUnitStorageDataCollectionIoctl(a1, a2);
                goto LABEL_82;
              case 0x2D11D4u:
                InfoIoctl = RaUnitStorageGetInternalDataIoctl(a1, a2);
                goto LABEL_82;
              case 0x2D13F8u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  InfoIoctl = RaUnitStorageInternalQueryPropertyIoctl(a1, a2, &v120);
                  goto LABEL_82;
                }
                goto LABEL_594;
              case 0x2D1400u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  InfoIoctl = RaUnitStorageQueryPropertyIoctl(a1, a2);
                  goto LABEL_82;
                }
LABEL_594:
                inserted = RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
                if ( !inserted )
                  inserted = 259;
                goto LABEL_42;
              case 0x2D164Bu:
                InfoIoctl = RaUnitStorageGetDumpInfoIoctl(a1, a2);
                goto LABEL_82;
            }
            if ( v6 != 2954880 )
            {
LABEL_37:
              v14 = StorEtwLoggingEnabled == 0;
              inserted = -1073741808;
              *(_DWORD *)(a2 + 48) = -1073741808;
              *(_BYTE *)(a2 + 141) = -84;
              if ( !v14 )
              {
                v128 = 0LL;
                IoGetActivityIdIrp(a2, &v128);
                v19 = *(_QWORD *)(a2 + 184);
                switch ( *(_BYTE *)v19 )
                {
                  case 0xE:
                    if ( (byte_140173442 & 8) == 0 )
                      break;
                    v25 = &EventNonReadWriteRequestComplete;
LABEL_95:
                    McTemplateK0pd_EtwWriteTransfer(v18, v25, &v128, a2, *(_DWORD *)(a2 + 48));
                    break;
                  case 0xF:
                    if ( byte_140173441 >= 0 )
                      break;
                    v54 = *(_QWORD *)(v19 + 8);
                    v55 = 0LL;
                    v121 = 0;
                    v56 = 0;
                    v50 = 0;
                    v51 = 0;
                    v57 = *(unsigned __int8 *)(v54 + 2);
                    if ( (_BYTE)v57 == 40 )
                    {
                      *(_QWORD *)&v127 = 0LL;
                      v122 = 0;
                      if ( *(_DWORD *)(v54 + 20) )
                        goto LABEL_588;
                      v58 = *(_DWORD *)(v54 + 56);
                      v59 = 0LL;
                      v125 = 0;
                      v126 = v58;
                      if ( !v58 )
                        goto LABEL_588;
                      while ( 1 )
                      {
                        v18 = *(unsigned int *)(v54 + 4 * v59 + 120);
                        if ( (unsigned int)v18 >= 0x80 )
                        {
                          v114 = *(unsigned int *)(v54 + 16);
                          if ( (unsigned int)v18 < (unsigned int)v114 )
                          {
                            v115 = (unsigned int)v18;
                            v116 = *(_DWORD *)(v18 + v54) - 64;
                            if ( v116 )
                            {
                              LODWORD(v18) = v116 - 1;
                              if ( (_DWORD)v18 )
                              {
                                if ( (_DWORD)v18 == 1 )
                                {
                                  LODWORD(v18) = v115 + 40;
                                  if ( v115 + 40 <= v114 )
                                  {
                                    if ( *(_DWORD *)(v115 + v54 + 12) )
                                      *(_QWORD *)&v127 = v115 + v54 + 32;
                                    v55 = *(_BYTE **)(v115 + v54 + 24);
                                    v121 = *(_BYTE *)(v115 + v54 + 8);
                                    goto LABEL_580;
                                  }
                                }
                              }
                              else
                              {
                                LODWORD(v18) = v115 + 56;
                                if ( v115 + 56 <= v114 )
                                {
                                  v122 = 1;
                                  if ( *(_BYTE *)(v115 + v54 + 10) )
                                    *(_QWORD *)&v127 = v115 + v54 + 24;
                                  v55 = *(_BYTE **)(v115 + v54 + 16);
                                  v56 = *(_BYTE *)(v115 + v54 + 9);
                                  v121 = *(_BYTE *)(v115 + v54 + 8);
                                }
                              }
                            }
                            else
                            {
                              LODWORD(v18) = v115 + 40;
                              if ( v115 + 40 <= v114 )
                              {
                                if ( *(_BYTE *)(v115 + v54 + 10) )
                                  *(_QWORD *)&v127 = v115 + v54 + 24;
                                v55 = *(_BYTE **)(v115 + v54 + 16);
                                v121 = *(_BYTE *)(v115 + v54 + 8);
LABEL_580:
                                v56 = *(_BYTE *)(v115 + v54 + 9);
LABEL_581:
                                if ( (_QWORD)v127 )
                                {
                                  v117 = *(_BYTE *)v127;
                                  goto LABEL_584;
                                }
                                goto LABEL_588;
                              }
                            }
                            if ( v122 )
                              goto LABEL_581;
                          }
                        }
                        v59 = v125 + 1;
                        v125 = v59;
                        if ( (unsigned int)v59 >= v126 )
                          goto LABEL_581;
                      }
                    }
                    v117 = *(_BYTE *)(v54 + 72);
                    v55 = *(_BYTE **)(v54 + 32);
                    v56 = *(_BYTE *)(v54 + 11);
                    v121 = *(_BYTE *)(v54 + 4);
                    if ( v57 )
                      goto LABEL_588;
LABEL_584:
                    if ( ((v117 - 8) & 0x5D) != 0 )
                    {
LABEL_588:
                      v6 = v123;
                      break;
                    }
                    if ( *(_BYTE *)(v54 + 3) == 1 || !v55 || !v56 )
                    {
LABEL_179:
                      LOBYTE(v18) = 0;
LABEL_176:
                      if ( byte_140173441 < 0 )
                      {
                        if ( !(_BYTE)v18 )
                        {
                          v51 = 0;
                          v50 = 0;
                          v7 = 0;
                        }
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v18,
                          v54,
                          (unsigned int)&v128,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          *(_BYTE *)(v54 + 3),
                          v121,
                          v7,
                          v50,
                          v51,
                          a2);
                      }
                      goto LABEL_588;
                    }
                    v46 = *v55 & 0x7F;
                    if ( v46 == 114 || v46 == 115 )
                    {
                      v18 = (unsigned __int64)&v55[v56];
                      v47 = 0;
                      if ( (unsigned __int64)(v55 + 8) > v18 )
                      {
LABEL_175:
                        LOBYTE(v18) = 1;
                        if ( v47 )
                          goto LABEL_176;
                        goto LABEL_179;
                      }
                      v50 = v55[2];
                      v7 = v55[1] & 0xF;
                      v51 = v55[3];
                    }
                    else
                    {
                      v18 = (unsigned __int64)&v55[v56];
                      v47 = 0;
                      if ( (unsigned __int64)(v55 + 8) > v18 )
                        goto LABEL_175;
                      v48 = v55 + 13;
                      v7 = v55[2] & 0xF;
                      v49 = v56;
                      if ( (unsigned int)(unsigned __int8)v55[7] + 8 <= v56 )
                        v49 = (unsigned __int8)v55[7] + 8;
                      v18 = (unsigned __int64)&v55[v49];
                      if ( (unsigned __int64)v48 <= v18 )
                        v50 = v55[12];
                      if ( (unsigned __int64)(v55 + 14) > v18 )
                        v51 = 0;
                      else
                        v51 = *v48;
                    }
                    v47 = 1;
                    goto LABEL_175;
                  case 0x1B:
                    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
                    {
                      if ( (byte_140173442 & 0x40) != 0 )
                      {
                        v28 = *(int **)(a2 + 56);
                        if ( v28 )
                          v29 = *v28;
                        else
                          v29 = 0;
                        McTemplateK0pqd_EtwWriteTransfer(v29, v19, (unsigned int)&v128, a2, v29, *(_DWORD *)(a2 + 48));
                      }
                      break;
                    }
                    if ( (byte_140173442 & 0x20) != 0 )
                    {
                      v25 = &EventPnpRequestComplete;
                      goto LABEL_95;
                    }
                    break;
                }
              }
              IofCompleteRequest((PIRP)a2, 0);
              goto LABEL_42;
            }
LABEL_521:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              v113 = *(_QWORD *)(a1 + 24);
              ++*(_BYTE *)(a2 + 67);
              *(_QWORD *)(a2 + 184) += 72LL;
              InfoIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v113 + 8), (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          }
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InfoIoctl = RaUnitScsiPassThroughIoctl(a1, a2);
            goto LABEL_82;
          }
          goto LABEL_594;
        }
        if ( v6 <= 0x2D1CCC )
        {
          switch ( v6 )
          {
            case 0x2D1CCCu:
              InfoIoctl = RaidUnitSetLedState(a1, a2);
              goto LABEL_82;
            case 0x2D1C14u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                InfoIoctl = RaUnitHwBootPartitionGetInfoIoctl(a1, a2);
                goto LABEL_82;
              }
              goto LABEL_594;
            case 0x2D1C80u:
              InfoIoctl = RaUnitStorageEnableIdlePower(a1, a2);
              goto LABEL_82;
            case 0x2D1C84u:
              InfoIoctl = RaUnitStorageGetIdlePowerUpReason(a1, a2);
              goto LABEL_82;
            case 0x2D1C88u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                InfoIoctl = RaUnitStoragePowerActive(a1, a2);
                goto LABEL_82;
              }
              goto LABEL_594;
            case 0x2D1C8Cu:
              InfoIoctl = RaUnitStoragePowerIdle(a1, a2);
              goto LABEL_82;
            case 0x2D1C94u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                InfoIoctl = RaUnitPowerCapIoctl(a1, a2);
                goto LABEL_82;
              }
              goto LABEL_594;
            case 0x2D1CA0u:
              InfoIoctl = RaUnitStorageDiagnosticIoctl(a1, a2);
              goto LABEL_82;
            case 0x2D1CC8u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                InfoIoctl = RaUnitSmartDataIoctl(a1, a2);
                goto LABEL_82;
              }
              goto LABEL_594;
          }
          goto LABEL_37;
        }
        switch ( v6 )
        {
          case 0x2D1D00u:
            InfoIoctl = RaUnitGetContiguousPhysicalAddressIoctl(a1, a2);
            goto LABEL_82;
          case 0x2D1D04u:
            InfoIoctl = RaUnitUnlockContiguousPhysicalPagesIoctl(a1, a2);
            goto LABEL_82;
          case 0x2D1F80u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgQueryCapability(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2D280Cu:
            InfoIoctl = RaUnitTelemetryIdIoctl(a1, a2);
            goto LABEL_82;
          case 0x2D2810u:
            InfoIoctl = RaUnitGetQOSIoctl(a1, a2);
            goto LABEL_82;
        }
        if ( v6 != 2959400 && v6 != 2959404 )
          goto LABEL_37;
      }
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        InfoIoctl = RaUnitStreamsIoctl(a1, a2);
        goto LABEL_82;
      }
      goto LABEL_594;
    }
    if ( v6 > 0x2DD684 )
    {
      if ( v6 <= 0x2DDF94 )
      {
        switch ( v6 )
        {
          case 0x2DDF94u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgAssignLockingObject(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDC04u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitHwFirmwareDownloadIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDC08u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitHwFirmwareActivateIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDC0Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitHwBootPartitionDownloadIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDC10u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitHwBootPartitionActivateIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDC9Cu:
            InfoIoctl = RaUnitAttributeManagement(a1, a2);
            goto LABEL_82;
          case 0x2DDF84u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgActivateLocking(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDF88u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgRevertConfig(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDF8Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgSetSpAuthorityKey(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
        }
      }
      else
      {
        switch ( v6 )
        {
          case 0x2DDF98u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgDeassignLockingObject(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDF9Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgSetLockingObjectAuthKey(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDFA0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgEraseLockingObject(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDFA4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgSetLockingObject(a1, (PIRP)a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDFACu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgSetLockingObjectMetadata(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DDFB0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgResetState(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DE814u:
            InfoIoctl = RaUnitSetQOSIoctl(a1, a2);
            goto LABEL_82;
        }
      }
      goto LABEL_37;
    }
    if ( v6 != 3004036 )
    {
      if ( v6 > 0x2D93F4 )
      {
        switch ( v6 )
        {
          case 0x2D93FCu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitStorageSetPropertyIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2D9404u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitStorageDataSetManagementIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DD040u:
            InfoIoctl = RaidUnitTestDeviceQueue(a1, a2);
            goto LABEL_82;
          case 0x2DD044u:
            InfoIoctl = RaUnitStorageNotificationConfigureIoctl(a1, a2);
            goto LABEL_82;
          case 0x2DD04Cu:
            InfoIoctl = RaUnitSetPciLinkBandwidthIoctl(a1, a2);
            goto LABEL_82;
          case 0x2DD200u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitSetTemperatureThresholdIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2DD3C0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitProtocolCommandIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
        }
      }
      else
      {
        switch ( v6 )
        {
          case 0x2D93F4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaUnitStorageInternalSetPropertyIoctl(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2D4C1Cu:
            InfoIoctl = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
            goto LABEL_82;
          case 0x2D5000u:
            InfoIoctl = RaidAdapterStorageResetBusIoctl(*(_QWORD *)(a1 + 24), a2);
            goto LABEL_82;
          case 0x2D5014u:
            InfoIoctl = RaUnitStorageBreakReservationIoctl(a1, a2);
            goto LABEL_82;
          case 0x2D5020u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidAdapterStorageDeviceResetIoctl(*(_QWORD *)(a1 + 24), a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2D5048u:
            InfoIoctl = RaUnitStorageNotificationGetInfoIoctl(a1, a2);
            goto LABEL_82;
          case 0x2D5644u:
            InfoIoctl = RaUnitStorageDumpNotification(a1, a2);
            goto LABEL_82;
          case 0x2D5F90u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgEnumerateLockingObjects(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
          case 0x2D5FA8u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              InfoIoctl = RaidUnitStorageTcgGetLockingObjectMetadata(a1, a2);
              goto LABEL_82;
            }
            goto LABEL_594;
        }
      }
      goto LABEL_37;
    }
    goto LABEL_521;
  }
LABEL_45:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      a1,
      a2,
      v6,
      inserted);
  }
  if ( !v7 )
  {
    v20 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v21 = *(_DWORD *)(v20 + *(_QWORD *)(a1 + 40));
    while ( (v21 & 1) == 0 )
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + *(_QWORD *)(a1 + 40)), v21 - 2, v21);
      if ( v22 == v21 )
        return inserted;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return inserted;
}
