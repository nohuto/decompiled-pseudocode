/*
 * XREFs of ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001FD70
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x14001F2F0 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x140021250 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

void __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // esi
  _PROCESSOR_NUMBER v3; // ebx
  _NDIS_RSS_PROFILE v4; // r15d
  struct _PROCESSOR_NUMBER v5; // edi
  PVOID v6; // rbx
  unsigned __int16 Group; // r13
  unsigned int v8; // r12d
  unsigned int MaxNumRssProcessors; // eax
  _PROCESSOR_NUMBER v10; // ecx
  struct _PROCESSOR_NUMBER *v11; // r9
  unsigned int v12; // r8d
  _PROCESSOR_NUMBER *v13; // r9
  __int64 v14; // r10
  unsigned int IntegerData; // ecx
  unsigned __int8 Number; // dl
  struct _PROCESSOR_NUMBER v17; // r9d
  _PROCESSOR_NUMBER v18; // r9d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-48h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-40h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-38h] BYREF
  int Status; // [rsp+B0h] [rbp+38h] BYREF
  _PROCESSOR_NUMBER v23; // [rsp+B8h] [rbp+40h]
  struct _PROCESSOR_NUMBER v24; // [rsp+C0h] [rbp+48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+50h] BYREF

  v1 = 0;
  v3 = 0;
  ConfigurationHandle = 0LL;
  v4 = NdisRssProfileNumaStatic;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  if ( ndisHeterogeneousCpuSystem )
    v4 = NdisRssProfileBalanced;
  *(&ConfigObject.Flags + 1) = 0;
  ParameterValue = 0LL;
  v5 = 0;
  v24 = 0;
  v23 = 0;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue, (unsigned int)Status);
    NdisReadConfiguration(&Status, &ParameterValue, v6, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status )
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        if ( IntegerData < 7 )
          v4 = ParameterValue->ParameterData.IntegerData;
      }
    }
    if ( v4 == NdisRssProfileBalanced )
    {
      v23.Number = 63;
      v23.Group = 32;
    }
    else
    {
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
      Group = v24.Group;
      if ( !Status )
      {
        if ( ParameterValue->ParameterData.IntegerData < 0x20 )
          Group = ParameterValue->ParameterData.IntegerData;
        v24.Group = Group;
        v5 = v24;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
      if ( !Status )
      {
        Number = v24.Number;
        if ( ParameterValue->ParameterData.IntegerData < 0x40 )
          Number = ParameterValue->ParameterData.IntegerData;
        v24.Number = Number;
        v5 = v24;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
      if ( Status || (v8 = ParameterValue->ParameterData.IntegerData, v8 >= 0x20) )
      {
        LOWORD(v8) = 32;
        v23.Group = 32;
      }
      else
      {
        v23.Group = ParameterValue->ParameterData.IntegerData;
      }
      NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
      if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
      {
        v23.Number = 63;
      }
      else
      {
        v23.Number = ParameterValue->ParameterData.IntegerData;
        if ( (_WORD)v8 == 32 )
          v23.Group = Group;
      }
    }
    NdisCloseConfiguration(v6);
    v3 = v23;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  v10 = ProcNumber;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  if ( (int)ndisCompareProcNum(v10, v5) > 0 )
    v5 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v5,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * (unsigned int)(ndisRssCpuCount - 1))) > 0 )
    v5 = *v11;
  if ( (int)ndisCompareProcNum(v3, *v11) > 0 )
    v3 = *v13;
  while ( v1 < v12 )
  {
    if ( (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v14 + 4LL * v1), v5) >= 0 )
    {
      if ( (int)ndisCompareProcNum(v17, v3) > 0 )
        v3 = v18;
      break;
    }
    ++v1;
  }
  a1->RssBaseProcessor = v5;
  a1->RssMaxProcessor = v3;
  a1->RssProfile = v4;
}
