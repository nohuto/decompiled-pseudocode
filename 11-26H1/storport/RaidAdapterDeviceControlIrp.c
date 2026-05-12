/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x14001D0E0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1400075C0 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     ExtensionAdapterIoctlPost @ 0x14001E660 (ExtensionAdapterIoctlPost.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x14001E6BC (RaidAdapterMiniportProcessServiceRequest.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14001EBF0 (StorageGetSystemFeatureSupportIoctl.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x140057444 (RaidAdapterStorageResetBusIoctl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaAdapterProtocolCommandIoctl @ 0x14005F694 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x14005FA7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwBootPartitionActivateIoctl @ 0x140061434 (RaidAdapterHwBootPartitionActivateIoctl.c)
 *     RaidAdapterHwBootPartitionDownloadIoctl @ 0x140061864 (RaidAdapterHwBootPartitionDownloadIoctl.c)
 *     RaidAdapterHwBootPartitionGetInfoIoctl @ 0x140061CB8 (RaidAdapterHwBootPartitionGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1400626F8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x140062DF0 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14006324C (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x14006367C (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x140063AF0 (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterPowerCapIoctl @ 0x140064324 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x140064748 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterReconfigureMFND @ 0x140065184 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x14006597C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x140065EA8 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x140066268 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x140066950 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterScsiRescanBusIoctl @ 0x140067750 (RaidAdapterScsiRescanBusIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1400685E4 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x140068A0C (RaidAdapterSetLedState.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x140069ADC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x14006A03C (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x14006B13C (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     RaidAdapterStorageNotificationGetInfoIoctl @ 0x14006B58C (RaidAdapterStorageNotificationGetInfoIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x14006B998 (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x140083308 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x140083864 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x140083E90 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x140084420 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x140084A2C (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x140084FAC (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x140085584 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x140085A88 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x140085F48 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x140086498 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x140086A78 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x140087028 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1400875CC (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401864B4 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterPassThrough @ 0x1401B3090 (RaidAdapterPassThrough.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  int v4; // edi
  char v5; // r12
  __int64 v7; // r8
  BOOLEAN v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int inserted; // r14d
  unsigned int LockingObjectMetadata; // eax
  unsigned int v14; // eax
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  int *v20; // rax
  char v21; // al
  __int64 v22; // rdx
  char *v23; // r11
  char v24; // r10
  unsigned int v25; // eax
  char v26; // si
  char v27; // r11
  char v28; // r15
  char v29; // r13
  _BYTE *v30; // r9
  unsigned __int8 v31; // r14
  char *v32; // r15
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  int *v42; // rax
  int v43; // ecx
  void *v44; // rdx
  __int64 v45; // rdx
  _BYTE *v46; // r9
  unsigned __int8 v47; // r10
  char v48; // r13
  char v49; // r11
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // r8
  int v54; // ecx
  char v55; // cl
  char v56; // r8
  char v57; // al
  char *v58; // r11
  unsigned int v59; // eax
  char v60; // [rsp+60h] [rbp-29h]
  char v61; // [rsp+61h] [rbp-28h]
  char v62; // [rsp+62h] [rbp-27h] BYREF
  char v63; // [rsp+63h] [rbp-26h]
  unsigned int v64; // [rsp+64h] [rbp-25h]
  int v65; // [rsp+68h] [rbp-21h]
  unsigned int v66; // [rsp+6Ch] [rbp-1Dh]
  __int128 v67; // [rsp+70h] [rbp-19h] BYREF
  __int128 v68; // [rsp+80h] [rbp-9h] BYREF
  __int128 v69; // [rsp+90h] [rbp+7h] BYREF

  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  LOBYTE(v4) = 0;
  v69 = 0LL;
  v5 = 0;
  v62 = 0;
  v8 = ExAcquireRundownProtectionCacheAware(v3);
  v9 = *(_QWORD *)(a2 + 184);
  v10 = v8 == 0 ? 0xC0000056 : 0;
  v11 = *(_DWORD *)(v9 + 24);
  v64 = v10;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v69);
    if ( v11 == 315396
      || (v19 = v11 - 315412, (unsigned int)v19 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v19)) )
    {
      if ( (byte_140173443 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v69,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v11);
    }
    else if ( (byte_140173442 & 2) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v69,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v11);
    }
    v10 = v64;
  }
  if ( !v8 )
  {
    v16 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v10;
    if ( v16 )
      goto LABEL_35;
    v67 = 0LL;
    IoGetActivityIdIrp(a2, &v67);
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v18 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          *(unsigned int *)(a2 + 48),
          &EventNonReadWriteRequestComplete,
          &v67,
          a2,
          *(_DWORD *)(a2 + 48));
      goto LABEL_35;
    }
    if ( *(_BYTE *)v18 != 15 )
    {
      if ( *(_BYTE *)v18 == 27 )
      {
        if ( *(_BYTE *)(v18 + 1) != 7 || *(_DWORD *)(v18 + 8) )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v17, &EventPnpRequestComplete, &v67, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          v20 = *(int **)(a2 + 56);
          if ( v20 )
            v4 = *v20;
          McTemplateK0pqd_EtwWriteTransfer(v17, v18, (unsigned int)&v67, a2, v4, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_35;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_35;
    v22 = *(_QWORD *)(v18 + 8);
    v29 = 0;
    v30 = 0LL;
    v31 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( *(_BYTE *)(v22 + 2) == 40 )
    {
      v32 = 0LL;
      v60 = 0;
      if ( *(_DWORD *)(v22 + 20) )
        goto LABEL_35;
      v33 = *(_DWORD *)(v22 + 56);
      v34 = 0LL;
      v65 = 0;
      v66 = v33;
      if ( !v33 )
        goto LABEL_35;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v22 + 4 * v34 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v35 = *(unsigned int *)(v22 + 16);
          if ( (unsigned int)v17 < (unsigned int)v35 )
          {
            v36 = (unsigned int)v17;
            v37 = *(_DWORD *)(v17 + v22) - 64;
            if ( v37 )
            {
              LODWORD(v17) = v37 - 1;
              if ( (_DWORD)v17 )
              {
                if ( (_DWORD)v17 == 1 )
                {
                  LODWORD(v17) = v36 + 40;
                  if ( v36 + 40 <= v35 )
                  {
                    if ( *(_DWORD *)(v36 + v22 + 12) )
                      v32 = (char *)(v36 + v22 + 32);
                    v30 = *(_BYTE **)(v36 + v22 + 24);
                    goto LABEL_146;
                  }
                }
              }
              else
              {
                LODWORD(v17) = v36 + 56;
                if ( v36 + 56 <= v35 )
                {
                  v60 = 1;
                  if ( *(_BYTE *)(v36 + v22 + 10) )
                    v32 = (char *)(v36 + v22 + 24);
                  v29 = *(_BYTE *)(v36 + v22 + 8);
                  v30 = *(_BYTE **)(v36 + v22 + 16);
                  v31 = *(_BYTE *)(v36 + v22 + 9);
                }
              }
            }
            else
            {
              LODWORD(v17) = v36 + 40;
              if ( v36 + 40 <= v35 )
              {
                if ( *(_BYTE *)(v36 + v22 + 10) )
                  v32 = (char *)(v36 + v22 + 24);
                v30 = *(_BYTE **)(v36 + v22 + 16);
LABEL_146:
                v31 = *(_BYTE *)(v36 + v22 + 9);
                v29 = *(_BYTE *)(v36 + v22 + 8);
LABEL_147:
                if ( v32 )
                {
                  v38 = *v32;
                  v28 = 0;
                  goto LABEL_150;
                }
                goto LABEL_35;
              }
            }
            if ( v60 )
              goto LABEL_147;
          }
        }
        v34 = (unsigned int)(v65 + 1);
        v65 = v34;
        if ( (unsigned int)v34 >= v66 )
          goto LABEL_147;
      }
    }
    v38 = *(_BYTE *)(v22 + 72);
    v30 = *(_BYTE **)(v22 + 32);
    v31 = *(_BYTE *)(v22 + 11);
    v29 = *(_BYTE *)(v22 + 4);
    if ( *(_BYTE *)(v22 + 2) )
      goto LABEL_35;
LABEL_150:
    LOBYTE(v17) = v38 - 8;
    if ( (v17 & 0x5D) != 0 )
    {
LABEL_35:
      IofCompleteRequest((PIRP)a2, 0);
      return v64;
    }
    v39 = *(_BYTE *)(v22 + 3);
    if ( v39 == 1 || !v30 || !v31 )
    {
LABEL_83:
      if ( byte_140173441 < 0 )
      {
        if ( !v28 )
        {
          v27 = 0;
          v26 = 0;
          v24 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v17,
          v22,
          (unsigned int)&v67,
          a2,
          *(_DWORD *)(a2 + 48),
          v39,
          v29,
          v24,
          v26,
          v27,
          a2);
      }
      goto LABEL_35;
    }
    v21 = *v30 & 0x7F;
    if ( v21 == 114 || v21 == 115 )
    {
      v17 = (unsigned __int64)&v30[v31];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v30 + 8) > v17 )
      {
LABEL_81:
        if ( (_BYTE)v22 )
          v28 = 1;
        goto LABEL_83;
      }
      v26 = v30[2];
      v24 = v30[1] & 0xF;
      v27 = v30[3];
    }
    else
    {
      v17 = (unsigned __int64)&v30[v31];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v30 + 8) > v17 )
        goto LABEL_81;
      v23 = v30 + 13;
      v24 = v30[2] & 0xF;
      v25 = v31;
      if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
        v25 = (unsigned __int8)v30[7] + 8;
      v17 = (unsigned __int64)&v30[v25];
      if ( (unsigned __int64)v23 <= v17 )
        v26 = v30[12];
      if ( (unsigned __int64)(v30 + 14) > v17 )
        v27 = 0;
      else
        v27 = *v23;
    }
    LOBYTE(v22) = 1;
    goto LABEL_81;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2,
      HIWORD(v11),
      (v11 >> 2) & 0xFFF);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtAdapterIoctlReplace)(&dword_1401721E8, a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_26;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    ((void (__fastcall *)(int *, __int64, __int64))ExtAdapterIoctlPre)(&dword_1401721E8, a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( v11 > 0x2D5FA8 )
  {
    if ( v11 > 0x2DDC10 )
    {
      if ( v11 > 0x2DDF9C )
      {
        switch ( v11 )
        {
          case 0x2DDFA0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgEraseLockingObject(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDFA4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObject(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDFACu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectMetadata(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDFB0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgResetState(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x32C000u:
          case 0x32C038u:
            LockingObjectMetadata = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
            goto LABEL_23;
        }
      }
      else
      {
        switch ( v11 )
        {
          case 0x2DDF9Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectAuthKey(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDCD8u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDNameSpacePageMapControl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDF84u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgActivateLocking(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDF88u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgRevertConfig(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDF8Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetSpAuthorityKey(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDF94u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgAssignLockingObject(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDF98u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgDeassignLockingObject(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
        }
      }
    }
    else
    {
      if ( v11 == 3005456 )
      {
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          LockingObjectMetadata = RaidAdapterHwBootPartitionActivateIoctl(a1, a2);
          goto LABEL_23;
        }
        goto LABEL_367;
      }
      if ( v11 > 0x2DD04C )
      {
        switch ( v11 )
        {
          case 0x2DD200u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DD3C0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterProtocolCommandIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DD684u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterSetBootLunIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDC04u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDC08u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DDC0Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterHwBootPartitionDownloadIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
        }
      }
      else
      {
        switch ( v11 )
        {
          case 0x2DD04Cu:
            inserted = -1073741637;
            goto LABEL_24;
          case 0x2D93F4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageInternalSetPropertyIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2D93FCu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageSetPropertyIoctl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2D9CD0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterReconfigureMFND(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2D9CD4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDChildPFControl(a1, a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2D9CE2u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDNameSpaceWrite(a1, (PIRP)a2);
              goto LABEL_23;
            }
            goto LABEL_367;
          case 0x2DD044u:
            LockingObjectMetadata = RaidAdapterStorageNotificationConfigureIoctl(a1, a2);
            goto LABEL_23;
        }
      }
    }
  }
  else
  {
    if ( v11 == 2973608 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterStorageTcgGetLockingObjectMetadata(a1, a2);
        goto LABEL_23;
      }
      goto LABEL_367;
    }
    if ( v11 <= 0x2D1C00 )
    {
      if ( v11 == 2956288 )
      {
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          LockingObjectMetadata = RaidAdapterHwFirmwareGetInfoIoctl((_QWORD *)a1, a2);
          goto LABEL_23;
        }
        goto LABEL_367;
      }
      if ( v11 <= 0x4D038 )
      {
        switch ( v11 )
        {
          case 0x4D038u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              return RaidAdapterMiniportProcessServiceRequest(a1, a2);
            }
            goto LABEL_367;
          case 0x4100Cu:
            LockingObjectMetadata = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
            goto LABEL_23;
          case 0x41010u:
            LockingObjectMetadata = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
            goto LABEL_23;
          case 0x41018u:
            LockingObjectMetadata = RaidAdapterScsiGetAddressIoctl(a1, a2);
            goto LABEL_23;
          case 0x4101Cu:
            LockingObjectMetadata = RaidAdapterScsiRescanBusIoctl(a1, a2);
            goto LABEL_23;
        }
        if ( v11 != 315396 )
        {
          if ( v11 == 315400 )
          {
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0, 0, 0, 2);
              goto LABEL_23;
            }
LABEL_367:
            inserted = RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
            if ( !inserted )
              inserted = 259;
            goto LABEL_24;
          }
          if ( v11 != 315412 )
            goto LABEL_287;
LABEL_96:
          LOBYTE(v7) = 1;
LABEL_116:
          LockingObjectMetadata = RaidAdapterPassThrough(a1, a2, v7);
          goto LABEL_23;
        }
      }
      else if ( v11 != 315460 )
      {
        if ( v11 != 315464 )
        {
          switch ( v11 )
          {
            case 0x2D11D4u:
              LockingObjectMetadata = RaidAdapterStorageGetInternalDataIoctl(a1, a2);
              goto LABEL_23;
            case 0x2D13F8u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterStorageInternalQueryPropertyIoctl(a1, a2, &v62);
                goto LABEL_23;
              }
              goto LABEL_367;
            case 0x2D1400u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
LABEL_23:
                inserted = LockingObjectMetadata;
                goto LABEL_24;
              }
              goto LABEL_367;
            case 0x2D1680u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterQueryBootLunsIoctl(a1, a2);
                goto LABEL_23;
              }
              goto LABEL_367;
          }
          goto LABEL_287;
        }
        goto LABEL_96;
      }
      v7 = 0LL;
      goto LABEL_116;
    }
    if ( v11 > 0x2D4C1C )
    {
      switch ( v11 )
      {
        case 0x2D5000u:
          LockingObjectMetadata = RaidAdapterStorageResetBusIoctl(a1, a2);
          goto LABEL_23;
        case 0x2D5014u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageBreakReservationIoctl(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D5020u:
          LockingObjectMetadata = RaidAdapterStorageDeviceResetIoctl(a1, a2);
          goto LABEL_23;
        case 0x2D5048u:
          LockingObjectMetadata = RaidAdapterStorageNotificationGetInfoIoctl(a1, a2);
          goto LABEL_23;
        case 0x2D5CDDu:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterMFNDNameSpaceRead(a1, (PIRP)a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D5F90u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageTcgEnumerateLockingObjects(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
      }
    }
    else
    {
      switch ( v11 )
      {
        case 0x2D4C1Cu:
          LockingObjectMetadata = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
          goto LABEL_23;
        case 0x2D1C14u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterHwBootPartitionGetInfoIoctl(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D1C94u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterPowerCapIoctl(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D1C98u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterRpmbRequest(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D1CA0u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterDiagnosticIoctl(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
        case 0x2D1CCCu:
          LockingObjectMetadata = RaidAdapterSetLedState(a1, a2);
          goto LABEL_23;
        case 0x2D1F80u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageTcgQueryCapability(a1, a2);
            goto LABEL_23;
          }
          goto LABEL_367;
      }
    }
  }
LABEL_287:
  v16 = StorEtwLoggingEnabled == 0;
  inserted = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v16 )
    goto LABEL_354;
  v68 = 0LL;
  IoGetActivityIdIrp(a2, &v68);
  v41 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v41 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_354;
    v44 = &EventNonReadWriteRequestComplete;
    goto LABEL_353;
  }
  if ( *(_BYTE *)v41 != 15 )
  {
    if ( *(_BYTE *)v41 != 27 )
      goto LABEL_354;
    if ( *(_BYTE *)(v41 + 1) == 7 && !*(_DWORD *)(v41 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v42 = *(int **)(a2 + 56);
        if ( v42 )
          v43 = *v42;
        else
          v43 = 0;
        McTemplateK0pqd_EtwWriteTransfer(v43, v41, (unsigned int)&v68, a2, v43, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_354;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_354;
    v44 = &EventPnpRequestComplete;
LABEL_353:
    McTemplateK0pd_EtwWriteTransfer(v40, v44, &v68, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_354;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_354;
  v45 = *(_QWORD *)(v41 + 8);
  v46 = 0LL;
  v61 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( *(_BYTE *)(v45 + 2) == 40 )
  {
    *(_QWORD *)&v67 = 0LL;
    v63 = 0;
    if ( *(_DWORD *)(v45 + 20) )
      goto LABEL_354;
    v50 = *(_DWORD *)(v45 + 56);
    v51 = 0LL;
    v65 = 0;
    v66 = v50;
    if ( !v50 )
      goto LABEL_354;
    while ( 1 )
    {
      v40 = *(unsigned int *)(v45 + 4 * v51 + 120);
      if ( (unsigned int)v40 >= 0x80 )
      {
        v52 = *(unsigned int *)(v45 + 16);
        if ( (unsigned int)v40 < (unsigned int)v52 )
        {
          v53 = (unsigned int)v40;
          v54 = *(_DWORD *)(v45 + v40) - 64;
          if ( v54 )
          {
            LODWORD(v40) = v54 - 1;
            if ( (_DWORD)v40 )
            {
              if ( (_DWORD)v40 == 1 )
              {
                LODWORD(v40) = v53 + 40;
                if ( v53 + 40 <= v52 )
                {
                  if ( *(_DWORD *)(v45 + v53 + 12) )
                    *(_QWORD *)&v67 = v53 + v45 + 32;
                  v46 = *(_BYTE **)(v45 + v53 + 24);
                  v61 = *(_BYTE *)(v45 + v53 + 8);
                  goto LABEL_324;
                }
              }
            }
            else
            {
              LODWORD(v40) = v53 + 56;
              if ( v53 + 56 <= v52 )
              {
                v63 = 1;
                if ( *(_BYTE *)(v45 + v53 + 10) )
                  *(_QWORD *)&v67 = v53 + v45 + 24;
                v46 = *(_BYTE **)(v45 + v53 + 16);
                v47 = *(_BYTE *)(v45 + v53 + 9);
                v61 = *(_BYTE *)(v45 + v53 + 8);
              }
            }
          }
          else
          {
            LODWORD(v40) = v53 + 40;
            if ( v53 + 40 <= v52 )
            {
              if ( *(_BYTE *)(v45 + v53 + 10) )
                *(_QWORD *)&v67 = v53 + v45 + 24;
              v46 = *(_BYTE **)(v45 + v53 + 16);
              v61 = *(_BYTE *)(v45 + v53 + 8);
LABEL_324:
              v47 = *(_BYTE *)(v45 + v53 + 9);
LABEL_325:
              if ( (_QWORD)v67 )
              {
                v55 = *(_BYTE *)v67;
                goto LABEL_328;
              }
              goto LABEL_354;
            }
          }
          if ( v63 )
            goto LABEL_325;
        }
      }
      v51 = (unsigned int)(v65 + 1);
      v65 = v51;
      if ( (unsigned int)v51 >= v66 )
        goto LABEL_325;
    }
  }
  v55 = *(_BYTE *)(v45 + 72);
  v46 = *(_BYTE **)(v45 + 32);
  v47 = *(_BYTE *)(v45 + 11);
  v61 = *(_BYTE *)(v45 + 4);
  if ( *(_BYTE *)(v45 + 2) )
    goto LABEL_354;
LABEL_328:
  if ( ((v55 - 8) & 0x5D) == 0 )
  {
    v56 = *(_BYTE *)(v45 + 3);
    if ( v56 == 1 || !v46 || !v47 )
    {
LABEL_346:
      LOBYTE(v40) = 0;
LABEL_347:
      if ( byte_140173441 < 0 )
      {
        if ( !(_BYTE)v40 )
        {
          v49 = 0;
          v48 = 0;
          v5 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v40,
          v45,
          (unsigned int)&v68,
          a2,
          *(_DWORD *)(a2 + 48),
          v56,
          v61,
          v5,
          v48,
          v49,
          a2);
      }
      goto LABEL_354;
    }
    v57 = *v46 & 0x7F;
    if ( v57 == 114 || v57 == 115 )
    {
      v40 = (unsigned __int64)&v46[v47];
      LOBYTE(v45) = 0;
      if ( (unsigned __int64)(v46 + 8) > v40 )
        goto LABEL_345;
      v48 = v46[2];
      v5 = v46[1] & 0xF;
      v49 = v46[3];
    }
    else
    {
      v40 = (unsigned __int64)&v46[v47];
      LOBYTE(v45) = 0;
      if ( (unsigned __int64)(v46 + 8) > v40 )
        goto LABEL_345;
      v58 = v46 + 13;
      v5 = v46[2] & 0xF;
      v59 = v47;
      if ( (unsigned int)(unsigned __int8)v46[7] + 8 <= v47 )
        v59 = (unsigned __int8)v46[7] + 8;
      v40 = (unsigned __int64)&v46[v59];
      if ( (unsigned __int64)v58 <= v40 )
        v48 = v46[12];
      if ( (unsigned __int64)(v46 + 14) > v40 )
        v49 = 0;
      else
        v49 = *v58;
    }
    LOBYTE(v45) = 1;
LABEL_345:
    LOBYTE(v40) = 1;
    if ( (_BYTE)v45 )
      goto LABEL_347;
    goto LABEL_346;
  }
LABEL_354:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_24:
  v14 = ExtensionAdapterIoctlPost(v9, a1, a2);
  v5 = v62;
  if ( v14 != -1073741822 )
    inserted = v14;
LABEL_26:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2,
      v11,
      inserted);
  }
  if ( !v5 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  return inserted;
}
