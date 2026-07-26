/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1400BC420
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140051420 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x14005BBC0 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140075F50 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140078BD0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008F650 (--1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisRegisterProtocolTriageData @ 0x1400BB718 (ndisRegisterProtocolTriageData.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140138A70 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x140161DD0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x14016B7D0 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x14016C1A0 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rbx
  int v6; // edx
  NDIS_STATUS v7; // edi
  int v8; // r8d
  unsigned __int8 *p_MajorNdisVersion; // r14
  unsigned __int8 *p_MinorNdisVersion; // rdi
  int v11; // edx
  _UNICODE_STRING *p_Name; // r12
  unsigned int v14; // r15d
  __int64 Pool2; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // dl
  unsigned int Flags; // eax
  unsigned __int16 Length; // ax
  __int64 v21; // r8
  __int64 ProtocolDriver; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  TriageData *v28; // r8
  NDIS_STATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  UNICODE_STRING String2; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v35; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v36; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+58h] BYREF

  LOBYTE(v3) = 0;
  *(_QWORD *)&String2.Length = 786442LL;
  v38 = 0;
  String2.Buffer = L"TCPIP";
  *(_QWORD *)&v35.Length = 917516LL;
  v35.Buffer = L"TCPIP6";
  *(_QWORD *)&v36.Length = 1310738LL;
  v36.Buffer = L"NDISTEST6";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &ProtocolCharacteristics->Name.Length);
  ndisIfEnsureNsiInitialized();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v7 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v38);
  if ( v7 )
    goto LABEL_11;
  v7 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics, v6, v8) == -1073676283 )
    goto LABEL_11;
  p_MajorNdisVersion = &ProtocolCharacteristics->MajorNdisVersion;
  p_MinorNdisVersion = &ProtocolCharacteristics->MinorNdisVersion;
  if ( ProtocolCharacteristics->MajorNdisVersion > 6u )
    goto LABEL_14;
  if ( ProtocolCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_15;
  if ( *p_MinorNdisVersion >= 0x59u )
  {
LABEL_14:
    if ( (ProtocolCharacteristics->Flags & 0xFFFFFF1) != 0 )
    {
LABEL_10:
      v7 = -1073741811;
      goto LABEL_11;
    }
  }
  else
  {
    p_MajorNdisVersion = &ProtocolCharacteristics->MajorNdisVersion;
    if ( *p_MinorNdisVersion >= 0x32u && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
      goto LABEL_10;
  }
LABEL_15:
  p_Name = &ProtocolCharacteristics->Name;
  v14 = ProtocolCharacteristics->Name.Length + 898;
  Pool2 = ExAllocatePool2(64LL, v14, 1651524686LL);
  v3 = (_NDIS_PROTOCOL_BLOCK *)Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    v7 = -1073741670;
    goto LABEL_11;
  }
  *(_QWORD *)(Pool2 + 824) = 0LL;
  v16 = Pool2 + 832;
  v3->Triage.__ptr_.__value_ = 0LL;
  *(_QWORD *)(v16 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  *(_QWORD *)(v16 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
  *(_QWORD *)v16 = 0LL;
  *(_DWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 32) = v3;
  *(_QWORD *)(v16 + 24) = v16;
  KeInitializeMutex(&v3->Mutex, 0xFFFFu);
  v17 = *p_MajorNdisVersion;
  v18 = *p_MinorNdisVersion;
  v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
  v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
  v3->ProtocolDriverContext = ProtocolDriverContext;
  v3->Header.Size = v14;
  v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
  Flags = ProtocolCharacteristics->Flags;
  v3->Flags = Flags;
  *(_WORD *)&v3->Header.Type = 259;
  v3->MajorNdisVersion = v17;
  v3->MinorNdisVersion = v18;
  if ( v17 > 6u )
    goto LABEL_22;
  if ( v17 == 6 )
  {
    if ( v18 >= 0x32u )
      goto LABEL_22;
    p_MinorNdisVersion = &ProtocolCharacteristics->MinorNdisVersion;
  }
  v3->Flags = Flags & 0xF0000000;
LABEL_22:
  Length = p_Name->Length;
  v3->Name.Length = p_Name->Length;
  v3->Name.MaximumLength = Length;
  RtlUpcaseUnicodeString(&v3->Name, &ProtocolCharacteristics->Name, 0);
  v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
  v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v35, 0) == 0;
  v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v36, 0) == 0;
  v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
  v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
  v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
  v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
  v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
  v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
  v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
  v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
  v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
  v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
  if ( *p_MajorNdisVersion > 6u || *p_MajorNdisVersion == 6 && *p_MinorNdisVersion )
    v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  ndisInitializeRef(&v3->Ref, 0x10u);
  LOBYTE(v21) = 1;
  ProtocolDriver = ndisBindGetProtocolDriver(&v38, &v3->Name, v21);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v3->Bind, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v38, v23, v24);
  if ( !v3->Bind._p )
  {
    ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
    _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v25, v26);
    ExFreePoolWithTag(v3, 0);
    goto LABEL_16;
  }
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
    && (v29 = ndisRegisterProtocolTriageData((__int64)v3, v27, v28), (v7 = v29) != 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xBu,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
        (char)v3,
        v29);
    ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
    _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v30, v31);
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    *NdisProtocolHandle = v3;
    v7 = ndisInvokeSetOptions(v3, ProtocolCharacteristics);
    if ( v7 )
    {
      ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
      _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v32, v33);
      ExFreePoolWithTag(v3, 0);
      LOBYTE(v3) = 0;
      *NdisProtocolHandle = 0LL;
    }
    else
    {
      ndisWriteDriverNDISVersionToServiceKey(
        v3->MajorNdisVersion,
        v3->MinorNdisVersion,
        1,
        v3->MajorDriverVersion,
        v3->MinorDriverVersion,
        &v3->Name);
      ndisRegisterProtocolDriverCommon(v3);
      v7 = 0;
    }
  }
LABEL_11:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0xDu,
      0xCu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)v3,
      &ProtocolCharacteristics->Name.Length,
      v7,
      *(_QWORD *)&String2.Length,
      String2.Buffer,
      *(_QWORD *)&v35.Length,
      v35.Buffer,
      *(_QWORD *)&v36.Length,
      v36.Buffer);
  return v7;
}
