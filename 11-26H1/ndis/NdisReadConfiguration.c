/*
 * XREFs of NdisReadConfiguration @ 0x140020C40
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001EA80 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfReadConfiguration @ 0x14001FCC0 (NdisWdfReadConfiguration.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001FD70 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadNetworkAddress @ 0x1400200C0 (NdisReadNetworkAddress.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400202E0 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x14006A950 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006CB00 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085090 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008E6F0 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A1E4C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1400B1730 (-NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400C2EF8 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400E10E0 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143EF0 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143FF4 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x140166520 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401673E0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016BFA0 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14019118C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ndisReadUpperBindings @ 0x14004BD10 (ndisReadUpperBindings.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     ndisOpenProtocolSubkey @ 0x140060AC0 (ndisOpenProtocolSubkey.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x140065F50 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x140143374 (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x140143750 (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  unsigned int v5; // r15d
  NDIS_HANDLE v7; // r13
  PNDIS_STATUS v8; // r12
  NTSTATUS RegistryValues; // edi
  unsigned int i; // ebx
  _DWORD *v11; // rdx
  __int64 v12; // rbx
  unsigned int j; // ebx
  __int64 v14; // r14
  __int64 v15; // r12
  char *v16; // rax
  char *v17; // rdi
  _QWORD *v18; // r14
  _DWORD *v19; // rcx
  int v20; // edx
  size_t v21; // rdi
  const void *v22; // r14
  __int64 Pool2; // rax
  _QWORD *v24; // rbx
  _DWORD *v25; // rcx
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  _BYTE *v33; // rcx
  PVOID v34; // rbx
  int v35; // [rsp+30h] [rbp-81h] BYREF
  void *v36; // [rsp+38h] [rbp-79h]
  PNDIS_STATUS v37; // [rsp+40h] [rbp-71h]
  _DWORD v38[2]; // [rsp+48h] [rbp-69h]
  char v39; // [rsp+50h] [rbp-61h]
  unsigned int v40; // [rsp+58h] [rbp-59h] BYREF
  void *v41; // [rsp+60h] [rbp-51h]
  __int64 v42; // [rsp+68h] [rbp-49h]
  PVOID v43; // [rsp+70h] [rbp-41h] BYREF
  PVOID P; // [rsp+78h] [rbp-39h]
  _UNICODE_STRING String; // [rsp+80h] [rbp-31h] BYREF
  _OWORD v46[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-1h]

  v5 = 0;
  v41 = ConfigurationHandle;
  v36 = ParameterValue;
  v37 = Status;
  v47 = 0LL;
  v35 = 0;
  v7 = ConfigurationHandle;
  v43 = 0LL;
  v8 = Status;
  v40 = 0;
  String = 0LL;
  v38[0] = 67305985;
  memset(v46, 0, sizeof(v46));
  v38[1] = 33620481;
  v39 = 3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ParameterValue) = 4;
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ParameterValue,
      8,
      30,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (__int64)Keyword);
  }
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1400F4010 + i, 1u) )
    {
      LODWORD(v11) = (_DWORD)v36;
      RegistryValues = 0;
      *(_QWORD *)v36 = 0x140000000LL + 24LL * i + 1029664;
      goto LABEL_8;
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
  v42 = v12;
  if ( !v12 )
    goto LABEL_23;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    v21 = *(unsigned __int16 *)(v12 + 3808);
    v22 = *(const void **)(v12 + 3816);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v21 + 32), 1852851278LL);
    v24 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v25 = (_DWORD *)(Pool2 + 8);
      v26 = v36;
      *(_QWORD *)v36 = v25;
      *v25 = 2;
      *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v24 + 4;
      memmove(*(void **)(*(_QWORD *)v26 + 16LL), v22, v21);
      v11 = v36;
      *(_WORD *)(*(_QWORD *)v36 + 8LL) = v21;
      *(_WORD *)(*(_QWORD *)v11 + 10LL) = v21;
      if ( !*((_BYTE *)v22 + (unsigned int)(v21 - 1)) && !*((_BYTE *)v22 + (unsigned int)(v21 - 2)) )
        *(_WORD *)(*(_QWORD *)v11 + 8LL) -= 2;
      RegistryValues = 0;
      *v24 = *((_QWORD *)v7 + 3);
      *((_QWORD *)v7 + 3) = v24;
    }
    else
    {
      RegistryValues = -1073741670;
    }
    goto LABEL_8;
  }
  if ( RtlEqualUnicodeString(Keyword, &stru_1400F4070, 1u) && (*(_DWORD *)(*((_QWORD *)v7 + 2) + 16LL) & 1) == 0 )
  {
    if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
    {
      RegistryValues = ndisSaveParameters((wchar_t *)L"BusType", 4u, (void *)(v12 + 3720), 4u, v7, v36);
      goto LABEL_8;
    }
    if ( ParameterType == NdisParameterString )
    {
      String.MaximumLength = 40;
      String.Buffer = (wchar_t *)v46;
      RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3720), 0xAu, &String);
      if ( !RegistryValues )
        RegistryValues = ndisSaveParameters((wchar_t *)L"BusType", 1u, String.Buffer, String.Length, v7, v36);
      goto LABEL_8;
    }
  }
  for ( j = 0; j < 9; ++j )
  {
    v14 = 2LL * j;
    v15 = j;
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)((char *)&unk_1400F63B0 + v14 * 8), 1u) )
    {
      v28 = *(_QWORD *)(v42 + 944);
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 + 16);
        v30 = v28 + 12;
        while ( v5 < v29 )
        {
          v31 = *((unsigned __int8 *)v38 + v15);
          v11 = (_DWORD *)(v30 + 20LL * v5);
          if ( *((_BYTE *)v11 + 8) == (_BYTE)v31 )
          {
            if ( v31 == 1 )
              goto LABEL_71;
            if ( v31 == 2 )
            {
              v32 = *((unsigned __int16 *)v11 + 6);
LABEL_72:
              v35 = v32;
            }
            else if ( (unsigned int)(v31 - 3) <= 1 )
            {
LABEL_71:
              v32 = v11[3];
              goto LABEL_72;
            }
            RegistryValues = ndisSaveParameters((&off_1400F63B8)[v14], 4u, &v35, 4u, v41, v36);
            break;
          }
          ++v5;
        }
        v8 = v37;
        if ( v5 >= *(_DWORD *)(v30 + 4) )
          RegistryValues = -1073741823;
        goto LABEL_8;
      }
LABEL_84:
      v8 = v37;
      goto LABEL_8;
    }
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1400F4050, 1u) )
    goto LABEL_20;
  if ( ParameterType )
    goto LABEL_84;
  if ( ndisNDKGlobalDisabled() )
  {
    RegistryValues = 0;
    v27 = &unk_1400F7858;
    goto LABEL_83;
  }
LABEL_20:
  if ( RtlEqualUnicodeString(Keyword, &stru_1400F4060, 1u) )
  {
    if ( ParameterType == NdisParameterInteger )
    {
      dword_14011EA68 = ndisReadNDKGlobalFlags();
      RegistryValues = 0;
      v27 = &unk_14011EA60;
LABEL_83:
      LODWORD(v11) = (_DWORD)v36;
      *(_QWORD *)v36 = v27;
    }
    goto LABEL_84;
  }
  v12 = v42;
  v8 = v37;
  v7 = v41;
  if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
  {
    *(_DWORD *)(v42 + 568) |= 0x80u;
    *(_DWORD *)(v12 + 1872) |= 0x10000u;
  }
LABEL_23:
  if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        8,
        31,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
    }
    LODWORD(v11) = (_DWORD)v36;
    RegistryValues = 0;
    *(_QWORD *)v36 = &unk_1400F7858;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 2) + 16LL) & 2) == 0
    || *((_QWORD *)v7 + 4)
    || (RegistryValues = ndisOpenProtocolSubkey(v7), RegistryValues >= 0) )
  {
    v16 = (char *)ExAllocatePool2(66LL, Keyword->Length + 2LL, 538985550LL);
    P = v16;
    v17 = v16;
    if ( v16 )
    {
      memmove(v16, Keyword->Buffer, Keyword->Length);
      v18 = v36;
      *(_WORD *)&v17[Keyword->Length] = 0;
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) = v17;
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 48LL) = v18;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0x40000000u,
                         *((PCWSTR *)v7 + 4),
                         (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)v7 + 2) + 24LL),
                         v7,
                         0LL);
      goto LABEL_27;
    }
    RegistryValues = -1073741670;
  }
  else
  {
    v18 = v36;
LABEL_27:
    if ( v12 )
    {
LABEL_28:
      if ( RegistryValues < 0 )
        goto LABEL_8;
    }
    else if ( RegistryValues < 0 )
    {
      if ( !RtlEqualUnicodeString(Keyword, &stru_1400F4E48, 1u) )
        goto LABEL_8;
      v33 = (_BYTE *)*((_QWORD *)v7 + 1);
      if ( !v33 || *v33 != 2 || v33[24] < 6u || (unsigned int)ndisReadUpperBindings(v33, &v43, &v40) )
        goto LABEL_8;
      v34 = v43;
      RegistryValues = ndisSaveParameters((wchar_t *)L"UpperBindings", 7u, v43, v40, v7, v18);
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      goto LABEL_28;
    }
    v19 = (_DWORD *)*v18;
    if ( *(_DWORD *)*v18 == 2 )
    {
      if ( ParameterType )
      {
        if ( ParameterType == NdisParameterHexInteger )
        {
          RtlUnicodeStringToInteger((PCUNICODE_STRING)(v19 + 2), 0x10u, v19 + 2);
          *(_DWORD *)*v18 = 1;
        }
      }
      else
      {
        RtlUnicodeStringToInteger((PCUNICODE_STRING)(v19 + 2), 0xAu, v19 + 2);
        *(_DWORD *)*v18 = 0;
      }
    }
LABEL_8:
    if ( P && P != Keyword->Buffer )
      ExFreePoolWithTag(P, 0);
  }
  *v8 = (RegistryValues >> 31) & 0xC0000001;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      8,
      32,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
  }
}
