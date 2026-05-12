/*
 * XREFs of NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14001EBF0 (StorageGetSystemFeatureSupportIoctl.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceQueryFinalRemovePendingIoctl @ 0x14004D4FC (NvmeNamespaceQueryFinalRemovePendingIoctl.c)
 *     NvmeNamespaceReleaseRemoveLock @ 0x14004EB30 (NvmeNamespaceReleaseRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     NvmeNamespaceAttemptQueueIrpForDfxPowerDown @ 0x14005C540 (NvmeNamespaceAttemptQueueIrpForDfxPowerDown.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeNamespaceAttributeManagementIoctl @ 0x1401013DC (NvmeNamespaceAttributeManagementIoctl.c)
 *     NvmeNamespaceEnableIdlePower @ 0x140104154 (NvmeNamespaceEnableIdlePower.c)
 *     NvmeNamespaceFirmwareActivateIoctl @ 0x1401059C4 (NvmeNamespaceFirmwareActivateIoctl.c)
 *     NvmeNamespaceFirmwareDownloadIoctl @ 0x140105D80 (NvmeNamespaceFirmwareDownloadIoctl.c)
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x14010613C (NvmeNamespaceFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceGetQOSIoctl @ 0x140106E38 (NvmeNamespaceGetQOSIoctl.c)
 *     NvmeNamespaceInternalQueryPropertyIoctl @ 0x1401072B8 (NvmeNamespaceInternalQueryPropertyIoctl.c)
 *     NvmeNamespacePersistentReserveInIoctl @ 0x140107864 (NvmeNamespacePersistentReserveInIoctl.c)
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x140107C84 (NvmeNamespacePersistentReserveOutIoctl.c)
 *     NvmeNamespacePowerCapIoctl @ 0x14010819C (NvmeNamespacePowerCapIoctl.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010C518 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140112EC4 (NvmeNamespaceSetQOSIoctl.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140115190 (NvmeNamespaceTelemetryIdIoctl.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x1401A2794 (NvmeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A3FCC (NvmeNamespaceDataSetManagementIoctl.c)
 *     NvmeNamespaceDiskGetCacheInformationIoctl @ 0x1401A4FAC (NvmeNamespaceDiskGetCacheInformationIoctl.c)
 *     NvmeNamespaceDiskIsWritableIoctl @ 0x1401A53BC (NvmeNamespaceDiskIsWritableIoctl.c)
 *     NvmeNamespaceDiskSetCacheInformationIoctl @ 0x1401A577C (NvmeNamespaceDiskSetCacheInformationIoctl.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A5B5C (NvmeNamespaceDiskVerifyIoctl.c)
 *     NvmeNamespaceGetDeviceInternalLogIoctl @ 0x1401A618C (NvmeNamespaceGetDeviceInternalLogIoctl.c)
 *     NvmeNamespaceManageBypassIO @ 0x1401A6A28 (NvmeNamespaceManageBypassIO.c)
 *     NvmeNamespaceScsiGetAddressIoctl @ 0x1401A9514 (NvmeNamespaceScsiGetAddressIoctl.c)
 *     NvmeNamespaceSetLedState @ 0x1401A9908 (NvmeNamespaceSetLedState.c)
 *     NvmeNamespaceStorageCheckVerifyIoctl @ 0x1401AA738 (NvmeNamespaceStorageCheckVerifyIoctl.c)
 *     NvmeNamespaceStorageDumpNotification @ 0x1401AAAFC (NvmeNamespaceStorageDumpNotification.c)
 *     NvmeNamespaceStorageNotificationGetInfoIoctl @ 0x1401AAB88 (NvmeNamespaceStorageNotificationGetInfoIoctl.c)
 *     NvmeNamespaceStorageSetPropertyIoctl @ 0x1401AE840 (NvmeNamespaceStorageSetPropertyIoctl.c)
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 */

__int64 __fastcall NvmeNamespaceDeviceControlIrp(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  unsigned int LowPart; // esi
  __int64 v7; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _IO_STACK_LOCATION *v11; // rdx
  int v12; // eax
  int *Information; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 SecurityContext; // rdx
  _BYTE *v16; // r9
  unsigned __int8 v17; // r14
  char v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r15
  int v22; // eax
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r11
  unsigned int v33; // eax
  int v34; // eax
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // esi
  unsigned int v41; // esi
  unsigned int v42; // esi
  unsigned int v43; // esi
  unsigned int v44; // esi
  unsigned int v45; // esi
  unsigned int v46; // esi
  unsigned int v47; // esi
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned int InfoIoctl; // eax
  unsigned int v51; // esi
  unsigned int v52; // esi
  unsigned int v53; // esi
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned __int64 v58; // rcx
  _IO_STACK_LOCATION *v59; // rdx
  unsigned int *v60; // rcx
  __int64 v61; // rcx
  const EVENT_DESCRIPTOR *v62; // rdx
  __int64 v63; // rdx
  _BYTE *v64; // r9
  unsigned __int8 v65; // r11
  char v66; // r15
  char v67; // r12
  char v68; // r10
  int v69; // eax
  char *v70; // r13
  unsigned int v71; // ecx
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 v74; // r8
  int v75; // ecx
  char v76; // cl
  char v77; // r13
  char v78; // r8
  char v79; // al
  char *v80; // r10
  unsigned int v81; // eax
  unsigned int v82; // esi
  unsigned int v83; // esi
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // esi
  unsigned int v87; // esi
  unsigned int v88; // esi
  unsigned int v89; // esi
  unsigned int v90; // esi
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned int v93; // esi
  unsigned int v94; // esi
  unsigned int v95; // esi
  unsigned int *v96; // rax
  char *v97; // r13
  unsigned int v98; // ecx
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // r8
  int v102; // ecx
  int v103; // ecx
  unsigned __int64 v104; // rcx
  _IO_STACK_LOCATION *v105; // rdx
  unsigned int *v106; // rcx
  __int64 v107; // rcx
  const EVENT_DESCRIPTOR *v108; // rdx
  __int64 v109; // rdx
  _BYTE *v110; // r9
  unsigned __int8 v111; // r11
  char v112; // r15
  char v113; // r12
  char v114; // r10
  char *v115; // r13
  unsigned int v116; // ecx
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // r8
  int v120; // ecx
  char v121; // cl
  char v122; // r13
  char v123; // r8
  char v124; // al
  char *v125; // r10
  unsigned int v126; // eax
  __int64 v127; // [rsp+20h] [rbp-69h]
  __int64 v128; // [rsp+28h] [rbp-61h]
  __int64 v129; // [rsp+30h] [rbp-59h]
  char v130; // [rsp+60h] [rbp-29h]
  char v131; // [rsp+60h] [rbp-29h]
  char v132; // [rsp+60h] [rbp-29h]
  char v133; // [rsp+60h] [rbp-29h]
  char v134; // [rsp+61h] [rbp-28h] BYREF
  char v135; // [rsp+62h] [rbp-27h]
  char v136; // [rsp+63h] [rbp-26h]
  unsigned int v137; // [rsp+64h] [rbp-25h]
  unsigned int v138; // [rsp+68h] [rbp-21h]
  GUID v139; // [rsp+70h] [rbp-19h] BYREF
  GUID v140; // [rsp+80h] [rbp-9h] BYREF
  GUID v141; // [rsp+90h] [rbp+7h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v134 = 1;
  v141 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v141);
    if ( (byte_140173442 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        v7,
        &EventIOCTL,
        &v141,
        Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
  }
  if ( LowPart == 2955532 )
    return NvmeNamespaceQueryFinalRemovePendingIoctl(Context, (__int64)Irp);
  if ( (*(_BYTE *)(Context + 112) & 2) == 0 )
  {
    v9 = StorEtwLoggingEnabled == 0;
    v137 = -1073741808;
    Irp->IoStatus.Status = -1073741808;
    Irp->IoStatus.Information = 0LL;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    if ( v9 )
      goto LABEL_96;
    v139 = 0LL;
    IoGetActivityIdIrp(Irp, &v139);
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v11->MajorFunction != 14 )
    {
      v12 = v11->MajorFunction - 15;
      if ( v11->MajorFunction != 15 )
      {
LABEL_10:
        if ( v12 == 12 )
        {
          if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              Information = (int *)Irp->IoStatus.Information;
              if ( Information )
                v3 = *Information;
              LODWORD(v128) = Irp->IoStatus.Status;
              LODWORD(v127) = v3;
              McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v139, Irp, v127, v128);
            }
            goto LABEL_96;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v14 = &EventPnpRequestComplete;
LABEL_95:
            LODWORD(v127) = Irp->IoStatus.Status;
            McTemplateK0pd_EtwWriteTransfer(v10, v14, &v139, Irp, v127);
            goto LABEL_96;
          }
        }
        goto LABEL_96;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_96;
      SecurityContext = (__int64)v11->Parameters.Create.SecurityContext;
      v16 = 0LL;
      v135 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = *(unsigned __int8 *)(SecurityContext + 2);
      if ( (_BYTE)v22 == 40 )
      {
        v23 = 0LL;
        v130 = 0;
        if ( !*(_DWORD *)(SecurityContext + 20) )
        {
          v24 = 0;
          v138 = *(_DWORD *)(SecurityContext + 56);
          if ( v138 )
          {
            while ( 1 )
            {
              v10 = *(unsigned int *)(SecurityContext + 4LL * v24 + 120);
              if ( (unsigned int)v10 >= 0x80 )
              {
                v25 = *(unsigned int *)(SecurityContext + 16);
                if ( (unsigned int)v10 < (unsigned int)v25 )
                {
                  v26 = (unsigned int)v10;
                  v27 = *(_DWORD *)(v10 + SecurityContext) - 64;
                  if ( v27 )
                  {
                    v10 = (unsigned int)(v27 - 1);
                    if ( (_DWORD)v10 )
                    {
                      if ( (_DWORD)v10 == 1 )
                      {
                        v10 = v26 + 40;
                        if ( v26 + 40 <= v25 )
                          goto LABEL_29;
                      }
                    }
                    else
                    {
                      v10 = v26 + 56;
                      if ( v26 + 56 <= v25 )
                      {
                        v130 = 1;
                        if ( *(_BYTE *)(v26 + SecurityContext + 10) )
                          v23 = (char *)(v26 + SecurityContext + 24);
                        v16 = *(_BYTE **)(v26 + SecurityContext + 16);
                        v17 = *(_BYTE *)(v26 + SecurityContext + 9);
                        v135 = *(_BYTE *)(v26 + SecurityContext + 8);
                      }
                    }
                  }
                  else
                  {
                    v10 = v26 + 40;
                    if ( v26 + 40 <= v25 )
                      goto LABEL_43;
                  }
                  if ( v130 )
                    goto LABEL_40;
                }
              }
              if ( ++v24 >= v138 )
                goto LABEL_40;
            }
          }
        }
        goto LABEL_96;
      }
      goto LABEL_46;
    }
    goto LABEL_93;
  }
  v34 = NvmeNamespaceAcquireRemoveLock(Context, (__int64)Irp);
  v137 = v34;
  if ( v34 < 0 )
  {
    v9 = StorEtwLoggingEnabled == 0;
    Irp->IoStatus.Information = 0LL;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    Irp->IoStatus.Status = v34;
    if ( v9 )
      goto LABEL_96;
    v139 = 0LL;
    IoGetActivityIdIrp(Irp, &v139);
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v11->MajorFunction != 14 )
    {
      v12 = v11->MajorFunction - 15;
      if ( v11->MajorFunction != 15 )
        goto LABEL_10;
      if ( byte_140173441 >= 0 )
        goto LABEL_96;
      SecurityContext = (__int64)v11->Parameters.Create.SecurityContext;
      v16 = 0LL;
      v135 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = *(unsigned __int8 *)(SecurityContext + 2);
      if ( (_BYTE)v22 == 40 )
      {
        v23 = 0LL;
        v131 = 0;
        if ( *(_DWORD *)(SecurityContext + 20) )
          goto LABEL_96;
        v35 = 0;
        v138 = *(_DWORD *)(SecurityContext + 56);
        if ( !v138 )
          goto LABEL_96;
        do
        {
          v10 = *(unsigned int *)(SecurityContext + 4LL * v35 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v36 = *(unsigned int *)(SecurityContext + 16);
            if ( (unsigned int)v10 < (unsigned int)v36 )
            {
              v26 = (unsigned int)v10;
              v37 = *(_DWORD *)(v10 + SecurityContext) - 64;
              if ( v37 )
              {
                v10 = (unsigned int)(v37 - 1);
                if ( (_DWORD)v10 )
                {
                  if ( (_DWORD)v10 == 1 )
                  {
                    v10 = v26 + 40;
                    if ( v26 + 40 <= v36 )
                    {
LABEL_29:
                      if ( *(_DWORD *)(v26 + SecurityContext + 12) )
                        v23 = (char *)(v26 + SecurityContext + 32);
                      v16 = *(_BYTE **)(v26 + SecurityContext + 24);
LABEL_32:
                      v28 = *(_BYTE *)(v26 + SecurityContext + 8);
                      v17 = *(_BYTE *)(v26 + SecurityContext + 9);
                      goto LABEL_41;
                    }
                  }
                }
                else
                {
                  v10 = v26 + 56;
                  if ( v26 + 56 <= v36 )
                  {
                    v131 = 1;
                    if ( *(_BYTE *)(v26 + SecurityContext + 10) )
                      v23 = (char *)(v26 + SecurityContext + 24);
                    v16 = *(_BYTE **)(v26 + SecurityContext + 16);
                    v17 = *(_BYTE *)(v26 + SecurityContext + 9);
                    v135 = *(_BYTE *)(v26 + SecurityContext + 8);
                  }
                }
              }
              else
              {
                v10 = v26 + 40;
                if ( v26 + 40 <= v36 )
                {
LABEL_43:
                  if ( *(_BYTE *)(v26 + SecurityContext + 10) )
                    v23 = (char *)(v26 + SecurityContext + 24);
                  v16 = *(_BYTE **)(v26 + SecurityContext + 16);
                  goto LABEL_32;
                }
              }
              if ( v131 )
                break;
            }
          }
          ++v35;
        }
        while ( v35 < v138 );
LABEL_40:
        v28 = v135;
LABEL_41:
        if ( !v23 )
          goto LABEL_96;
        v29 = *v23;
        v21 = 0;
        goto LABEL_47;
      }
LABEL_46:
      v28 = *(_BYTE *)(SecurityContext + 4);
      v17 = *(_BYTE *)(SecurityContext + 11);
      v16 = *(_BYTE **)(SecurityContext + 32);
      v29 = *(_BYTE *)(SecurityContext + 72);
      if ( v22 )
        goto LABEL_96;
LABEL_47:
      LOBYTE(v10) = v29 - 8;
      if ( (v10 & 0x5D) != 0 )
        goto LABEL_96;
      v30 = *(_BYTE *)(SecurityContext + 3);
      if ( v30 == 1 || !v16 || !v17 )
      {
LABEL_89:
        if ( byte_140173441 < 0 )
        {
          if ( !v21 )
          {
            v20 = 0;
            v18 = 0;
            v19 = 0;
          }
          LOBYTE(v129) = v28;
          LOBYTE(v128) = v30;
          LODWORD(v127) = Irp->IoStatus.Status;
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, SecurityContext, &v139, Irp, v127, v128, v129, v18, v19, v20, Irp);
        }
        goto LABEL_96;
      }
      v31 = *v16 & 0x7F;
      if ( v31 == 114 || v31 == 115 )
      {
        v10 = (unsigned __int64)&v16[v17];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v16 + 8) > v10 )
          goto LABEL_87;
        v20 = v16[3];
        v18 = v16[1] & 0xF;
        v19 = v16[2];
      }
      else
      {
        v10 = (unsigned __int64)&v16[v17];
        LOBYTE(SecurityContext) = 0;
        if ( (unsigned __int64)(v16 + 8) > v10 )
          goto LABEL_87;
        v32 = v16 + 13;
        v18 = v16[2] & 0xF;
        v33 = v17;
        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
          v33 = (unsigned __int8)v16[7] + 8;
        v10 = (unsigned __int64)&v16[v33];
        if ( (unsigned __int64)v32 <= v10 )
          v19 = v16[12];
        if ( (unsigned __int64)(v16 + 14) > v10 )
          v20 = 0;
        else
          v20 = *v32;
      }
      LOBYTE(SecurityContext) = 1;
LABEL_87:
      if ( (_BYTE)SecurityContext )
        v21 = 1;
      goto LABEL_89;
    }
LABEL_93:
    if ( (byte_140173442 & 8) != 0 )
    {
      v14 = &EventNonReadWriteRequestComplete;
      goto LABEL_95;
    }
LABEL_96:
    IofCompleteRequest(Irp, 0);
    return v137;
  }
  if ( RaIsDeviceDFxPoweredDown(*(_QWORD *)(Context + 8))
    && NvmeNamespaceAttemptQueueIrpForDfxPowerDown(Context, (__int64)Irp, LowPart) )
  {
    v40 = 259;
    goto LABEL_351;
  }
  if ( LowPart > 0x2D4800 )
  {
    if ( LowPart <= 0x2DD03C )
    {
      if ( LowPart != 3002428 )
      {
        v82 = LowPart - 2968604;
        if ( v82 )
        {
          v83 = v82 - 1020;
          if ( v83 )
          {
            v84 = v83 - 48;
            if ( v84 )
            {
              v85 = v84 - 1532;
              if ( v85 )
              {
                v86 = v85 - 15800;
                if ( !v86 )
                {
                  v48 = NvmeNamespaceStorageSetPropertyIoctl(Context, (__int64)Irp, &v134);
                  goto LABEL_349;
                }
                v87 = v86 - 8;
                if ( v87 )
                {
                  v88 = v87 - 572;
                  if ( v88 )
                  {
                    if ( v88 != 14812 )
                      goto LABEL_237;
                    InfoIoctl = NvmeNamespacePersistentReserveOutIoctl(Context, (__int64)Irp);
                  }
                  else
                  {
                    InfoIoctl = NvmeNamespaceReinitializeMediaIoctl(Context, Irp);
                  }
                }
                else
                {
                  InfoIoctl = NvmeNamespaceDataSetManagementIoctl(Context, (__int64)Irp);
                }
              }
              else
              {
                InfoIoctl = NvmeNamespaceStorageDumpNotification(Context, Irp);
              }
            }
            else
            {
              InfoIoctl = NvmeNamespaceStorageNotificationGetInfoIoctl(Context, (__int64)Irp);
            }
          }
          else
          {
            InfoIoctl = NvmeNamespacePersistentReserveInIoctl(Context, (__int64)Irp);
          }
        }
        else
        {
          InfoIoctl = StorageGetSystemFeatureSupportIoctl(Irp);
        }
        goto LABEL_114;
      }
      Irp->IoStatus.Information = 0LL;
      goto LABEL_228;
    }
    v89 = LowPart - 3002436;
    if ( !v89 )
    {
      v48 = NvmeNamespaceStorageNotificationGetInfoIoctl(Context, (__int64)Irp);
      goto LABEL_349;
    }
    v90 = v89 - 12;
    if ( !v90 )
    {
      InfoIoctl = NvmeAdapterMiniportPassthroughRequestIoctl(
                    *(_QWORD *)(*(_QWORD *)(Context + 16) + 128LL),
                    Context,
                    (__int64)Irp);
      goto LABEL_114;
    }
    v91 = v90 - 432;
    if ( v91 )
    {
      v92 = v91 - 448;
      if ( !v92 )
      {
        v48 = NvmeNamespaceStorageProtocolCommandIoctl(Context, Irp, &v134);
        goto LABEL_349;
      }
      v93 = v92 - 2116;
      if ( !v93 )
      {
        v48 = NvmeNamespaceFirmwareDownloadIoctl(Context, (__int64)Irp, &v134);
        goto LABEL_349;
      }
      v94 = v93 - 4;
      if ( !v94 )
      {
        v48 = NvmeNamespaceFirmwareActivateIoctl(Context, (__int64)Irp, v39, &v134);
        goto LABEL_349;
      }
      v95 = v94 - 148;
      if ( v95 )
      {
        if ( v95 != 2936 )
          goto LABEL_237;
        InfoIoctl = NvmeNamespaceSetQOSIoctl(Context, (__int64)Irp);
      }
      else
      {
        InfoIoctl = NvmeNamespaceAttributeManagementIoctl(Context, (__int64)Irp);
      }
LABEL_114:
      v40 = InfoIoctl;
      goto LABEL_351;
    }
    v103 = *(_DWORD *)(*(_QWORD *)(Context + 16) + 136LL);
    Irp->IoStatus.Information = 0LL;
    if ( (v103 & 2) == 0 )
    {
LABEL_228:
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      InfoIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(Context + 16) + 128LL) + 8LL), Irp);
      goto LABEL_114;
    }
    v9 = StorEtwLoggingEnabled == 0;
    v40 = -1073741637;
    Irp->IoStatus.Status = -1073741637;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    if ( v9 )
      goto LABEL_346;
    v140 = 0LL;
    IoGetActivityIdIrp(Irp, &v140);
    v105 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v105->MajorFunction == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_346;
      v108 = &EventNonReadWriteRequestComplete;
      goto LABEL_345;
    }
    if ( v105->MajorFunction != 15 )
    {
      if ( v105->MajorFunction != 27 )
        goto LABEL_346;
      if ( v105->MinorFunction == 7 && !v105->Parameters.Read.Length )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v106 = (unsigned int *)Irp->IoStatus.Information;
          if ( v106 )
            v107 = *v106;
          else
            v107 = 0LL;
          LODWORD(v128) = Irp->IoStatus.Status;
          LODWORD(v127) = v107;
          McTemplateK0pqd_EtwWriteTransfer(v107, (__int64)v105, &v140, Irp, v127, v128);
        }
        goto LABEL_346;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_346;
      v108 = &EventPnpRequestComplete;
LABEL_345:
      LODWORD(v127) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v104, v108, &v140, Irp, v127);
      goto LABEL_346;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_346;
    v109 = (__int64)v105->Parameters.Create.SecurityContext;
    v110 = 0LL;
    v133 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    if ( *(_BYTE *)(v109 + 2) == 40 )
    {
      v115 = 0LL;
      v136 = 0;
      if ( *(_DWORD *)(v109 + 20) )
        goto LABEL_346;
      v116 = *(_DWORD *)(v109 + 56);
      v117 = 0LL;
      v138 = 0;
      v139.Data1 = v116;
      if ( !v116 )
        goto LABEL_346;
      while ( 1 )
      {
        v104 = *(unsigned int *)(v109 + 4 * v117 + 120);
        if ( (unsigned int)v104 >= 0x80 )
        {
          v118 = *(unsigned int *)(v109 + 16);
          if ( (unsigned int)v104 < (unsigned int)v118 )
          {
            v119 = (unsigned int)v104;
            v120 = *(_DWORD *)(v109 + v104) - 64;
            if ( v120 )
            {
              v104 = (unsigned int)(v120 - 1);
              if ( (_DWORD)v104 )
              {
                if ( (_DWORD)v104 == 1 )
                {
                  v104 = v119 + 40;
                  if ( v119 + 40 <= v118 )
                  {
                    if ( *(_DWORD *)(v109 + v119 + 12) )
                      v115 = (char *)(v119 + v109 + 32);
                    v110 = *(_BYTE **)(v109 + v119 + 24);
LABEL_316:
                    v111 = *(_BYTE *)(v109 + v119 + 9);
                    v133 = *(_BYTE *)(v109 + v119 + 8);
LABEL_317:
                    if ( v115 )
                    {
                      v121 = *v115;
                      v122 = v133;
                      goto LABEL_320;
                    }
                    goto LABEL_346;
                  }
                }
              }
              else
              {
                v104 = v119 + 56;
                if ( v119 + 56 <= v118 )
                {
                  v136 = 1;
                  if ( *(_BYTE *)(v109 + v119 + 10) )
                    v115 = (char *)(v119 + v109 + 24);
                  v110 = *(_BYTE **)(v109 + v119 + 16);
                  v111 = *(_BYTE *)(v109 + v119 + 9);
                  v133 = *(_BYTE *)(v109 + v119 + 8);
                }
              }
            }
            else
            {
              v104 = v119 + 40;
              if ( v119 + 40 <= v118 )
              {
                if ( *(_BYTE *)(v109 + v119 + 10) )
                  v115 = (char *)(v119 + v109 + 24);
                v110 = *(_BYTE **)(v109 + v119 + 16);
                goto LABEL_316;
              }
            }
            if ( v136 )
              goto LABEL_317;
          }
        }
        v117 = v138 + 1;
        v138 = v117;
        if ( (unsigned int)v117 >= v139.Data1 )
          goto LABEL_317;
      }
    }
    v121 = *(_BYTE *)(v109 + 72);
    v110 = *(_BYTE **)(v109 + 32);
    v111 = *(_BYTE *)(v109 + 11);
    v122 = *(_BYTE *)(v109 + 4);
    if ( *(_BYTE *)(v109 + 2) )
      goto LABEL_346;
LABEL_320:
    if ( ((v121 - 8) & 0x5D) != 0 )
    {
LABEL_346:
      IofCompleteRequest(Irp, 0);
      goto LABEL_350;
    }
    v123 = *(_BYTE *)(v109 + 3);
    if ( v123 == 1 || !v110 || !v111 )
    {
LABEL_338:
      LOBYTE(v104) = 0;
LABEL_339:
      if ( byte_140173441 < 0 )
      {
        if ( !(_BYTE)v104 )
        {
          v114 = 0;
          v113 = 0;
          v112 = 0;
        }
        LOBYTE(v129) = v122;
        LOBYTE(v128) = v123;
        LODWORD(v127) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v104, v109, &v140, Irp, v127, v128, v129, v112, v113, v114, Irp);
      }
      goto LABEL_346;
    }
    v124 = *v110 & 0x7F;
    if ( v124 == 114 || v124 == 115 )
    {
      v104 = (unsigned __int64)&v110[v111];
      LOBYTE(v109) = 0;
      if ( (unsigned __int64)(v110 + 8) > v104 )
        goto LABEL_337;
      v113 = v110[2];
      v112 = v110[1] & 0xF;
      v114 = v110[3];
    }
    else
    {
      v104 = (unsigned __int64)&v110[v111];
      LOBYTE(v109) = 0;
      if ( (unsigned __int64)(v110 + 8) > v104 )
        goto LABEL_337;
      v125 = v110 + 13;
      v112 = v110[2] & 0xF;
      v126 = v111;
      if ( (unsigned int)(unsigned __int8)v110[7] + 8 <= v111 )
        v126 = (unsigned __int8)v110[7] + 8;
      v104 = (unsigned __int64)&v110[v126];
      if ( (unsigned __int64)v125 <= v104 )
        v113 = v110[12];
      if ( (unsigned __int64)(v110 + 14) > v104 )
        v114 = 0;
      else
        v114 = *v125;
    }
    LOBYTE(v109) = 1;
LABEL_337:
    LOBYTE(v104) = 1;
    if ( (_BYTE)v109 )
      goto LABEL_339;
    goto LABEL_338;
  }
  if ( LowPart == 2967552 )
    goto LABEL_208;
  if ( LowPart > 0x2D1400 )
  {
    v51 = LowPart - 2954827;
    if ( v51 )
    {
      v52 = v51 - 1461;
      if ( !v52 )
      {
        v48 = NvmeNamespaceFirmwareGetInfoIoctl(Context, Irp, &v134);
        goto LABEL_349;
      }
      v53 = v52 - 128;
      if ( v53 )
      {
        v54 = v53 - 20;
        if ( v54 )
        {
          v55 = v54 - 48;
          if ( v55 )
          {
            v56 = v55 - 8;
            if ( v56 )
            {
              v57 = v56 - 2880;
              if ( v57 )
              {
                if ( v57 != 4 )
                  goto LABEL_237;
                InfoIoctl = NvmeNamespaceGetQOSIoctl(Context, (__int64)Irp);
              }
              else
              {
                InfoIoctl = NvmeNamespaceTelemetryIdIoctl(Context, (__int64)Irp);
              }
            }
            else
            {
              if ( (*(_BYTE *)(*(_QWORD *)(Context + 16) + 136LL) & 2) != 0 )
              {
                v9 = StorEtwLoggingEnabled == 0;
                v40 = -1073741637;
                Irp->IoStatus.Status = -1073741637;
                Irp->IoStatus.Information = 0LL;
                *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
                if ( v9 )
                  goto LABEL_199;
                v140 = 0LL;
                IoGetActivityIdIrp(Irp, &v140);
                v59 = Irp->Tail.Overlay.CurrentStackLocation;
                if ( v59->MajorFunction != 14 )
                {
                  if ( v59->MajorFunction != 15 )
                  {
                    if ( v59->MajorFunction != 27 )
                      goto LABEL_199;
                    if ( v59->MinorFunction == 7 && !v59->Parameters.Read.Length )
                    {
                      if ( (byte_140173442 & 0x40) == 0 )
                        goto LABEL_199;
                      v60 = (unsigned int *)Irp->IoStatus.Information;
                      if ( v60 )
                      {
                        v61 = *v60;
LABEL_142:
                        LODWORD(v128) = Irp->IoStatus.Status;
                        LODWORD(v127) = v61;
                        McTemplateK0pqd_EtwWriteTransfer(v61, (__int64)v59, &v140, Irp, v127, v128);
                        goto LABEL_199;
                      }
LABEL_141:
                      v61 = 0LL;
                      goto LABEL_142;
                    }
                    goto LABEL_143;
                  }
                  if ( byte_140173441 >= 0 )
                    goto LABEL_199;
                  v63 = (__int64)v59->Parameters.Create.SecurityContext;
                  v64 = 0LL;
                  v134 = 0;
                  v65 = 0;
                  v66 = 0;
                  v67 = 0;
                  v68 = 0;
                  v69 = *(unsigned __int8 *)(v63 + 2);
                  if ( (_BYTE)v69 == 40 )
                  {
                    v70 = 0LL;
                    v135 = 0;
                    if ( *(_DWORD *)(v63 + 20) )
                      goto LABEL_199;
                    v71 = *(_DWORD *)(v63 + 56);
                    v72 = 0LL;
                    v138 = 0;
                    v139.Data1 = v71;
                    if ( !v71 )
                      goto LABEL_199;
                    while ( 1 )
                    {
                      v58 = *(unsigned int *)(v63 + 4 * v72 + 120);
                      if ( (unsigned int)v58 >= 0x80 )
                      {
                        v73 = *(unsigned int *)(v63 + 16);
                        if ( (unsigned int)v58 < (unsigned int)v73 )
                        {
                          v74 = (unsigned int)v58;
                          v75 = *(_DWORD *)(v63 + v58) - 64;
                          if ( v75 )
                          {
                            v58 = (unsigned int)(v75 - 1);
                            if ( (_DWORD)v58 )
                            {
                              if ( (_DWORD)v58 == 1 )
                              {
                                v58 = v74 + 40;
                                if ( v74 + 40 <= v73 )
                                {
                                  if ( *(_DWORD *)(v63 + v74 + 12) )
                                    v70 = (char *)(v74 + v63 + 32);
                                  v64 = *(_BYTE **)(v63 + v74 + 24);
LABEL_169:
                                  v65 = *(_BYTE *)(v63 + v74 + 9);
                                  v134 = *(_BYTE *)(v63 + v74 + 8);
LABEL_170:
                                  if ( v70 )
                                  {
                                    v76 = *v70;
                                    v77 = v134;
                                    goto LABEL_173;
                                  }
                                  goto LABEL_199;
                                }
                              }
                            }
                            else
                            {
                              v58 = v74 + 56;
                              if ( v74 + 56 <= v73 )
                              {
                                v135 = 1;
                                if ( *(_BYTE *)(v63 + v74 + 10) )
                                  v70 = (char *)(v74 + v63 + 24);
                                v64 = *(_BYTE **)(v63 + v74 + 16);
                                v65 = *(_BYTE *)(v63 + v74 + 9);
                                v134 = *(_BYTE *)(v63 + v74 + 8);
                              }
                            }
                          }
                          else
                          {
                            v58 = v74 + 40;
                            if ( v74 + 40 <= v73 )
                            {
                              if ( *(_BYTE *)(v63 + v74 + 10) )
                                v70 = (char *)(v74 + v63 + 24);
                              v64 = *(_BYTE **)(v63 + v74 + 16);
                              goto LABEL_169;
                            }
                          }
                          if ( v135 )
                            goto LABEL_170;
                        }
                      }
                      v72 = v138 + 1;
                      v138 = v72;
                      if ( (unsigned int)v72 >= v139.Data1 )
                        goto LABEL_170;
                    }
                  }
LABEL_172:
                  v77 = *(_BYTE *)(v63 + 4);
                  v65 = *(_BYTE *)(v63 + 11);
                  v64 = *(_BYTE **)(v63 + 32);
                  v76 = *(_BYTE *)(v63 + 72);
                  if ( !v69 )
                    goto LABEL_173;
                  goto LABEL_199;
                }
LABEL_196:
                if ( (byte_140173442 & 8) == 0 )
                  goto LABEL_199;
                v62 = &EventNonReadWriteRequestComplete;
                goto LABEL_198;
              }
              InfoIoctl = NvmeNamespaceSetLedState(Context, (__int64)Irp);
            }
          }
          else
          {
            InfoIoctl = NvmeNamespaceGetDeviceInternalLogIoctl(Context, (__int64)Irp);
          }
        }
        else
        {
          InfoIoctl = NvmeNamespacePowerCapIoctl(Context, (__int64)Irp);
        }
      }
      else
      {
        InfoIoctl = NvmeNamespaceEnableIdlePower(Context, (__int64)Irp);
      }
    }
    else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 16) + 1048LL) + 24LL) & 0x40000000) != 0 )
    {
      InfoIoctl = NvmeDumpStorageGetDumpInfoIoctl(Context, (__int64)Irp);
    }
    else
    {
      InfoIoctl = NvmeNativeDumpStorageGetDumpInfoIoctl(Context, (__int64)Irp);
    }
    goto LABEL_114;
  }
  if ( LowPart == 2954240 )
  {
    v48 = NvmeNamespaceStorageQueryPropertyIoctl(Context, (__int64)Irp, &v134);
    goto LABEL_349;
  }
  v41 = LowPart - 266264;
  if ( !v41 )
  {
    InfoIoctl = NvmeNamespaceScsiGetAddressIoctl(Context, (__int64)Irp);
    goto LABEL_114;
  }
  v42 = v41 - 192508;
  if ( !v42 )
  {
    InfoIoctl = NvmeNamespaceDiskVerifyIoctl(Context, (__int64)Irp);
    goto LABEL_114;
  }
  v43 = v42 - 16;
  if ( !v43 )
  {
    InfoIoctl = NvmeNamespaceDiskIsWritableIoctl(Context, (__int64)Irp);
    goto LABEL_114;
  }
  v44 = v43 - 16560;
  if ( !v44 )
  {
    InfoIoctl = NvmeNamespaceDiskGetCacheInformationIoctl(Context, (__int64)Irp);
    goto LABEL_114;
  }
  v45 = v44 - 32772;
  if ( !v45 )
  {
    InfoIoctl = NvmeNamespaceDiskSetCacheInformationIoctl(Context, (__int64)Irp);
    goto LABEL_114;
  }
  v46 = v45 - 2443048;
  if ( !v46 )
  {
LABEL_208:
    InfoIoctl = NvmeNamespaceStorageCheckVerifyIoctl(v38, (__int64)Irp);
    goto LABEL_114;
  }
  v47 = v46 - 192;
  if ( !v47 )
  {
    InfoIoctl = NvmeNamespaceManageBypassIO(Context, (__int64)Irp);
    goto LABEL_114;
  }
  if ( v47 == 2872 )
  {
    v48 = NvmeNamespaceInternalQueryPropertyIoctl(Context, (__int64)Irp, &v134);
LABEL_349:
    v40 = v48;
LABEL_350:
    if ( v134 )
      goto LABEL_351;
    goto LABEL_352;
  }
LABEL_237:
  v9 = StorEtwLoggingEnabled == 0;
  v40 = -1073741637;
  Irp->IoStatus.Status = -1073741637;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( v9 )
    goto LABEL_199;
  v140 = 0LL;
  IoGetActivityIdIrp(Irp, &v140);
  v59 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v59->MajorFunction == 14 )
    goto LABEL_196;
  if ( v59->MajorFunction != 15 )
  {
    if ( v59->MajorFunction != 27 )
      goto LABEL_199;
    if ( v59->MinorFunction == 7 && !v59->Parameters.Read.Length )
    {
      if ( (byte_140173442 & 0x40) == 0 )
        goto LABEL_199;
      v96 = (unsigned int *)Irp->IoStatus.Information;
      if ( v96 )
      {
        v61 = *v96;
        goto LABEL_142;
      }
      goto LABEL_141;
    }
LABEL_143:
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_199;
    v62 = &EventPnpRequestComplete;
LABEL_198:
    LODWORD(v127) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v58, v62, &v140, Irp, v127);
    goto LABEL_199;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_199;
  v63 = (__int64)v59->Parameters.Create.SecurityContext;
  v64 = 0LL;
  v132 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = *(unsigned __int8 *)(v63 + 2);
  if ( (_BYTE)v69 != 40 )
    goto LABEL_172;
  v97 = 0LL;
  v135 = 0;
  if ( *(_DWORD *)(v63 + 20) )
    goto LABEL_199;
  v98 = *(_DWORD *)(v63 + 56);
  v99 = 0LL;
  v138 = 0;
  v139.Data1 = v98;
  if ( !v98 )
    goto LABEL_199;
  while ( 1 )
  {
    v58 = *(unsigned int *)(v63 + 4 * v99 + 120);
    if ( (unsigned int)v58 >= 0x80 )
    {
      v100 = *(unsigned int *)(v63 + 16);
      if ( (unsigned int)v58 < (unsigned int)v100 )
        break;
    }
LABEL_265:
    v99 = v138 + 1;
    v138 = v99;
    if ( (unsigned int)v99 >= v139.Data1 )
      goto LABEL_271;
  }
  v101 = (unsigned int)v58;
  v102 = *(_DWORD *)(v63 + v58) - 64;
  if ( v102 )
  {
    v58 = (unsigned int)(v102 - 1);
    if ( (_DWORD)v58 )
    {
      if ( (_DWORD)v58 == 1 )
      {
        v58 = v101 + 40;
        if ( v101 + 40 <= v100 )
        {
          if ( *(_DWORD *)(v63 + v101 + 12) )
            v97 = (char *)(v101 + v63 + 32);
          v64 = *(_BYTE **)(v63 + v101 + 24);
          goto LABEL_270;
        }
      }
    }
    else
    {
      v58 = v101 + 56;
      if ( v101 + 56 <= v100 )
      {
        v135 = 1;
        if ( *(_BYTE *)(v63 + v101 + 10) )
          v97 = (char *)(v101 + v63 + 24);
        v64 = *(_BYTE **)(v63 + v101 + 16);
        v65 = *(_BYTE *)(v63 + v101 + 9);
        v132 = *(_BYTE *)(v63 + v101 + 8);
      }
    }
    goto LABEL_264;
  }
  v58 = v101 + 40;
  if ( v101 + 40 > v100 )
  {
LABEL_264:
    if ( v135 )
      goto LABEL_271;
    goto LABEL_265;
  }
  if ( *(_BYTE *)(v63 + v101 + 10) )
    v97 = (char *)(v101 + v63 + 24);
  v64 = *(_BYTE **)(v63 + v101 + 16);
LABEL_270:
  v65 = *(_BYTE *)(v63 + v101 + 9);
  v132 = *(_BYTE *)(v63 + v101 + 8);
LABEL_271:
  if ( v97 )
  {
    v76 = *v97;
    v77 = v132;
LABEL_173:
    if ( ((v76 - 8) & 0x5D) == 0 )
    {
      v78 = *(_BYTE *)(v63 + 3);
      if ( v78 == 1 || !v64 || !v65 )
        goto LABEL_191;
      v79 = *v64 & 0x7F;
      if ( v79 == 114 || v79 == 115 )
      {
        v58 = (unsigned __int64)&v64[v65];
        LOBYTE(v63) = 0;
        if ( (unsigned __int64)(v64 + 8) <= v58 )
        {
          v68 = v64[3];
          v66 = v64[1] & 0xF;
          v67 = v64[2];
          goto LABEL_189;
        }
      }
      else
      {
        v58 = (unsigned __int64)&v64[v65];
        LOBYTE(v63) = 0;
        if ( (unsigned __int64)(v64 + 8) <= v58 )
        {
          v80 = v64 + 13;
          v66 = v64[2] & 0xF;
          v81 = v65;
          if ( (unsigned int)(unsigned __int8)v64[7] + 8 <= v65 )
            v81 = (unsigned __int8)v64[7] + 8;
          v58 = (unsigned __int64)&v64[v81];
          if ( (unsigned __int64)v80 <= v58 )
            v67 = v64[12];
          if ( (unsigned __int64)(v64 + 14) > v58 )
            v68 = 0;
          else
            v68 = *v80;
LABEL_189:
          LOBYTE(v63) = 1;
        }
      }
      LOBYTE(v58) = 1;
      if ( !(_BYTE)v63 )
LABEL_191:
        LOBYTE(v58) = 0;
      if ( byte_140173441 < 0 )
      {
        if ( !(_BYTE)v58 )
        {
          v68 = 0;
          v67 = 0;
          v66 = 0;
        }
        LOBYTE(v129) = v77;
        LOBYTE(v128) = v78;
        LODWORD(v127) = Irp->IoStatus.Status;
        McTemplateK0pduuuuup_EtwWriteTransfer(v58, v63, &v140, Irp, v127, v128, v129, v66, v67, v68, Irp);
      }
    }
  }
LABEL_199:
  IofCompleteRequest(Irp, 0);
LABEL_351:
  NvmeNamespaceReleaseRemoveLock(Context);
LABEL_352:
  if ( StorEtwLoggingEnabled && (byte_140173442 & 8) != 0 )
  {
    LODWORD(v127) = v40;
    McTemplateK0pd_EtwWriteTransfer(v49, &EventNonReadWriteRequestComplete, &v141, Irp, v127);
  }
  return v40;
}
