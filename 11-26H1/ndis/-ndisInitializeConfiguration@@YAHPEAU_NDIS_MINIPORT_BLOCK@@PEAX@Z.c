/*
 * XREFs of ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001EA80 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400785E0 (-ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x14007D4D0 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085090 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008E6F0 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisInitializeConfiguration(struct _NDIS_MINIPORT_BLOCK *a1, PCWSTR Path)
{
  const WCHAR *v2; // rsi
  _INTERFACE_TYPE IntegerData; // edi
  unsigned int v5; // r12d
  unsigned __int16 Length; // r15
  _DWORD *Pool2; // rax
  int v8; // edx
  _DWORD *v9; // r14
  unsigned int v10; // esi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  unsigned int v12; // ecx
  PNDIS_CONFIGURATION_PARAMETER v13; // r15
  PVOID *v14; // rax
  PVOID i; // rcx
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  __int128 ConfigurationHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  const WCHAR *v24; // [rsp+68h] [rbp-98h]
  UNICODE_STRING Keyword; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v26; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v27; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v28; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v29; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v30; // [rsp+C0h] [rbp-40h] BYREF
  __int128 PropertyBuffer; // [rsp+D0h] [rbp-30h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v33; // [rsp+118h] [rbp+18h]
  __int128 v34; // [rsp+128h] [rbp+28h]
  __int128 v35; // [rsp+138h] [rbp+38h]
  __int128 v36; // [rsp+148h] [rbp+48h]
  __int128 v37; // [rsp+158h] [rbp+58h]
  __int128 v38; // [rsp+168h] [rbp+68h]
  __int128 v39; // [rsp+178h] [rbp+78h]

  *(_QWORD *)&v27.Length = 1310738LL;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v24 = 0LL;
  Status = 0;
  ParameterValue = 0LL;
  v27.Buffer = L"BusNumber";
  v2 = Path;
  *(_QWORD *)&v26.Length = 2097182LL;
  Keyword.Buffer = (wchar_t *)L"BusType";
  *(_QWORD *)&v28.Length = 1966108LL;
  v26.Buffer = L"PnPCapabilities";
  IntegerData = MaximumInterfaceType;
  *(_QWORD *)&v30.Length = 2883626LL;
  v28.Buffer = L"RemoteBootCard";
  LOWORD(v5) = 20;
  *(_QWORD *)&v29.Length = 2752552LL;
  v30.Buffer = L"NdisDriverVerifyFlags";
  Length = 16;
  v18 = 1;
  v29.Buffer = L"SGMapRegistersNeeded";
  ConfigurationHandle = 0LL;
  v21 = -1;
  *(_OWORD *)P = 0LL;
  ResultLength = 0;
  PropertyBuffer = 0LL;
  memset(&QueryTable, 0, sizeof(QueryTable));
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Path) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Path,
      13,
      10,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 136LL, 1751336014LL);
  v9 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_66;
  }
  a1->ConfigurationHandle = Pool2;
  *Pool2 = 8913162;
  v24 = v2;
  *((_QWORD *)&ConfigurationHandle + 1) = a1;
  P[0] = Pool2;
  P[1] = 0LL;
  if ( !a1->OpenQueue )
  {
    Status = ndisReadBindPaths(a1, &QueryTable, v2);
    v10 = Status;
    if ( Status )
      goto LABEL_66;
  }
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  *((_QWORD *)v9 + 3) = ndisSaveParameters;
  v9[8] = 20;
  v9[14] = 0;
  *((_QWORD *)v9 + 10) = 0LL;
  v9[22] = 0;
  *((_QWORD *)v9 + 12) = 0LL;
  *((_QWORD *)v9 + 1) = a1;
  if ( IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) < 0 )
  {
    if ( v18 != 1 )
      goto LABEL_29;
  }
  else
  {
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_INTERNAL, 0x10uLL) )
    {
      IntegerData = Internal;
      v18 = 0;
LABEL_27:
      if ( IntegerData != Isa && IntegerData != PCMCIABus )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_PCMCIA, 0x10uLL) )
    {
      IntegerData = PCMCIABus;
      v18 = 8;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_PCI, 0x10uLL) )
    {
      IntegerData = PCIBus;
      v18 = 5;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_USB, 0x10uLL) )
    {
      IntegerData = Vmcs;
      v18 = 16;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_IRDA, 0x10uLL) )
    {
      IntegerData = ACPIBus;
      v18 = 17;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_ISAPNP, 0x10uLL) )
    {
      IntegerData = PNPISABus;
      v18 = 14;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_1394, 0x10uLL) )
    {
      v18 = 18;
      goto LABEL_27;
    }
    if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_EISA, 0x10uLL) )
    {
      IntegerData = Eisa;
      v18 = 2;
      goto LABEL_27;
    }
  }
  if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyLegacyBusType, 4u, &v18, &ResultLength) >= 0 )
  {
    IntegerData = v18;
    goto LABEL_27;
  }
LABEL_29:
  *((_DWORD *)P[0] + 4) |= 1u;
  NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &Keyword, NdisParameterInteger);
  *((_DWORD *)P[0] + 4) &= ~1u;
  if ( Status )
  {
    IntegerData = v18;
  }
  else
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    v18 = IntegerData;
  }
LABEL_32:
  if ( IntegerData == PCIBus || IntegerData == PCMCIABus )
  {
    Status = ndisQueryBusInterface(a1);
    v10 = Status;
    if ( Status )
      goto LABEL_66;
    IntegerData = v18;
  }
  if ( (unsigned int)(IntegerData - 2) <= 1 )
  {
    v10 = -1073741637;
  }
  else
  {
    a1->BusType = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v26, NdisParameterInteger);
    if ( Status )
    {
      if ( (a1->PnPFlags & 0x200000) != 0 )
        a1->PnPCapabilities = ndisDefaultPnPCapabilities | 0x10000000;
    }
    else
    {
      a1->PnPCapabilities = ParameterValue->ParameterData.IntegerData;
    }
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL )
      a1->PnPCapabilities &= 0x10000100u;
    if ( IoGetDeviceProperty(a1->PhysicalDeviceObject, DevicePropertyBusNumber, 4u, &v21, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v27, NdisParameterInteger), Status) )
    {
      v12 = v21;
    }
    else
    {
      v12 = ParameterValue->ParameterData.IntegerData;
      v21 = v12;
    }
    a1->BusNumber = v12;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v28, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x40000000u);
      a1->InfoFlags |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      &ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v5 = ParameterValue->ParameterData.IntegerData;
      if ( v5 )
      {
        if ( v5 > 0xFFFF )
          LOWORD(v5) = -1;
      }
      else
      {
        LOWORD(v5) = 1;
      }
    }
    a1->MediaDisconnectTimeOut = v5;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      a1->FilterPnPFlags |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(&ConfigurationHandle, a1);
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v29, NdisParameterInteger);
    if ( !Status )
    {
      v13 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v13 = ParameterValue;
      }
      Length = v13->ParameterData.StringData.Length;
    }
    a1->SGMapRegistersNeeded = Length;
    NdisReadConfiguration(&Status, &ParameterValue, &ConfigurationHandle, &v30, NdisParameterHexInteger);
    if ( !Status )
      a1->DriverVerifyFlags = ParameterValue->ParameterData.IntegerData;
    v9[4] = 0;
    ndisReadOffloadRegistry(a1);
    ndisReadSoftwareTimestampSettings(&ConfigurationHandle, a1);
    v10 = 0;
  }
LABEL_66:
  v14 = (PVOID *)P[1];
  for ( i = P[1]; P[1]; i = P[1] )
  {
    P[1] = *v14;
    ExFreePoolWithTag(i, 0);
    v14 = (PVOID *)P[1];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      11,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  return v10;
}
