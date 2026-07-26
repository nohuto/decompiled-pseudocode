/*
 * XREFs of ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006CB00
 * Callers:
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C980 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 */

NTSTATUS __fastcall ndisMFindNumaNode(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edi
  NDIS_HANDLE v4; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int IntegerData; // edx
  struct _NDIS_CONFIGURATION_OBJECT v7; // [rsp+30h] [rbp-38h] BYREF
  int Status; // [rsp+70h] [rbp+8h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+78h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+18h] BYREF

  v7.NdisHandle = a1;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&v7.Flags = 0LL;
  ParameterValue = 0LL;
  *(_QWORD *)&v7.Header.Type = 1311145LL;
  Status = NdisOpenConfigurationEx(&v7, &ConfigurationHandle);
  v2 = Status;
  if ( Status >= 0 )
  {
    v4 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NumaNodeIdStr, NdisParameterInteger);
    v2 = Status;
    if ( Status >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData > HighestNodeNumber )
        v2 = -1073676267;
      else
        a1->NumaNodeId = IntegerData;
    }
    NdisCloseConfiguration(v4);
  }
  if ( v2 >= 0 )
    return v2;
  else
    return IoGetDeviceNumaNode(a1->PhysicalDeviceObject, &a1->NumaNodeId);
}
