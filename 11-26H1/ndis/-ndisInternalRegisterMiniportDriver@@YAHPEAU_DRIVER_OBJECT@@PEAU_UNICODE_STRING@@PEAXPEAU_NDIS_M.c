/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1400762E0 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x140096BB0 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1400515B0 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140070B60 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140075F50 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400940A8 (-Make@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU-$TriageDataC.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x14013AF54 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x140168FD0 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x14016B5B0 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  struct _NDIS_M_DRIVER_BLOCK *v6; // rdi
  struct _UNICODE_STRING *v7; // r13
  unsigned int *p_Flags; // r15
  unsigned int v10; // r12d
  int v11; // edx
  unsigned int v12; // ebx
  _UNICODE_STRING *p_DriverName; // rdx
  ULONG v14; // ebx
  PVOID Pool2; // rax
  __int64 v16; // rdx
  unsigned int *v17; // r13
  LOGICAL IsDriverVerifyingByAddress; // eax
  struct _NDIS_M_DRIVER_BLOCK *v19; // rax
  __int64 v20; // rcx
  int (__fastcall **MajorFunction)(_DEVICE_OBJECT *, _IRP *); // rax
  __int64 v22; // r8
  int v23; // eax
  void (__fastcall ***v24)(void *, _QWORD); // rsi
  void **v25; // rsi
  TriageData *value; // rsi
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v27; // rcx
  KIRQL v28; // bl
  PVOID v29; // rcx
  size_t Size; // [rsp+40h] [rbp-61h] BYREF
  PVOID DriverObjectExtension; // [rsp+48h] [rbp-59h] BYREF
  void **p_value; // [rsp+50h] [rbp-51h]
  void *v34; // [rsp+58h] [rbp-49h] BYREF
  char v35; // [rsp+60h] [rbp-41h]
  int v36; // [rsp+70h] [rbp-31h] BYREF
  __int64 (__fastcall *v37)(void *, TriageDataArray *); // [rsp+78h] [rbp-29h]
  int v38; // [rsp+80h] [rbp-21h]
  void *v39; // [rsp+88h] [rbp-19h]
  int v40; // [rsp+90h] [rbp-11h]
  void *v41; // [rsp+98h] [rbp-9h]
  int v42; // [rsp+A0h] [rbp-1h]
  void *v43; // [rsp+A8h] [rbp+7h]
  int v44; // [rsp+B0h] [rbp+Fh]
  void *v45; // [rsp+B8h] [rbp+17h]
  unsigned int v46; // [rsp+100h] [rbp+5Fh] BYREF
  void *v47; // [rsp+110h] [rbp+6Fh]
  unsigned int v48; // [rsp+118h] [rbp+77h] BYREF

  v47 = a3;
  LOBYTE(v6) = 0;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      106,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  }
  p_Flags = &a4->Flags;
  v10 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( !a1 && !v10 )
  {
    v12 = -1073741823;
    goto LABEL_67;
  }
  v48 = 0;
  v46 = 0;
  p_DriverName = 0LL;
  if ( !v10 )
    p_DriverName = &a1->DriverName;
  v12 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v48, &v46, (unsigned int *)&Size);
  if ( !v12 )
  {
    v12 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v48, v46);
    if ( !v12 )
    {
      v14 = v7->Length + 1194;
      if ( v10 )
      {
        Pool2 = (PVOID)ExAllocatePool2(66LL, v14, 538985550LL);
        DriverObjectExtension = Pool2;
        if ( !Pool2 )
        {
          v12 = -1073741670;
          goto LABEL_67;
        }
      }
      else
      {
        v16 = 1313425732LL;
        if ( (*p_Flags & 1) == 0 )
          v16 = 1313687876LL;
        if ( IoAllocateDriverObjectExtension(a1, (PVOID)v16, v14, &DriverObjectExtension) < 0 )
        {
          v12 = -1073741670;
          goto LABEL_67;
        }
        Pool2 = DriverObjectExtension;
        p_Flags = &a4->Flags;
      }
      memset(Pool2, 0, v14);
      v6 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      memset(DriverObjectExtension, 0, 0x4A8uLL);
      v6->MajorNdisVersion = v48;
      v6->MinorNdisVersion = v46;
      v6->MiniportDriverContext = v47;
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
      v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
      v6->ServiceRegPath.Length = v7->Length;
      v6->ServiceRegPath.MaximumLength = v7->Length + 2;
      memmove(&v6[1], v7->Buffer, v7->Length);
      ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
      if ( (*p_Flags & 1) != 0 )
      {
        v6->Flags |= 1u;
        KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
        v17 = &a4->Flags;
      }
      else
      {
        v17 = p_Flags;
      }
      if ( (*p_Flags & 4) != 0 )
        v6->Flags |= 0x20u;
      else
        v17 = p_Flags;
      memmove(&v6->112, a4, (unsigned int)Size);
      v6->MiniportDriverCharacteristics.MajorNdisVersion = v48;
      v6->MiniportDriverCharacteristics.MinorNdisVersion = v46;
      if ( (*p_Flags & 0x10) != 0 )
        v6->Flags |= 0x40u;
      if ( (*v17 & 0x20) != 0 )
        v6->Flags |= 0x80u;
      v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
      if ( v10 )
        IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
      else
        IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
      if ( IsDriverVerifyingByAddress )
      {
        v6->Flags |= 2u;
        if ( (ndisFlags & 0x400) != 0 )
        {
          v19 = 0LL;
          if ( !ndisDriverTrackAlloc )
            v19 = v6;
          ndisDriverTrackAlloc = v19;
        }
      }
      v6->MiniportQueue = 0LL;
      if ( (a4->Flags & 0x30) == 0 )
      {
        v20 = 3LL;
        MajorFunction = a1->MajorFunction;
        do
        {
          *MajorFunction = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          MajorFunction[1] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          MajorFunction += 8;
          *(MajorFunction - 5) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          *(MajorFunction - 4) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          *(MajorFunction - 3) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          *(MajorFunction - 2) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          *(MajorFunction - 1) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
          --v20;
        }
        while ( v20 );
        *MajorFunction = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
        MajorFunction[1] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
        MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
        MajorFunction[3] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
        a1->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
        a1->DriverUnload = ndisMUnloadEx;
        a1->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
        a1->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
        a1->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
        a1->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
        a1->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
        a1->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
        a1->MajorFunction[23] = ndisWMIIrpDispatch;
      }
      KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
      v6->DriverObject = a1;
      v6->DeviceList.Blink = &v6->DeviceList;
      v6->DeviceList.Flink = &v6->DeviceList;
      ndisInitializeRef(&v6->Ref, 0xDu);
      if ( !(unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_54;
      v36 = 1;
      v37 = StructSliceDataCollector<_NDIS_M_DRIVER_BLOCK,0,352>::AddTriageBlocks;
      v38 = 1;
      v39 = &StructFieldDataCollector<_NDIS_M_DRIVER_BLOCK,_UNICODE_STRING,488>::AddTriageBlocks;
      v40 = 1;
      v41 = &UnicodeStringDataCollector<_NDIS_M_DRIVER_BLOCK,488>::AddTriageBlocks;
      v42 = 1;
      v43 = &StructFieldDataCollector<_NDIS_M_DRIVER_BLOCK,_UNICODE_STRING,872>::AddTriageBlocks;
      v45 = &UnicodeStringDataCollector<_NDIS_M_DRIVER_BLOCK,872>::AddTriageBlocks;
      p_value = (void **)&v6->Triage.__ptr_.__value_;
      v44 = 1;
      v34 = 0LL;
      v35 = 1;
      v23 = ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::Make(v6, &v36, v22, &v34);
      v12 = v23;
      if ( v23 < 0 )
      {
        if ( v23 == -1073741789 )
          v12 = -1073676266;
      }
      else if ( v23 != 259 && v23 != 1076035585 )
      {
        v12 = 0;
      }
      if ( v35 )
      {
        v24 = (void (__fastcall ***)(void *, _QWORD))*p_value;
        *p_value = v34;
        if ( v24 )
        {
          (**v24)(v24, 0LL);
          ExFreePoolWithTag(v24, 0);
        }
      }
      if ( v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x6Bu,
            (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
            (char)v6,
            v12);
        ndisDereferenceDriver(v6, 0, 0xFFu);
      }
      else
      {
LABEL_54:
        v25 = a5;
        *a5 = v6;
        v12 = ndisMInvokeSetOptions(v6);
        if ( v12 )
        {
          ndisDereferenceDriver(v6, 0, 0xFFu);
        }
        else
        {
          if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
          {
            ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
            v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            v29 = ndisDriverObject;
            v6->NextDriver = ndisMiniDriverList;
            ndisMiniDriverList = v6;
            ObfReferenceObject(v29);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
            MmUnlockPagableImageSection(ImageSectionHandle);
            _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
            ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
            ndisWriteDriverNDISVersionToServiceKey(
              v48,
              v46,
              1,
              a4->MajorDriverVersion,
              a4->MinorDriverVersion,
              &v6->ServiceName);
            v12 = 0;
            goto LABEL_67;
          }
          ndisDereferenceDriver(v6, 0, 0xFFu);
          v12 = -1073676283;
        }
        *v25 = 0LL;
      }
      value = v6->Triage.__ptr_.__value_;
      v6->Triage.__ptr_.__value_ = 0LL;
      if ( value )
      {
        ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
        ExFreePoolWithTag(value, 0);
      }
      v27 = v6->UnhookedCharacteristics.__ptr_.__value_;
      v6->UnhookedCharacteristics.__ptr_.__value_ = 0LL;
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      if ( v10 )
        ExFreePoolWithTag(v6, 0);
    }
  }
LABEL_67:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1,
      108,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)v6);
  }
  return v12;
}
