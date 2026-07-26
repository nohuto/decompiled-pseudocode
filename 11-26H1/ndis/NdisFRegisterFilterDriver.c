/*
 * XREFs of NdisFRegisterFilterDriver @ 0x14009D990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1400515B0 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140075F50 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14008C780 (McTemplateK0zq_EtwWriteTransfer.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x14008E190 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x14009BDE8 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009CB5C (ndisRegisterFilterDriverTriageData.c)
 *     ??$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@Z @ 0x1400A52DC (--$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILT.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x14013ABB8 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x14014B3E0 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x140161630 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x140161C10 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x14016B430 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  unsigned __int8 v4; // si
  int v9; // edx
  __int64 v10; // rcx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  _BOOL8 v15; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  int v17; // edx
  __int64 v18; // r8
  unsigned int Flags; // eax
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 Pool2; // rax
  _NDIS_FILTER_DRIVER_BLOCK *v24; // rsi
  size_t Length; // r8
  __int64 v26; // rax
  wchar_t *v27; // rdx
  wchar_t *v28; // rax
  wchar_t *Buffer; // rdx
  __int64 v30; // r8
  KRef<NDIS_BIND_FILTER_DRIVER> *FilterDriver; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rbx
  __int64 v35; // rdx
  TriageData *v36; // r8
  NDIS_STATUS v37; // eax
  NDIS_STATUS v38; // eax
  KIRQL v39; // al
  enum CallRunMode v40; // r8d
  struct _UNICODE_STRING *v41; // [rsp+28h] [rbp-70h]
  __int64 v42; // [rsp+30h] [rbp-68h]
  size_t Size; // [rsp+40h] [rbp-58h] BYREF
  GUID Guid; // [rsp+48h] [rbp-50h] BYREF

  v4 = 1;
  LODWORD(Size) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  ndisWaitForKernelObject(&ndisPnPMutex);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(
                           FilterDriverCharacteristics,
                           (unsigned int *)&Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_14011D042 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        &FilterRegistrationFailed,
        (__int64)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
    goto LABEL_6;
  }
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v15 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v15 != (OidRequestHandler == 0LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          12,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011D042 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
      goto LABEL_6;
    }
    if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          13,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011D042 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          3);
      goto LABEL_6;
    }
    MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
    {
      DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
      v15 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
      if ( v15 != (DirectOidRequestHandler == 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            14,
            (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_14011D042 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v15,
            &FilterRegistrationFailed,
            (__int64)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            4);
        goto LABEL_6;
      }
      if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            15,
            (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_14011D042 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v15,
            &FilterRegistrationFailed,
            (__int64)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            5);
        goto LABEL_6;
      }
    }
    if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
      && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          16,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011D042 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          6);
      goto LABEL_6;
    }
    if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || FilterDriverCharacteristics->MinorNdisVersion < 0x28u) )
      v4 = 0;
    FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName, v4);
    if ( !FilterDriverRegistry )
    {
      if ( FilterDriverCharacteristics->MajorNdisVersion > 6u )
        goto LABEL_58;
      if ( FilterDriverCharacteristics->MajorNdisVersion != 6 )
        goto LABEL_61;
      if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x59u )
      {
LABEL_58:
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFE0) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_57;
          v20 = 17;
          goto LABEL_56;
        }
      }
      else if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x32u )
      {
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFF8) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_57:
            FilterDriverRegistry = -1073741811;
            goto LABEL_6;
          }
          v20 = FilterDriverRegistry + 18;
LABEL_56:
          LODWORD(v41) = Flags;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            v20,
            (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
            v41);
          goto LABEL_57;
        }
      }
LABEL_61:
      v21 = FilterDriverCharacteristics->UniqueName.Length
          + (unsigned int)FilterDriverCharacteristics->ServiceName.Length;
      v22 = v21 + FilterDriverCharacteristics->FriendlyName.Length + 368;
      if ( v22 > 0xFFFF )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            1,
            19,
            (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073741811;
        if ( (byte_14011D042 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v21,
            &FilterRegistrationFailed,
            v18,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            7);
        goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(64LL, v22, 1986413646LL);
      v24 = (_NDIS_FILTER_DRIVER_BLOCK *)Pool2;
      if ( !Pool2 )
      {
        FilterDriverRegistry = -1073741670;
        goto LABEL_6;
      }
      *(_QWORD *)(Pool2 + 336) = 0LL;
      *(_QWORD *)(Pool2 + 360) = 0LL;
      *(_WORD *)Pool2 = 260;
      *(_WORD *)(Pool2 + 2) = v22;
      *(_QWORD *)(Pool2 + 16) = DriverObject;
      *(_QWORD *)(Pool2 + 32) = FilterDriverContext;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
      ndisInitializeRef(&v24->Ref, 6u);
      v24->DeviceList.Blink = &v24->DeviceList;
      v24->DeviceList.Flink = &v24->DeviceList;
      if ( ndisNblContextVerifierMode == 1 )
      {
        if ( !MmIsDriverVerifyingByAddress(FilterDriverCharacteristics->AttachHandler)
          || !ndisDriverVerifierNdisFlagEnabled() )
        {
LABEL_74:
          memmove(&v24->DefaultFilterCharacteristics, FilterDriverCharacteristics, (unsigned int)Size);
          if ( v24->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
            && (v24->DefaultFilterCharacteristics.MajorNdisVersion != 6
             || v24->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
          {
            v24->DefaultFilterCharacteristics.Flags &= 1u;
          }
          Length = FilterDriverCharacteristics->FriendlyName.Length;
          v24->Flags = v24->DefaultFilterCharacteristics.Flags;
          v26 = FilterDriverCharacteristics->UniqueName.Length;
          v24->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v24[1].Header.Type;
          v27 = (wchar_t *)(&v24[1].Header.Type + Length);
          v28 = (wchar_t *)((char *)v27 + v26);
          v24->DefaultFilterCharacteristics.UniqueName.Buffer = v27;
          Buffer = FilterDriverCharacteristics->FriendlyName.Buffer;
          v24->DefaultFilterCharacteristics.ServiceName.Buffer = v28;
          memmove(&v24[1], Buffer, Length);
          RtlUpcaseUnicodeString(
            &v24->DefaultFilterCharacteristics.UniqueName,
            &FilterDriverCharacteristics->UniqueName,
            0);
          memmove(
            v24->DefaultFilterCharacteristics.ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Length);
          Guid = 0LL;
          if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) >= 0 )
          {
            LOBYTE(v30) = 1;
            FilterDriver = (KRef<NDIS_BIND_FILTER_DRIVER> *)ndisBindGetFilterDriver(&Size, &Guid, v30);
            if ( &v24->Bind != FilterDriver )
            {
              p = FilterDriver->_p;
              FilterDriver->_p = 0LL;
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v24->Bind, v32, v33);
              v24->Bind._p = p;
            }
            KRef<NDIS_BIND_FILTER_DRIVER>::unref(&Size, v32, v33);
            if ( v24->Bind._p )
            {
              if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
                && (v37 = ndisRegisterFilterDriverTriageData((__int64)v24, v35, v36), (FilterDriverRegistry = v37) != 0) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v42) = v37;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x16u,
                    (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
                    (char)v24,
                    v42);
                }
              }
              else
              {
                *NdisFilterDriverHandle = v24;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v38 = ndisFInvokeSetOptions(v24), (FilterDriverRegistry = v38) == 0) )
                {
                  v39 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v24->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v24;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v39);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v24->ImageName);
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    1,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    &FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(&v24->Bind._p->_t, v24, v40);
                  goto LABEL_6;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v41) = v38;
                  WPP_RECORDER_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x17u,
                    (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
                    v41);
                }
                *NdisFilterDriverHandle = 0LL;
              }
LABEL_96:
              ndisDereferenceRef(&v24->Ref.SpinLock, 0xFFu);
              _NDIS_FILTER_DRIVER_BLOCK::~_NDIS_FILTER_DRIVER_BLOCK(v24);
              ExFreePoolWithTag(v24, 0);
              goto LABEL_6;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x15u,
                (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
                (__int64)&Guid);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Z(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x14u,
              (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
              &FilterDriverCharacteristics->UniqueName.Length);
          }
          FilterDriverRegistry = -1073741823;
          goto LABEL_96;
        }
      }
      else if ( ndisNblContextVerifierMode != 2 )
      {
        goto LABEL_74;
      }
      ndisSetContextVerifierDummyHandlers<_NDIS_FILTER_DRIVER_CHARACTERISTICS>(FilterDriverCharacteristics);
      goto LABEL_74;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1,
        11,
        (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
        (char)DriverObject);
    }
    FilterDriverRegistry = -1073676283;
    if ( (byte_14011D042 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        &FilterRegistrationFailed,
        (__int64)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
  }
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v41) = FilterDriverRegistry;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      v41);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
